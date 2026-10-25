// from server: 100% by king_originala
// roc 2008-06 0046b500  unit: VCWorkspace::?$CComObject  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046b500
//
// 0046b500  83ec10               sub esp, 0x10
// 0046b503  e860542300           call 0x6a0968
// 0046b508  50                   push eax
// 0046b509  8d4c2404             lea ecx, [esp + 4]
// 0046b50d  e850542300           call 0x6a0962
// 0046b512  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046b516  e8c5fbffff           call 0x46b0e0
// 0046b51b  8b442404             mov eax, dword ptr [esp + 4]
// 0046b51f  85c0                 test eax, eax
// 0046b521  7406                 je 0x46b529
// 0046b523  8b0c24               mov ecx, dword ptr [esp]
// 0046b526  894804               mov dword ptr [eax + 4], ecx
// 0046b529  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046b52e  740c                 je 0x46b53c
// 0046b530  8b542408             mov edx, dword ptr [esp + 8]
// 0046b534  52                   push edx
// 0046b535  6a00                 push 0
// 0046b537  e820542300           call 0x6a095c
// 0046b53c  33c0                 xor eax, eax
// 0046b53e  83c410               add esp, 0x10
// 0046b541  c20400               ret 4

struct StateSlot
{
    unsigned long reserved;
    void* value;
};

struct StateGuard
{
    void* previous;
    StateSlot* slot;
    void* context;
    int active;

    void initialize(void*);
};

struct Object
{
    void update();
};

extern "C" void* __stdcall getState();
extern "C" void __stdcall releaseState(int, void*);

int __stdcall function(Object* object)
{
    StateGuard guard;
    guard.initialize(getState());
    object->update();

    if (guard.slot)
        guard.slot->value = guard.previous;

    if (guard.active)
        releaseState(0, guard.context);

    return 0;
}
