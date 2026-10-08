// from server: 66% by colin
// roc 2007-08 00574740  unit: RBX::P8PartInstance::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574740
//
// 00574740  8b442404             mov eax, dword ptr [esp + 4]
// 00574744  85c0                 test eax, eax
// 00574746  8bd1                 mov edx, ecx
// 00574748  7405                 je 0x57474f
// 0057474a  83c0fc               add eax, -4
// 0057474d  eb02                 jmp 0x574751
// 0057474f  33c0                 xor eax, eax
// 00574751  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574755  0fb609               movzx ecx, byte ptr [ecx]
// 00574758  56                   push esi
// 00574759  8b7220               mov esi, dword ptr [edx + 0x20]
// 0057475c  51                   push ecx
// 0057475d  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00574763  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00574766  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00574769  8b5218               mov edx, dword ptr [edx + 0x18]
// 0057476c  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 00574773  ffd2                 call edx
// 00574775  5e                   pop esi
// 00574776  c20800               ret 8

struct S_func_00574740 {
    int f(int a1, int a2);
};

int S_func_00574740::f(int a1, int a2)
{
    int v;
    if (a1 != 0)
        v = a1 - 4;
    else
        v = 0;
    unsigned char c = *(unsigned char*)a2;
    int esi = *(int*)((char*)this + 0x20);
    int ecx = *(int*)((char*)v + 0xec);
    ecx = *(int*)(ecx + esi);
    ecx += *(int*)((char*)this + 0x1c);
    int edx = *(int*)((char*)this + 0x18);
    ecx = ecx + v + 0xec;
    return ((int (__thiscall*)(void*, int))edx)((void*)ecx, c);
}
