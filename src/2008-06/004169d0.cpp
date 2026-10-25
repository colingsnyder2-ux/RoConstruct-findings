// from server: 100% by king_originala
// roc 2008-06 004169d0  unit: VCContent::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004169d0
//
// 004169d0  837c240800           cmp dword ptr [esp + 8], 0
// 004169d5  7408                 je 0x4169df
// 004169d7  b80b000280           mov eax, 0x8002000b
// 004169dc  c21000               ret 0x10
// 004169df  56                   push esi
// 004169e0  8b742414             mov esi, dword ptr [esp + 0x14]
// 004169e4  85f6                 test esi, esi
// 004169e6  7509                 jne 0x4169f1
// 004169e8  b803400080           mov eax, 0x80004003
// 004169ed  5e                   pop esi
// 004169ee  c21000               ret 0x10
// 004169f1  33c0                 xor eax, eax
// 004169f3  390594c19200         cmp dword ptr [0x92c194], eax
// 004169f9  750f                 jne 0x416a0a
// 004169fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 004169ff  50                   push eax
// 00416a00  b988c19200           mov ecx, 0x92c188
// 00416a05  e876e0feff           call 0x404a80
// 00416a0a  8b0d94c19200         mov ecx, dword ptr [0x92c194]
// 00416a10  890e                 mov dword ptr [esi], ecx
// 00416a12  8b0d94c19200         mov ecx, dword ptr [0x92c194]
// 00416a18  85c9                 test ecx, ecx
// 00416a1a  740a                 je 0x416a26
// 00416a1c  8b11                 mov edx, dword ptr [ecx]
// 00416a1e  8b4204               mov eax, dword ptr [edx + 4]
// 00416a21  51                   push ecx
// 00416a22  ffd0                 call eax
// 00416a24  33c0                 xor eax, eax
// 00416a26  5e                   pop esi
// 00416a27  c21000               ret 0x10

struct Interface {
    virtual long __stdcall QueryInterface(const void *, void **) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
};

struct TypeInfoHolder {
    unsigned char reserved[12];
    Interface *info;
    long Load(unsigned long locale);
};

extern TypeInfoHolder holder;

struct S {
    long __stdcall GetTypeInfo(unsigned int index, unsigned long locale,
                               Interface **result);
};

long __stdcall S::GetTypeInfo(unsigned int index, unsigned long locale,
                             Interface **result)
{
    if (index != 0)
        return (long)0x8002000B;
    if (result == 0)
        return (long)0x80004003;

    long status = 0;
    if (holder.info == 0)
        status = holder.Load(locale);

    *result = holder.info;
    if (holder.info != 0) {
        holder.info->AddRef();
        status = 0;
    }
    return status;
}
