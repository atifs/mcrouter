/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#pragma once

namespace carbon {

class MessageCommon {
 public:
  /**
   * Gets the current trace context string.
   *
   * @return  The trace context string, or empty string if this message is
   *          not being traced.
   */
  const std::string& traceContext() const {
    return traceContext_;
  }

  /**
   * Sets the trace context for this message.
   * If trace context is present, this message will be traced.
   *
   * @param @traceContext   The trace context string.
   */
  void setTraceContext(std::string traceContext) {
    traceContext_ = std::move(traceContext);
  }

 private:
  std::string traceContext_;
};

} // namespace carbon
