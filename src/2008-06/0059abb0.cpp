namespace RBX {
class Adorn;
class Part;

enum SelectState { SELECT_NORMAL, SELECT_HOVER, SELECT_SELECTED };

class DrawAdorn
{
public:
    static void partSelect(const Part& part, Adorn* adorn, SelectState selectState);
};

class Instance
{
    char data[0x1c8];
public:
    virtual ~Instance();
};

class IRenderable
{
public:
    virtual void render3dSelect(Adorn* adorn, SelectState selectState) = 0;
};

class PartInstance : public Instance, public IRenderable
{
public:
    const Part& getPart();
    virtual void render3dSelect(Adorn* adorn, SelectState selectState);
};

void PartInstance::render3dSelect(Adorn* adorn, SelectState selectState)
{
    DrawAdorn::partSelect(getPart(), adorn, selectState);
}
}
