// from server: 92% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_arrowportablefactorye4682de5f6b7887d.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("util/Object.h", "roc_espeon_arrowfactoryheader347662b16dc22b66.cpp")
#pragma include_alias(<boost/shared_ptr.hpp>, <roc_espeon_arrowsharedinlineheader0ad389253c5b3b54.cpp>)
#pragma include_alias("boost/shared_ptr.hpp", "roc_espeon_arrowsharedinlineheader0ad389253c5b3b54.cpp")
#undef _RELEASEASSERT
#pragma include_alias("tool/ToolsArrow.h", "roc_espeon_arrowheader66b4d011f2b53c41.cpp")
#pragma include_alias("tool/DragTool.h", "roc_espeon_arrowheader9c817239d1fa3743.cpp")
#pragma include_alias("util/IRenderable.h", "roc_espeon_renderableaccessheaderd4d76fdf723bc309.cpp")
#pragma include_alias("reflection/function.h", "roc_espeon_machineheader2f6c7dcf10adead1.cpp")
#pragma include_alias("reflection/signal.h", "roc_espeon_machineheader16e657153fe9fb6e.cpp")
#pragma include_alias("reflection/type.h", "roc_espeon_machineheader4aaa2bdeb1c2b6c3.cpp")
#pragma include_alias("reflection/reflection.h", "roc_espeon_machineheadera6fefc64bf3a6f9e.cpp")
#pragma include_alias("reflection/Reflection.h", "roc_espeon_machineheadera6fefc64bf3a6f9e.cpp")
#pragma include_alias("reflection/enumconverter.h", "roc_espeon_machineheader297ae1c3351d4ab6.cpp")
#pragma include_alias("reflection/object.h", "roc_espeon_machineheadercadaaebe20af2047.cpp")
#pragma include_alias("reflection/member.h", "roc_espeon_machineheader459d66d9acfae4ab.cpp")
#pragma include_alias("reflection/descriptor.h", "roc_espeon_machineheader0acd23dba6f04ff5.cpp")
#pragma include_alias("reflection/property.h", "roc_espeon_machineheadercfb6c68c9dd60df6.cpp")
#pragma include_alias(<v8tree/Verb.h>, <roc_espeon_insertnativeheader1a746c4cc8c6ae06.cpp>)
#pragma include_alias("v8tree/Verb.h", "roc_espeon_insertnativeheader1a746c4cc8c6ae06.cpp")
#pragma include_alias(<util/Name.h>, <roc_espeon_insertnativeheader115b7bccd0a9061e.cpp>)
#pragma include_alias("util/Name.h", "roc_espeon_insertnativeheader115b7bccd0a9061e.cpp")
#pragma include_alias(<util/Debug.h>, <roc_espeon_insertnativeheader5fe96130a83d2e88.cpp>)
#pragma include_alias("util/Debug.h", "roc_espeon_insertnativeheader5fe96130a83d2e88.cpp")
#pragma include_alias("v8tree/Instance.h", "roc_espeon_nativeinstanceguidportablea1682bda32c99cd2.cpp")
#include "tool/ToolsArrow.h"
#include "tool/DragTool.h"
#include "v8datamodel/Camera.h"
#include "v8datamodel/PartInstance.h"
#include "v8datamodel/Selection.h"
#include "v8datamodel/Workspace.h"
#include <G3D/Rect2D.h>

namespace RBX
{
 boost::shared_ptr<Decal> shared_from(Decal*);
	MouseCommand* ArrowToolBase::onMouseDown(const UIEvent& uiEvent)
	{
		RBXASSERT(uiEvent.eventType == UIEvent::MOUSE_LEFT_BUTTON_DOWN);

		G3D::Vector3 hitWorld;

		PartInstance* part = getUnlockedPart(uiEvent, hitWorld);
		if (part)
		{
			Instance* top = getTopSelectable3d(part);
			UserInputBase* input = uiEvent.userInput;

			ServiceClient<Selection> selection(workspace);

			if (!input->keyDown(SDLK_RSHIFT) && !input->keyDown(SDLK_LSHIFT) &&
				!input->keyDown(SDLK_RCTRL) && !input->keyDown(SDLK_LCTRL))
			{
                boost::shared_ptr<Decal> decal;
                if(selection->isSelected(top))
                    decal=shared_from(findSelectedDecal(part,uiEvent));
                else
                    selection->setSelection(top);
                ServiceClient<FilteredSelection<Instance> > instanceSelection(workspace);
                return DragTool::onMouseDown(part,hitWorld,instanceSelection->items(),uiEvent,workspace,decal);

			}
			else
			{
				if (selection->isSelected(top))
					selection->removeFromSelection(top);
				else
					selection->addToSelection(top);
			}

			return NULL;
		}
		else
		{
			MouseCommand* newCommand = new BoxSelectCommand(workspace);
			return newCommand->onMouseDown(uiEvent);
		}
	}


}
