// from server: 100% by colin
// roc 2007-08 004c4f50  unit: RakPeer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4f50
//
// 004c4f50  8b5104               mov edx, dword ptr [ecx + 4]
// 004c4f53  56                   push esi
// 004c4f54  8b7108               mov esi, dword ptr [ecx + 8]
// 004c4f57  3bd6                 cmp edx, esi
// 004c4f59  7706                 ja 0x4c4f61
// 004c4f5b  8bc6                 mov eax, esi
// 004c4f5d  2bc2                 sub eax, edx
// 004c4f5f  5e                   pop esi
// 004c4f60  c3                   ret 
// 004c4f61  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004c4f64  2bc2                 sub eax, edx
// 004c4f66  03c6                 add eax, esi
// 004c4f68  5e                   pop esi
// 004c4f69  c3                   ret 

struct RakPeer {
    unsigned int mUnknown0;
    unsigned int mStart;
    unsigned int mEnd;
    unsigned int mCapacity;
    unsigned int size() const;
};

unsigned int RakPeer::size() const {
    unsigned int start = mStart;
    unsigned int end = mEnd;
    if (start <= end) {
        return end - start;
    }
    return mCapacity - start + end;
}
