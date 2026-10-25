// from server: 57% by atomic.potato
// roc 2010-06 00659820  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00659820
//
// 00659820  53                   push ebx
// 00659821  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00659825  56                   push esi
// 00659826  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065982a  8bce                 mov ecx, esi
// 0065982c  2bcb                 sub ecx, ebx
// 0065982e  b893244992           mov eax, 0x92492493
// 00659833  f7e9                 imul ecx
// 00659835  03d1                 add edx, ecx
// 00659837  c1fa04               sar edx, 4
// 0065983a  8bc2                 mov eax, edx
// 0065983c  c1e81f               shr eax, 0x1f
// 0065983f  03c2                 add eax, edx
// 00659841  83f801               cmp eax, 1
// 00659844  57                   push edi
// 00659845  7e53                 jle 0x65989a
// 00659847  bf1c000000           mov edi, 0x1c
// 0065984c  83c6e4               add esi, -0x1c
// 0065984f  2bfb                 sub edi, ebx
// 00659851  83f801               cmp eax, 1
// 00659854  7e26                 jle 0x65987c
// 00659856  d906                 fld dword ptr [esi]
// 00659858  6a00                 push 0
// 0065985a  83ec1c               sub esp, 0x1c
// 0065985d  8bc4                 mov eax, esp
// 0065985f  8d4e04               lea ecx, [esi + 4]
// 00659862  d918                 fstp dword ptr [eax]
// 00659864  89642434             mov dword ptr [esp + 0x34], esp
// 00659868  51                   push ecx
// 00659869  8d4804               lea ecx, [eax + 4]
// 0065986c  e89fdf1200           call 0x787810
// 00659871  56                   push esi
// 00659872  56                   push esi
// 00659873  53                   push ebx
// 00659874  e857efffff           call 0x6587d0
// 00659879  83c42c               add esp, 0x2c
// 0065987c  83ee1c               sub esi, 0x1c
// 0065987f  8d0c37               lea ecx, [edi + esi]
// 00659882  b893244992           mov eax, 0x92492493
// 00659887  f7e9                 imul ecx
// 00659889  03d1                 add edx, ecx
// 0065988b  c1fa04               sar edx, 4
// 0065988e  8bc2                 mov eax, edx
// 00659890  c1e81f               shr eax, 0x1f
// 00659893  03c2                 add eax, edx
// 00659895  83f801               cmp eax, 1
// 00659898  7fbc                 jg 0x659856
// 0065989a  5f                   pop edi
// 0065989b  5e                   pop esi
// 0065989c  5b                   pop ebx
// 0065989d  c3                   ret 

struct Elem {
    float f0;
    char pad[0x18];
};

struct Container {
    Elem* begin;
    Elem* end;
};

extern "C" void __stdcall sub_787810(void*, void*);
extern "C" void __stdcall sub_6587d0(Elem*, Elem*, Elem*);

void sub_659820(Elem* a, Elem* b)
{
    int n = (int)((b - a) / 7);
    if (n > 1) {
        Elem* p = b - 1;
        int off = 0x1c - (int)a;
        while (n > 1) {
            float v = p->f0;
            char buf[0x1c];
            *(float*)buf = v;
            sub_787810(buf + 4, &p->pad[0]);
            sub_6587d0(a, p, p);
            p = p - 1;
            n = (int)(((char*)p + off - (char*)a) / 0x1c);
            if (n <= 1) break;
        }
    }
}
