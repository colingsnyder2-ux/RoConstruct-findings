// from server: 80% by colin
// roc 2007-08 00581090  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581090
//
// 00581090  8bc1                 mov eax, ecx
// 00581092  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581096  85c9                 test ecx, ecx
// 00581098  7405                 je 0x58109f
// 0058109a  83c1fc               add ecx, -4
// 0058109d  eb02                 jmp 0x5810a1
// 0058109f  33c9                 xor ecx, ecx
// 005810a1  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 005810a7  56                   push esi
// 005810a8  8b7010               mov esi, dword ptr [eax + 0x10]
// 005810ab  8b1432               mov edx, dword ptr [edx + esi]
// 005810ae  03500c               add edx, dword ptr [eax + 0xc]
// 005810b1  8b4008               mov eax, dword ptr [eax + 8]
// 005810b4  57                   push edi
// 005810b5  8d8c0af8000000       lea ecx, [edx + ecx + 0xf8]
// 005810bc  ffd0                 call eax
// 005810be  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005810c2  8bf0                 mov esi, eax
// 005810c4  56                   push esi
// 005810c5  8bcf                 mov ecx, edi
// 005810c7  e80485f8ff           call 0x5095d0
// 005810cc  d94624               fld dword ptr [esi + 0x24]
// 005810cf  d95f24               fstp dword ptr [edi + 0x24]
// 005810d2  8bc7                 mov eax, edi
// 005810d4  d94628               fld dword ptr [esi + 0x28]
// 005810d7  d95f28               fstp dword ptr [edi + 0x28]
// 005810da  d9462c               fld dword ptr [esi + 0x2c]
// 005810dd  d95f2c               fstp dword ptr [edi + 0x2c]
// 005810e0  5f                   pop edi
// 005810e1  5e                   pop esi
// 005810e2  c20800               ret 8

struct GetSetImpl {
    char pad[0x8];
    int (__thiscall *get)(void*);
    char pad2[0x4];
    int offset;
    int index;
    int (__thiscall *set)(void*, int);
    char pad3[0xE0];
    int vtable;
    int func_00581090(int arg1, int arg2);
};

extern "C" void __stdcall func_005095d0(void*, int);

int GetSetImpl::func_00581090(int arg1, int arg2)
{
    GetSetImpl* self = this;
    int* obj = (int*)arg2;
    if (obj != 0)
        obj = (int*)((char*)obj - 4);
    else
        obj = 0;

    int vtable = *(int*)((char*)obj + 0xf8);
    int idx = *(int*)((char*)self + 0x10);
    int fn = *(int*)(vtable + idx);
    fn += *(int*)((char*)self + 0xc);
    int getter = *(int*)((char*)self + 8);
    int result = ((int (__thiscall*)(void*))getter)((void*)((char*)obj + 0xf8 + fn));

    int* out = (int*)arg1;
    func_005095d0(out, result);
    *(float*)((char*)out + 0x24) = *(float*)((char*)result + 0x24);
    *(float*)((char*)out + 0x28) = *(float*)((char*)result + 0x28);
    *(float*)((char*)out + 0x2c) = *(float*)((char*)result + 0x2c);
    return (int)out;
}
