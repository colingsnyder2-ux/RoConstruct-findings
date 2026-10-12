// from server: 99% by king_originala
namespace RBX {
    struct Instance {
        virtual ~Instance();
    };

    struct Humanoid;

    struct ModelInstance : Instance {
        Humanoid* getHumanoid();
    };

    struct Humanoid {
        static Humanoid* fromInstance(Instance*);
    };
}

RBX::Humanoid* RBX::Humanoid::fromInstance(RBX::Instance* instance)
{
    if (instance) {
        ModelInstance* model = dynamic_cast<ModelInstance*>(instance);
        if (model)
            return model->getHumanoid();
    }
    return 0;
}
