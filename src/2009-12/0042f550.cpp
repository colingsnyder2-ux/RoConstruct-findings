// roc 2009-12 0042f550  unit: CDeclarationView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042f550
//
// 0042f550  56                   push esi
// 0042f551  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042f555  57                   push edi
// 0042f556  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042f55a  8d9b00000000         lea ebx, [ebx]
// 0042f560  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042f564  3bf7                 cmp esi, edi
// 0042f566  7415                 je 0x42f57d
// 0042f568  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042f56c  8d4608               lea eax, [esi + 8]
// 0042f56f  50                   push eax
// 0042f570  51                   push ecx
// 0042f571  52                   push edx
// 0042f572  ff54242c             call dword ptr [esp + 0x2c]
// 0042f576  8b36                 mov esi, dword ptr [esi]
// 0042f578  83c40c               add esp, 0xc
// 0042f57b  ebe3                 jmp 0x42f560
// 0042f57d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042f581  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042f585  8908                 mov dword ptr [eax], ecx
// 0042f587  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042f58b  5f                   pop edi
// 0042f58c  895004               mov dword ptr [eax + 4], edx
// 0042f58f  894808               mov dword ptr [eax + 8], ecx
// 0042f592  5e                   pop esi
// 0042f593  c3                   ret 
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