// from server: 38% by colin
struct IStage {
    virtual bool isValid() const;
    virtual bool isAlive() const;
};

struct Joint {
    virtual int getJointType() const;
};

struct Primitive {
    virtual int getPrimitiveType() const;
};

struct JointStage {
    bool onPrimitiveAdded(Primitive* p);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

bool sub_5B31D0(IStage* self);
bool sub_5B3010(IStage* self);
void* sub_5B3060(JointStage* self, Joint* j);
int sub_5B2FC0(void* self);
bool sub_5B2FB0(void* self);
bool sub_5B3020(void* self);
void sub_627240(void* self);

bool JointStage::onPrimitiveAdded(Primitive* p) {
    if (!sub_5B31D0((IStage*)this)) {
        return false;
    }
    if (!sub_5B3010((IStage*)this)) {
        return false;
    }

    Joint** begin = *(Joint***)((char*)p + 0x28);
    Joint** end = *(Joint***)((char*)p + 0x2C);
    Joint** cur = begin;

    while (cur != end) {
        Joint* j = *cur;
        if (j->getJointType() >= p->getPrimitiveType()) {
            void* v = sub_5B3060(this, j);
            if (sub_5B2FC0(v) == 0 && !sub_5B2FB0(v) && !sub_5B3020(v)) {
                return false;
            }
        }
        sub_627240(&cur);
    }

    return true;
}
