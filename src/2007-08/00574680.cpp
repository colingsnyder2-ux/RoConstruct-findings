// from server: 58% by colin
// roc 2007-08 00574680  unit: RBX::P8PartInstance::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574680
//
// 00574680  8bc1                 mov eax, ecx
// 00574682  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574686  85c9                 test ecx, ecx
// 00574688  7405                 je 0x57468f
// 0057468a  83c1fc               add ecx, -4
// 0057468d  eb02                 jmp 0x574691
// 0057468f  33c9                 xor ecx, ecx
// 00574691  56                   push esi
// 00574692  8b7010               mov esi, dword ptr [eax + 0x10]
// 00574695  8d54240c             lea edx, [esp + 0xc]
// 00574699  52                   push edx
// 0057469a  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 005746a0  8b1432               mov edx, dword ptr [edx + esi]
// 005746a3  03500c               add edx, dword ptr [eax + 0xc]
// 005746a6  8b4008               mov eax, dword ptr [eax + 8]
// 005746a9  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 005746b0  ffd0                 call eax
// 005746b2  8b08                 mov ecx, dword ptr [eax]
// 005746b4  8b442408             mov eax, dword ptr [esp + 8]
// 005746b8  8908                 mov dword ptr [eax], ecx
// 005746ba  5e                   pop esi
// 005746bb  c20800               ret 8

struct GetSetImpl {
    char pad[8];
    int (__stdcall* fn)(void*, int*);
    int offset;
    int index;
};

int __stdcall GetSetImpl_GetSet(GetSetImpl* self, int* out, int arg)
{
    GetSetImpl* obj;
    if (arg) {
        obj = (GetSetImpl*)(arg - 4);
    } else {
        obj = 0;
    }
    int idx = self->index;
    int* tmp = &arg;
    int off = *(int*)((char*)obj + 0xec);
    off = *(int*)(off + idx);
    off += self->offset;
    int (__stdcall* f)(void*, int*) = self->fn;
    int* result = (int*)f((char*)obj + off + 0xec, tmp);
    *out = *result;
    return (int)out;
}
