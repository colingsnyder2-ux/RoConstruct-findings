// roc 2010-06 0042fb30  unit: CDeclarationView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042fb30
//
// 0042fb30  56                   push esi
// 0042fb31  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042fb35  57                   push edi
// 0042fb36  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042fb3a  8d9b00000000         lea ebx, [ebx]
// 0042fb40  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042fb44  3bf7                 cmp esi, edi
// 0042fb46  7415                 je 0x42fb5d
// 0042fb48  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042fb4c  8d4608               lea eax, [esi + 8]
// 0042fb4f  50                   push eax
// 0042fb50  51                   push ecx
// 0042fb51  52                   push edx
// 0042fb52  ff54242c             call dword ptr [esp + 0x2c]
// 0042fb56  8b36                 mov esi, dword ptr [esi]
// 0042fb58  83c40c               add esp, 0xc
// 0042fb5b  ebe3                 jmp 0x42fb40
// 0042fb5d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042fb61  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042fb65  8908                 mov dword ptr [eax], ecx
// 0042fb67  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042fb6b  5f                   pop edi
// 0042fb6c  895004               mov dword ptr [eax + 4], edx
// 0042fb6f  894808               mov dword ptr [eax + 8], ecx
// 0042fb72  5e                   pop esi
// 0042fb73  c3                   ret 
// copied from an identical function in another client (function ??$for_each@V?$_Iterator@$00@?$list@PAUParameter@@V?$allocator@PAUParameter@@@std@@@std@@UVisitor@@@std@@YA?AUVisitor@@V?$_Iterator@$00@?$list@PAUParameter@@V?$allocator@PAUParameter@@@std@@@0@0U1@@Z)

#include <list>
#include <algorithm>

struct Text;
struct Parameter;

struct Visitor {
    void (__cdecl *function)(int*, Text*, Parameter*&);
    int* count;
    Text* text;
    void operator()(Parameter*& parameter) { function(count, text, parameter); }
};

typedef std::list<Parameter*>::iterator Iterator;

template Visitor std::for_each<Iterator, Visitor>(Iterator, Iterator, Visitor);