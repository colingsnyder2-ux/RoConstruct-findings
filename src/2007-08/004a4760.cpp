// from server: 53% by colin
// roc 2007-08 004a4760  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4760
//
// 004a4760  7900                 jns 0x4a4762
// 004a4762  897004               mov dword ptr [eax + 4], esi
// 004a4765  894810               mov dword ptr [eax + 0x10], ecx
// 004a4768  895014               mov dword ptr [eax + 0x14], edx
// 004a476b  8bf8                 mov edi, eax
// 004a476d  eb02                 jmp 0x4a4771
// 004a476f  33ff                 xor edi, edi
// 004a4771  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a4774  3bf8                 cmp edi, eax
// 004a4776  7409                 je 0x4a4781
// 004a4778  50                   push eax
// 004a4779  e8e4b41800           call 0x62fc62
// 004a477e  83c404               add esp, 4
// 004a4781  8bc6                 mov eax, esi
// 004a4783  897e18               mov dword ptr [esi + 0x18], edi
// 004a4786  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a478a  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4791  59                   pop ecx
// 004a4792  5f                   pop edi
// 004a4793  5e                   pop esi
// 004a4794  83c414               add esp, 0x14
// 004a4797  c21000               ret 0x10

struct S {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
};

extern "C" void __cdecl free18(void* p);

S* __stdcall assign(S* self, S* other, int a, int b, int c) {
    S* result;
    if (self != 0) {
        self->field4 = (int)other;
        self->field10 = (int)self;
        self->field14 = (int)other;
        result = self;
    } else {
        result = 0;
    }
    int* old = (int*)other->field18;
    if (result != (S*)old) {
        free18(old);
    }
    other->field18 = (int)result;
    return other;
}
