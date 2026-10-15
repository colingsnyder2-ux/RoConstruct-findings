// from server: 81% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void* __cdecl memcpy(void*, const void*, unsigned int);
#pragma intrinsic(memcpy)

struct Matrix {
    float elements[9];
};

struct Transform {
    Matrix rotation;
    float x;
    float y;
    float z;
};

struct Owner {
    unsigned char padding[0x90];
    int stamp;
};

struct UpdateTarget {
    void update();
};

struct DirtyFlag {
    unsigned char padding[4];
    unsigned char dirty;
};

struct PendingFlag {
    unsigned char padding[8];
    unsigned char pending;
};

struct Link {
    unsigned char padding[4];
    int value;
};

extern int updateCounter;

struct S {
    unsigned char padding0[0x10];
    Owner* owner;
    UpdateTarget* target;
    unsigned char padding1[0x10];
    DirtyFlag* dirtyFlag;
    PendingFlag* pendingFlag;
    unsigned char padding2[4];
    Link* link;
    Transform transform;

    void setTransform(const Transform& value);
};

void S::setTransform(const Transform& value)
{
    if (link) {
        link->value = 0;
        link = 0;
    }

    if (target) {
        Transform* destination = &transform;
        memcpy(&destination->rotation, &value.rotation, 36);
        destination->x = value.x;
        destination->y = value.y;
        destination->z = value.z;

        if (!dirtyFlag || !dirtyFlag->dirty) {
            if (target)
                target->update();
            else if (pendingFlag)
                pendingFlag->pending = 1;

            if (dirtyFlag)
                dirtyFlag->dirty = 1;
        }

        int stamp = ++updateCounter;
        Owner* destinationOwner = owner;
        if (stamp == 0x7fffffff) {
            stamp = 1;
            updateCounter = stamp;
        }
        destinationOwner->stamp = stamp;
    }
}
