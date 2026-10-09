// from server: 71% by colin
// roc 2007-08 005a4e10  unit: RBX::P8Humanoid::?$GetSetImpl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4e10
//
// 005a4e10  8bc1                 mov eax, ecx
// 005a4e12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4e16  85c9                 test ecx, ecx
// 005a4e18  7405                 je 0x5a4e1f
// 005a4e1a  83c1fc               add ecx, -4
// 005a4e1d  eb02                 jmp 0x5a4e21
// 005a4e1f  33c9                 xor ecx, ecx
// 005a4e21  8b9108010000         mov edx, dword ptr [ecx + 0x108]
// 005a4e27  56                   push esi
// 005a4e28  8b7010               mov esi, dword ptr [eax + 0x10]
// 005a4e2b  8b1432               mov edx, dword ptr [edx + esi]
// 005a4e2e  03500c               add edx, dword ptr [eax + 0xc]
// 005a4e31  8b4008               mov eax, dword ptr [eax + 8]
// 005a4e34  8d8c0a08010000       lea ecx, [edx + ecx + 0x108]
// 005a4e3b  ffd0                 call eax
// 005a4e3d  d900                 fld dword ptr [eax]
// 005a4e3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4e43  d919                 fstp dword ptr [ecx]
// 005a4e45  5e                   pop esi
// 005a4e46  d94004               fld dword ptr [eax + 4]
// 005a4e49  d95904               fstp dword ptr [ecx + 4]
// 005a4e4c  d94008               fld dword ptr [eax + 8]
// 005a4e4f  8bc1                 mov eax, ecx
// 005a4e51  d95908               fstp dword ptr [ecx + 8]
// 005a4e54  c20800               ret 8

struct GetSetImpl {
    char pad0[8];
    int (__stdcall *get)(void*);
    int offset;
    int index;
    int (__stdcall *set)(void*);
    int method(void* out, int arg);
};

int GetSetImpl::method(void* out, int arg)
{
    int* p = (int*)arg;
    if (p != 0) {
        p = (int*)((char*)p - 4);
    } else {
        p = 0;
    }
    int* base = (int*)((char*)p + 0x108);
    int idx = *(int*)((char*)this + 0x10);
    int off = *(int*)((char*)base + idx);
    off += *(int*)((char*)this + 0xc);
    int (__stdcall *fn)(void*) = *(int (__stdcall **)(void*))((char*)this + 8);
    int result = fn((char*)base + off);
    *(float*)out = *(float*)result;
    *(float*)((char*)out + 4) = *(float*)(result + 4);
    *(float*)((char*)out + 8) = *(float*)(result + 8);
    return (int)out;
}
