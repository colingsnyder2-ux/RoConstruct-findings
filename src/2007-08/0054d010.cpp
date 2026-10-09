// from server: 29% by colin
// roc 2007-08 0054d010  unit: UString_sink::?$stream_buffer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d010
//
// 0054d010  8b442408             mov eax, dword ptr [esp + 8]
// 0054d014  53                   push ebx
// 0054d015  56                   push esi
// 0054d016  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054d01a  03c6                 add eax, esi
// 0054d01c  57                   push edi
// 0054d01d  99                   cdq 
// 0054d01e  8bf8                 mov edi, eax
// 0054d020  8bda                 mov ebx, edx
// 0054d022  8bc6                 mov eax, esi
// 0054d024  99                   cdq 
// 0054d025  2bf8                 sub edi, eax
// 0054d027  1bda                 sbb ebx, edx
// 0054d029  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054d02d  6a03                 push 3
// 0054d02f  03fe                 add edi, esi
// 0054d031  135c2424             adc ebx, dword ptr [esp + 0x24]
// 0054d035  6a00                 push 0
// 0054d037  53                   push ebx
// 0054d038  57                   push edi
// 0054d039  52                   push edx
// 0054d03a  e871f4ffff           call 0x54c4b0
// 0054d03f  5f                   pop edi
// 0054d040  5e                   pop esi
// 0054d041  5b                   pop ebx

struct S_func_0054d010 {
    void f(int, int, int, int);
};

extern "C" int __stdcall sub_0054c4b0(int, int, int, int, int);

void S_func_0054d010::f(int a, int b, int c, int d)
{
    int lo = a + d;
    int hi = (lo < 0) ? -1 : 0;
    int lo2 = lo - d;
    int hi2 = hi - ((d < 0) ? -1 : 0);
    lo2 += d;
    hi2 += c;
    sub_0054c4b0(b, lo2, hi2, 0, 3);
}
