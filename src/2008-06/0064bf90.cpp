// from server: 82% by colin
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lang: cpp
// roc-lib: rbxgs roc_unit_7b9b53600232d381.cpp

// Candidate translation unit (score above; library headers required).
#undef _RELEASEASSERT
#pragma include_alias("v8world/SleepStage.h", "roc_unit_e122b107650b8d44.cpp")
#pragma include_alias("v8world/Assembly.h", "roc_unit_c2191b1d8d68a719.cpp")
#pragma include_alias("v8world/Edge.h", "roc_unit_ad178cfd636587c6.cpp")
#include "v8world/SleepStage.h"
namespace RBX {
void SleepStage::onEdgeAdded(Edge* e)
{
	Assembly* a0 = e->getPrimitive(0)->getAssembly();
	Assembly* a1 = e->getPrimitive(1)->getAssembly();

	e->putInPipeline(this);

	if (e->getEdgeType() == Edge::CONTACT) {
		(*reinterpret_cast<ContactList*>(reinterpret_cast<char*>(this) + 0x1a0)).fastAppend(static_cast<Contact*>(e));
		e->setEdgeState(Sim::STEPPING);
		(*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xd0))++;
	}
	else {
		e->setEdgeState(Sim::SLEEPING);
		changeJointState(static_cast<Joint*>(e), Sim::STEPPING);
	}
}

void SleepStage::changeContactState(Contact* c, Sim::EdgeState newState)
{
	Sim::EdgeState currentState = c->getEdgeState();

	bool wasStepping = currentState == Sim::STEPPING;
	bool wasTouching = currentState == Sim::TOUCHING;
	bool desiredInStepping = newState == Sim::STEPPING;
	bool isTouching = newState == Sim::TOUCHING;

	if (wasStepping != desiredInStepping) {
		if (wasStepping) {
			(*reinterpret_cast<ContactList*>(reinterpret_cast<char*>(this) + 0x1a0)).fastRemove(c);
		}
	}

	if (wasTouching != isTouching) {
		if (wasTouching) {
			(*reinterpret_cast<ContactList*>(reinterpret_cast<char*>(this) + 0x1ac)).fastRemove(c);
		}
	}

	if (wasStepping != desiredInStepping) {
		if (desiredInStepping) {
			(*reinterpret_cast<ContactList*>(reinterpret_cast<char*>(this) + 0x1a0)).fastAppend(c);
		}
	}

	if (wasTouching != isTouching) {
		if (isTouching) {
			(*reinterpret_cast<ContactList*>(reinterpret_cast<char*>(this) + 0x1ac)).fastAppend(c);
		}
	}

	if (wasTouching != isTouching) {
		if (wasTouching) {
			getDownstreamWS()->onEdgeRemoving(c);
			(*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xd4))--;
		}
		else {
			getDownstreamWS()->onEdgeAdded(c);
			(*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xd4))++;
		}
	}

	if (currentState == Sim::STEPPING && newState == Sim::TOUCHING) {
		touchEvent(c);
	}
	else if (currentState == Sim::TOUCHING && newState == Sim::STEPPING) {
		wakeEvent(c);
	}

	c->setEdgeState(newState);
}
}
