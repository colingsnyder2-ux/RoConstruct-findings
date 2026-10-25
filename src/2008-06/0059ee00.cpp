// from server: 100% by tester
// roc 2008-06 0059ee00  unit: RBX::P8SpecialShape::?$GetSetImpl  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ee00
//
// 0059ee00  8bc1                 mov eax, ecx
// 0059ee02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059ee06  85c9                 test ecx, ecx
// 0059ee08  7405                 je 0x59ee0f
// 0059ee0a  8d51ec               lea edx, [ecx - 0x14]
// 0059ee0d  eb02                 jmp 0x59ee11
// 0059ee0f  33d2                 xor edx, edx
// 0059ee11  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059ee14  8b4008               mov eax, dword ptr [eax + 8]
// 0059ee17  03ca                 add ecx, edx
// 0059ee19  ffd0                 call eax
// 0059ee1b  d900                 fld dword ptr [eax]
// 0059ee1d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059ee21  d919                 fstp dword ptr [ecx]
// 0059ee23  d94004               fld dword ptr [eax + 4]
// 0059ee26  d95904               fstp dword ptr [ecx + 4]
// 0059ee29  d94008               fld dword ptr [eax + 8]
// 0059ee2c  8bc1                 mov eax, ecx
// 0059ee2e  d95908               fstp dword ptr [ecx + 8]
// 0059ee31  c20800               ret 8

struct S
{
    int *vtable;
    int value;
    int (__thiscall *get)(int *);
    int offset;
    int f(float *out, int *arg);
};

int S::f(float *out, int *arg)
{
    int *p = arg ? (int *)((char *)arg - 20) : 0;
    int *value = (int *)(get((int *)(offset + (int)p)));
    out[0] = ((float *)value)[0];
    out[1] = ((float *)value)[1];
    out[2] = ((float *)value)[2];
    return (int)out;
}
