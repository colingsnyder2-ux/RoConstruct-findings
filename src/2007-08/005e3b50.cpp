// from server: 44% by colin
// roc 2007-08 005e3b50  unit: RBX::Unlocked  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3b50

struct Primitive;

struct HitTestFilter
{
    enum Result { STOP_TEST = 0, INCLUDE_PRIM = 1 };
};

struct Unlocked : HitTestFilter
{
    static bool unlocked(const Primitive* testMe);
    Result filterResult(const Primitive* testMe) const;
};

extern "C" void __cdecl sub_5e3ac0(void*, const Primitive*, int);
extern "C" void __cdecl sub_5e3890(void*, const Primitive*);

HitTestFilter::Result Unlocked::filterResult(const Primitive* testMe) const
{
    int local = 0;
    sub_5e3ac0(&local, testMe, 0);
    sub_5e3890(&local, testMe);
    return local ? INCLUDE_PRIM : STOP_TEST;
}
