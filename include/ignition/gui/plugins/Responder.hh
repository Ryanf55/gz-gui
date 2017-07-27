/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef IGNITION_GUI_PLUGINS_RESPONDER_HH_
#define IGNITION_GUI_PLUGINS_RESPONDER_HH_

#ifndef Q_MOC_RUN
  #include <ignition/gui/qt.h>
#endif

#include <memory>

#include "ignition/gui/Plugin.hh"

namespace ignition
{
namespace gui
{
namespace plugins
{
  class ResponderPrivate;

  class Responder : public Plugin
  {
    Q_OBJECT

    /// \brief Constructor
    /// \param[in] _parent Parent widget
    public: Responder();

    /// \brief Destructor
    public: virtual ~Responder();

    // Documentation inherited
    public: virtual void LoadConfig(const tinyxml2::XMLElement *_pluginElem);

    /// \brief Callback when serve button is pressed.
    public slots: void OnServe();

    /// \internal
    /// \brief Pointer to private data.
    private: std::unique_ptr<ResponderPrivate> dataPtr;
  };
}
}
}

#endif
