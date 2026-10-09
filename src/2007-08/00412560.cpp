// from server: 68% by colin
// roc 2007-08 00412560  unit: VCContent::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412560
//
// 00412560  8b0dd42a8800         mov ecx, dword ptr [0x882ad4]
// 00412566  33c0                 xor eax, eax
// 00412568  85c9                 test ecx, ecx
// 0041256a  7408                 je 0x412574
// 0041256c  3905dc2a8800         cmp dword ptr [0x882adc], eax
// 00412572  7515                 jne 0x412589
// 00412574  8b442410             mov eax, dword ptr [esp + 0x10]
// 00412578  50                   push eax
// 00412579  b9c82a8800           mov ecx, 0x882ac8
// 0041257e  e86d30ffff           call 0x4055f0
// 00412583  8b0dd42a8800         mov ecx, dword ptr [0x882ad4]
// 00412589  85c9                 test ecx, ecx
// 0041258b  742b                 je 0x4125b8
// 0041258d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00412591  8b11                 mov edx, dword ptr [ecx]
// 00412593  50                   push eax
// 00412594  8b442424             mov eax, dword ptr [esp + 0x24]
// 00412598  50                   push eax
// 00412599  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041259d  50                   push eax
// 0041259e  8b442424             mov eax, dword ptr [esp + 0x24]
// 004125a2  50                   push eax
// 004125a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004125a7  50                   push eax
// 004125a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004125ac  50                   push eax
// 004125ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004125b1  50                   push eax
// 004125b2  51                   push ecx
// 004125b3  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 004125b6  ffd1                 call ecx
// 004125b8  c22400               ret 0x24

typedef unsigned long DWORD_PTR;

struct CComObject;

extern "C" void __stdcall sub_4055F0(DWORD_PTR);

extern DWORD_PTR dword_882AD4;
extern DWORD_PTR dword_882ADC;
extern char byte_882AC8;

void __stdcall sub_412560(DWORD_PTR a1, DWORD_PTR a2, DWORD_PTR a3, DWORD_PTR a4, DWORD_PTR a5, DWORD_PTR a6, DWORD_PTR a7, DWORD_PTR a8, DWORD_PTR a9)
{
    DWORD_PTR v = dword_882AD4;
    if (v == 0 && dword_882ADC != 0)
        goto do_call;

    sub_4055F0(a9);
    v = dword_882AD4;

do_call:
    if (v != 0)
    {
        CComObject* p = (CComObject*)v;
        void** vtbl = *(void***)v;
        typedef void (__thiscall *Fn)(CComObject*, DWORD_PTR, DWORD_PTR, DWORD_PTR, DWORD_PTR, DWORD_PTR, DWORD_PTR, DWORD_PTR, DWORD_PTR);
        Fn fn = (Fn)vtbl[11];
        fn(p, a1, a2, a3, a4, a5, a6, a7, a8);
    }
}
