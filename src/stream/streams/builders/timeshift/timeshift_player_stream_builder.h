/*  Copyright (C) 2014-2022 FastoGT. All right reserved.
    This file is part of fastocloud.
    fastocloud is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    fastocloud is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with fastocloud.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "stream/streams/builders/relay/relay_stream_builder.h"

#include "stream/timeshift.h"

namespace fastocloud {
namespace stream {
namespace streams {
namespace builders {

class TimeShiftPlayerBuilder : public RelayStreamBuilder {
 public:
  typedef RelayStreamBuilder base_class;
  TimeShiftPlayerBuilder(TimeShiftInfo tinfo,
                         chunk_index_t start_chunk_index,
                         const RelayConfig* api,
                         SrcDecodeBinStream* observer);

  elements::Element* BuildInputSrc() override;

 private:
  TimeShiftInfo tinfo_;
  const chunk_index_t start_chunk_index_;
};

}  // namespace builders
}  // namespace streams
}  // namespace stream
}  // namespace fastocloud
