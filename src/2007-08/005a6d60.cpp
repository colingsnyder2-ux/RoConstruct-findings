// from server: 76% by colin
struct PartInstance;

struct Humanoid {
    void addStatusFromBodyPart(PartInstance* part);
};

extern "C" void* __fastcall getBodyPart(Humanoid* self);
extern "C" void __fastcall addStatusToModel(PartInstance* model, PartInstance** part);

void Humanoid::addStatusFromBodyPart(PartInstance* part)
{
    void* p;
    PartInstance* q;

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }

    p = getBodyPart(this);
    if (p) {
        q = *(PartInstance**)((char*)p + 0x1d8);
        if (q) {
            addStatusToModel(part, &q);
        }
    }
}
