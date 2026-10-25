// from server: 100% by EspClaude
// roc 2008-06 00428f40  unit: MainLogManager  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428f40
//
// 00428f40  55                   push ebp
// 00428f41  8bec                 mov ebp, esp
// 00428f43  83e4f8               and esp, 0xfffffff8
// 00428f46  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00428f49  81ec44010000         sub esp, 0x144
// 00428f4f  53                   push ebx
// 00428f50  56                   push esi
// 00428f51  57                   push edi
// 00428f52  3b4d18               cmp ecx, dword ptr [ebp + 0x18]
// 00428f55  7441                 je 0x428f98
// 00428f57  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00428f5a  8d7108               lea esi, [ecx + 8]
// 00428f5d  b950000000           mov ecx, 0x50
// 00428f62  8d7c2410             lea edi, [esp + 0x10]
// 00428f66  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00428f68  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00428f6c  33c9                 xor ecx, ecx
// 00428f6e  0bc1                 or eax, ecx
// 00428f70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00428f74  33db                 xor ebx, ebx
// 00428f76  33d2                 xor edx, edx
// 00428f78  0b551c               or edx, dword ptr [ebp + 0x1c]
// 00428f7b  33f6                 xor esi, esi
// 00428f7d  0bcb                 or ecx, ebx
// 00428f7f  0bf7                 or esi, edi
// 00428f81  3bc1                 cmp eax, ecx
// 00428f83  7210                 jb 0x428f95
// 00428f85  7704                 ja 0x428f8b
// 00428f87  3bd6                 cmp edx, esi
// 00428f89  720a                 jb 0x428f95
// 00428f8b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00428f8e  8b0a                 mov ecx, dword ptr [edx]
// 00428f90  894d10               mov dword ptr [ebp + 0x10], ecx
// 00428f93  ebbd                 jmp 0x428f52
// 00428f95  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00428f98  8b4508               mov eax, dword ptr [ebp + 8]
// 00428f9b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00428f9e  5f                   pop edi
// 00428f9f  5e                   pop esi
// 00428fa0  8910                 mov dword ptr [eax], edx
// 00428fa2  894804               mov dword ptr [eax + 4], ecx
// 00428fa5  5b                   pop ebx
// 00428fa6  8be5                 mov esp, ebp
// 00428fa8  5d                   pop ebp
// 00428fa9  c3                   ret 

#include <list>
#include <algorithm>
struct Time {
    unsigned long low;
    unsigned long high;
    unsigned __int64 value() const { return low | ((unsigned __int64)high << 32); }
};
inline bool operator<(Time a, Time b) { return a.value() < b.value(); }
struct Entry {
    unsigned long tag;
    Time time;
    unsigned long padding[75];
    double alignment;
};
struct After {
    Time limit;
    bool operator()(Entry e) const { return limit < e.time; }
};
std::list<Entry>::iterator findBoundary(std::list<Entry>& l, Time limit)
{
    After a; a.limit = limit;
    return std::find_if(l.begin(), l.end(), a);
}
