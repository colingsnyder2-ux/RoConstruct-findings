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
    RBX::Primitive* primitive = torso->getPrimitive();
    if (primitive) {
        const G3D::Vector3& size = primitive->getGridSize();
        if (size != G3D::Vector3(4.0f, 1.2f, 2.0f) ||
            primitive->getFriction() != 0.3f || primitive->getElasticity() != 0.5f ||
            !primitive->getCanCollide() ||
            primitive->getSurfaceType(RBX::NORM_Y) != RBX::STUDS ||
            primitive->getSurfaceType(RBX::NORM_Y_NEG) != RBX::INLET ||
            torso->getFormFactor() != RBX::PartInstance::BRICK ||
            torso->getColor() != RBX::BrickColor(RBX::BrickColor::lego_194) ||
            primitive->getOwner() != static_cast<RBX::IMoving*>(torso.get()) ||
            RBX::Guid::compare(&primitive->getGuid(), &torso->getGuid()) != 0) {
            std::printf("part constructor defaults/owner/GUID\n"); ++failures;
        }
    }
    std::printf("failures=%d\n", failures);
    return failures;
}
