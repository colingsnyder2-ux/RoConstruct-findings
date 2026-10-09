// from server: 66% by colin
// roc 2007-08 005a4ea0  unit: RBX::P8Humanoid::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4ea0
//
// 005a4ea0  8bc1                 mov eax, ecx
// 005a4ea2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4ea6  83ec0c               sub esp, 0xc
// 005a4ea9  85c9                 test ecx, ecx
// 005a4eab  7405                 je 0x5a4eb2
// 005a4ead  83c1fc               add ecx, -4
// 005a4eb0  eb02                 jmp 0x5a4eb4
// 005a4eb2  33c9                 xor ecx, ecx
// 005a4eb4  56                   push esi
// 005a4eb5  8b7010               mov esi, dword ptr [eax + 0x10]
// 005a4eb8  8d542404             lea edx, [esp + 4]
// 005a4ebc  52                   push edx
// 005a4ebd  8b9108010000         mov edx, dword ptr [ecx + 0x108]
// 005a4ec3  8b1432               mov edx, dword ptr [edx + esi]
// 005a4ec6  03500c               add edx, dword ptr [eax + 0xc]
// 005a4ec9  8b4008               mov eax, dword ptr [eax + 8]
// 005a4ecc  8d8c0a08010000       lea ecx, [edx + ecx + 0x108]
// 005a4ed3  ffd0                 call eax
// 005a4ed5  d900                 fld dword ptr [eax]
// 005a4ed7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4edb  d919                 fstp dword ptr [ecx]
// 005a4edd  5e                   pop esi
// 005a4ede  d94004               fld dword ptr [eax + 4]
// 005a4ee1  d95904               fstp dword ptr [ecx + 4]
// 005a4ee4  d94008               fld dword ptr [eax + 8]
// 005a4ee7  8bc1                 mov eax, ecx
// 005a4ee9  d95908               fstp dword ptr [ecx + 8]
// 005a4eec  83c40c               add esp, 0xc
// 005a4eef  c20800               ret 8

struct GetSetImpl {
    int pad0;
    int pad4;
    int get;
    int offset;
    int index;
    float* __stdcall getValue(void* obj, float* out);
};

float* __stdcall GetSetImpl::getValue(void* obj, float* out)
{
    char* p = (char*)obj;
    if (p != 0)
        p -= 4;
    else
        p = 0;
    int idx = *(int*)((char*)this + 0x10);
    int* vtbl = *(int**)(p + 0x108);
    int off = *(int*)((char*)vtbl + idx);
    off += *(int*)((char*)this + 0xc);
    int (*fn)(void*) = *(int (**)(void*))((char*)this + 8);
    float* result = (float*)fn((char*)p + off + 0x108);
    out[0] = result[0];
    out[1] = result[1];
    out[2] = result[2];
    return out;
}
