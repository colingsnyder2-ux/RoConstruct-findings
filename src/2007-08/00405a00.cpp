// from server: 63% by colin
// roc 2007-08 00405a00  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405a00
//
// 00405a00  56                   push esi
// 00405a01  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00405a05  85f6                 test esi, esi
// 00405a07  7509                 jne 0x405a12
// 00405a09  b857000780           mov eax, 0x80070057
// 00405a0e  5e                   pop esi
// 00405a0f  c20800               ret 8
// 00405a12  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00405a16  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00405a19  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00405a1c  2bc2                 sub eax, edx
// 00405a1e  c1f802               sar eax, 2
// 00405a21  3bf0                 cmp esi, eax
// 00405a23  7702                 ja 0x405a27
// 00405a25  8bc6                 mov eax, esi
// 00405a27  8d1482               lea edx, [edx + eax*4]
// 00405a2a  895110               mov dword ptr [ecx + 0x10], edx
// 00405a2d  33c9                 xor ecx, ecx
// 00405a2f  3bf0                 cmp esi, eax
// 00405a31  0f95c1               setne cl
// 00405a34  5e                   pop esi
// 00405a35  8bc1                 mov eax, ecx
// 00405a37  c20800               ret 8

struct UIEnumConnectionPoints_CComEnum_CComObject {
    char pad[0xc];
    int* begin;
    int* end;
    int Skip(int celt);
};

int UIEnumConnectionPoints_CComEnum_CComObject::Skip(int celt) {
    if (celt == 0)
        return 0x80070057;
    int* p = begin;
    int count = (int)(end - p);
    if (celt > count)
        celt = count;
    end = p + celt;
    return celt != count;
}
