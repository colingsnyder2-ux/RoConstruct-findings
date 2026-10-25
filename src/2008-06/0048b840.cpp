// from server: 100% by king_originala
// roc 2008-06 0048b840  unit: boost::any::placeholder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b840
//
// 0048b840  83ec08               sub esp, 8
// 0048b843  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048b847  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048b84b  56                   push esi
// 0048b84c  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048b850  57                   push edi
// 0048b851  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0048b855  8bd7                 mov edx, edi
// 0048b857  2bd6                 sub edx, esi
// 0048b859  894c240c             mov dword ptr [esp + 0xc], ecx
// 0048b85d  52                   push edx
// 0048b85e  8d4c240c             lea ecx, [esp + 0xc]
// 0048b862  8944240c             mov dword ptr [esp + 0xc], eax
// 0048b866  e8d516feff           call 0x46cf40
// 0048b86b  8bc6                 mov eax, esi
// 0048b86d  3bf7                 cmp esi, edi
// 0048b86f  7412                 je 0x48b883
// 0048b871  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048b875  2bce                 sub ecx, esi
// 0048b877  8a10                 mov dl, byte ptr [eax]
// 0048b879  3a1401               cmp dl, byte ptr [ecx + eax]
// 0048b87c  750d                 jne 0x48b88b
// 0048b87e  40                   inc eax
// 0048b87f  3bc7                 cmp eax, edi
// 0048b881  75f4                 jne 0x48b877
// 0048b883  5f                   pop edi
// 0048b884  b001                 mov al, 1
// 0048b886  5e                   pop esi
// 0048b887  83c408               add esp, 8
// 0048b88a  c3                   ret 
// 0048b88b  5f                   pop edi
// 0048b88c  32c0                 xor al, al
// 0048b88e  5e                   pop esi
// 0048b88f  83c408               add esp, 8
// 0048b892  c3                   ret 

struct Iterator {
    void* owner;
    const char* position;
    void check(int count);
};

bool equal(const char* first, const char* last, Iterator other)
{
    Iterator checked = other;
    checked.check(last - first);

    const char* cursor = first;
    if (first != last) {
        int offset = other.position - first;
        do {
            if (*cursor != cursor[offset])
                return false;
            ++cursor;
        } while (cursor != last);
    }
    return true;
}
