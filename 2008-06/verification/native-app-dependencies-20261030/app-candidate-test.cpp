#include "force_verified.h"
// RBX App rebuild test: instance tree (create, name, parent, find).
#include "v8datamodel/Message.h"
#include "humanoid/Humanoid.h"
#include "v8kernel/Body.h"
#include <cstdio>

int main()
{
    int failures = 0;
    boost::shared_ptr<RBX::Message> root = RBX::Creatable<RBX::Instance>::create<RBX::Message>();
    boost::shared_ptr<RBX::Message> child = RBX::Creatable<RBX::Instance>::create<RBX::Message>();
    root->setName("Root");
    child->setName("Child");
    child->setParent(root.get());
    if (root->numChildren() != 1 || root->findFirstChildByName("Child") != child.get()) { std::printf("tree\n"); ++failures; }
    if (root->getClassName().empty()) { std::printf("class name\n"); ++failures; }
    child->setParent(NULL);
    if (root->numChildren() != 0) { std::printf("unparent %u\n", root->numChildren()); ++failures; }
    boost::shared_ptr<RBX::Humanoid> humanoid = RBX::Creatable<RBX::Instance>::create<RBX::Humanoid>();
    if (humanoid->getTorsoPrimitive() || humanoid->getTorsoBody() || humanoid->getRootBody()) {
        std::printf("empty humanoid accessors\n"); ++failures;
    }
    boost::shared_ptr<RBX::PartInstance> torso = RBX::Creatable<RBX::Instance>::create<RBX::PartInstance>();
    if (!torso->getPrimitive() || !torso->getPrimitive()->getBody() ||
        torso->getPrimitive()->getBody()->getRoot() != torso->getPrimitive()->getBody()) {
        std::printf("part primitive/body initialization\n"); ++failures;
    }
    std::printf("failures=%d\n", failures);
    return failures;
}
