// from server: 41% by colin
// roc 2007-08 005c4230  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4230
//
// 005c4230  6aff                 push -1
// 005c4232  68b8977500           push 0x7597b8
// 005c4237  64a100000000         mov eax, dword ptr fs:[0]
// 005c423d  50                   push eax
// 005c423e  64892500000000       mov dword ptr fs:[0], esp
// 005c4245  51                   push ecx
// 005c4246  56                   push esi
// 005c4247  8bf1                 mov esi, ecx
// 005c4249  89742404             mov dword ptr [esp + 4], esi
// 005c424d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c4251  50                   push eax
// 005c4252  8d4e04               lea ecx, [esi + 4]
// 005c4255  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c425d  c706ac957b00         mov dword ptr [esi], 0x7b95ac
// 005c4263  e8d8feffff           call 0x5c4140
// 005c4268  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c426c  8bc6                 mov eax, esi
// 005c426e  5e                   pop esi
// 005c426f  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4276  83c410               add esp, 0x10
// 005c4279  c20400               ret 4

struct GenericSlotWrapper
{
    void* vtable;
    void construct(const void* slot);
};

void GenericSlotWrapper::construct(const void* slot)
{
    *(void**)this = (void*)0x7b95ac;
    *(void**)((char*)this + 4) = 0;
    void* p = *(void**)((char*)this + 4);
    (void)p;
    void* s = (void*)slot;
    (void)s;
    extern void __stdcall sub_5c4140(void*, const void*);
    sub_5c4140((char*)this + 4, slot);
}
