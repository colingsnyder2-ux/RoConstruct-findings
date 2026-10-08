// from server: 66% by colin
// roc 2007-08 0073904e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073904e
//
// 0073904e  8b542408             mov edx, dword ptr [esp + 8]
// 00739052  8d02                 lea eax, [edx]
// 00739054  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739057  33c8                 xor ecx, eax
// 00739059  e8c079efff           call 0x630a1e
// 0073905e  b82cf18300           mov eax, 0x83f12c
// 00739063  e9b079efff           jmp 0x630a18

struct CSpinButtonCtrl
{
    void sub_0073904e();
};

extern "C" void __stdcall sub_00630a1e(void*);
extern "C" void __stdcall sub_00630a18(void*);

void CSpinButtonCtrl::sub_0073904e()
{
    void* p = *(void**)((char*)this + 8);
    void* q = (char*)p - 4;
    unsigned int v = *(unsigned int*)q;
    v ^= (unsigned int)q;
    sub_00630a1e((void*)v);
    sub_00630a18((void*)0x83f12c);
}
