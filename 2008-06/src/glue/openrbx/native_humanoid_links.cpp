// Native OpenRBX definitions, isolated from the incomplete Humanoid/Network TUs.
#include "humanoid/Humanoid.h"
#include "v8kernel/Body.h"

namespace RBX {

PartInstance* Humanoid::getTorso() const
{
	if (torso == NULL && getParent() != NULL) {
		torso = shared_from_dynamic_cast<PartInstance>(getParent()->findFirstChildByName("Torso"));
	}
	return torso.get();
}

Primitive* Humanoid::getTorsoPrimitive() const
{
	PartInstance* part = getTorso();
	return part != NULL ? part->getPrimitive() : NULL;
}

Body* Humanoid::getTorsoBody()
{
	PartInstance* part = getTorso();
	return part != NULL ? part->getPrimitive()->getBody() : NULL;
}

Body* Humanoid::getRootBody()
{
	Body* body = getTorsoBody();
	return body != NULL ? body->getRoot() : NULL;
}

namespace Network {
// tools/openrbx/Client/Network/Players.cpp
char sPlayers[] = "Players";
}

}
