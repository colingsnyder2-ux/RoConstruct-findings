// from server: 100% by king_originala
// roc 2008-06 004c9c80  unit: RBX::VInstance::?$NonFactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9c80
//
// 004c9c80  51                   push ecx
// 004c9c81  d905b8c38100         fld dword ptr [0x81c3b8]
// 004c9c87  d9442408             fld dword ptr [esp + 8]
// 004c9c8b  d8d1                 fcom st(1)
// 004c9c8d  dfe0                 fnstsw ax
// 004c9c8f  d9e8                 fld1 
// 004c9c91  f6c405               test ah, 5
// 004c9c94  7a04                 jp 0x4c9c9a
// 004c9c96  ddd9                 fstp st(1)
// 004c9c98  eb11                 jmp 0x4c9cab
// 004c9c9a  ddda                 fstp st(2)
// 004c9c9c  d8d1                 fcom st(1)
// 004c9c9e  dfe0                 fnstsw ax
// 004c9ca0  f6c441               test ah, 0x41
// 004c9ca3  7504                 jne 0x4c9ca9
// 004c9ca5  ddd8                 fstp st(0)
// 004c9ca7  d9c0                 fld st(0)
// 004c9ca9  d9c9                 fxch st(1)
// 004c9cab  d97c2408             fnstcw word ptr [esp + 8]
// 004c9caf  0fb7442408           movzx eax, word ptr [esp + 8]
// 004c9cb4  dec1                 faddp st(1)
// 004c9cb6  0d000c0000           or eax, 0xc00
// 004c9cbb  890424               mov dword ptr [esp], eax
// 004c9cbe  6a01                 push 1
// 004c9cc0  6a10                 push 0x10
// 004c9cc2  d80d40688200         fmul dword ptr [0x826840]
// 004c9cc8  d96c2408             fldcw word ptr [esp + 8]
// 004c9ccc  db5c2408             fistp dword ptr [esp + 8]
// 004c9cd0  668b442408           mov ax, word ptr [esp + 8]
// 004c9cd5  0fb7d0               movzx edx, ax
// 004c9cd8  8d442410             lea eax, [esp + 0x10]
// 004c9cdc  d96c2410             fldcw word ptr [esp + 0x10]
// 004c9ce0  50                   push eax
// 004c9ce1  89542414             mov dword ptr [esp + 0x14], edx
// 004c9ce5  e816b9fdff           call 0x4a5600
// 004c9cea  59                   pop ecx
// 004c9ceb  c20400               ret 4

extern const float lowerBound;
extern const float quantizationScale;

struct S {
    void writeBits(const unsigned char* data, int count, bool flag);
    void f(float value);
};

void S::f(float value)
{
    unsigned int encoded = (unsigned short)(
        ((lowerBound > value ? (double)lowerBound :
          (1.0 < value ? 1.0 : (double)value)) + 1.0) *
        quantizationScale);
    writeBits((const unsigned char*)&encoded, 16, true);
}
