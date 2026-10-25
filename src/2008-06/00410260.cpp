// from server: 100% by king_originala
// roc 2008-06 00410260  unit: VCBrowserViewExternal::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410260
//
// 00410260  837c240800           cmp dword ptr [esp + 8], 0
// 00410265  7408                 je 0x41026f
// 00410267  b80b000280           mov eax, 0x8002000b
// 0041026c  c21000               ret 0x10
// 0041026f  56                   push esi
// 00410270  8b742414             mov esi, dword ptr [esp + 0x14]
// 00410274  85f6                 test esi, esi
// 00410276  7509                 jne 0x410281
// 00410278  b803400080           mov eax, 0x80004003
// 0041027d  5e                   pop esi
// 0041027e  c21000               ret 0x10
// 00410281  33c0                 xor eax, eax
// 00410283  390550b79200         cmp dword ptr [0x92b750], eax
// 00410289  750f                 jne 0x41029a
// 0041028b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041028f  50                   push eax
// 00410290  b944b79200           mov ecx, 0x92b744
// 00410295  e8e647ffff           call 0x404a80
// 0041029a  8b0d50b79200         mov ecx, dword ptr [0x92b750]
// 004102a0  890e                 mov dword ptr [esi], ecx
// 004102a2  8b0d50b79200         mov ecx, dword ptr [0x92b750]
// 004102a8  85c9                 test ecx, ecx
// 004102aa  740a                 je 0x4102b6
// 004102ac  8b11                 mov edx, dword ptr [ecx]
// 004102ae  8b4204               mov eax, dword ptr [edx + 4]
// 004102b1  51                   push ecx
// 004102b2  ffd0                 call eax
// 004102b4  33c0                 xor eax, eax
// 004102b6  5e                   pop esi
// 004102b7  c21000               ret 0x10

struct TypeInfo;

struct TypeInfoTable {
    void* slot0;
    unsigned long (__stdcall *addRef)(TypeInfo*);
};

struct TypeInfo {
    TypeInfoTable* table;
};

struct TypeInfoHolder {
    unsigned long data[3];
    TypeInfo* info;
    long initialize(unsigned long locale);
};

extern TypeInfoHolder holder;

long __stdcall function(void* object, unsigned int index,
                        unsigned long locale, TypeInfo** output)
{
    if (index != 0)
        return (long)0x8002000bUL;

    if (!output)
        return (long)0x80004003UL;

    long result = 0;
    if (!holder.info)
        result = holder.initialize(locale);

    *output = holder.info;
    if (holder.info) {
        holder.info->table->addRef(holder.info);
        result = 0;
    }

    return result;
}
