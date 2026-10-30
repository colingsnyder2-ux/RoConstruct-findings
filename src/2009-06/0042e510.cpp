// roc 2009-06 0042e510  unit: CDeclarationView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042e510
//
// 0042e510  56                   push esi
// 0042e511  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042e515  57                   push edi
// 0042e516  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042e51a  8d9b00000000         lea ebx, [ebx]
// 0042e520  8b542424             mov edx, dword ptr [esp + 0x24]
// 0042e524  3bf7                 cmp esi, edi
// 0042e526  7415                 je 0x42e53d
// 0042e528  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042e52c  8d4608               lea eax, [esi + 8]
// 0042e52f  50                   push eax
// 0042e530  51                   push ecx
// 0042e531  52                   push edx
// 0042e532  ff54242c             call dword ptr [esp + 0x2c]
// 0042e536  8b36                 mov esi, dword ptr [esi]
// 0042e538  83c40c               add esp, 0xc
// 0042e53b  ebe3                 jmp 0x42e520
// 0042e53d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042e541  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042e545  8908                 mov dword ptr [eax], ecx
// 0042e547  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0042e54b  5f                   pop edi
// 0042e54c  895004               mov dword ptr [eax + 4], edx
// 0042e54f  894808               mov dword ptr [eax + 8], ecx
// 0042e552  5e                   pop esi
// 0042e553  c3                   ret 
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