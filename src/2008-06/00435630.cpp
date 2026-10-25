// from server: 100% by colin
// roc 2008-06 00435630  unit: CDeclarationView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435630
//
// 00435630  56                   push esi
// 00435631  8b742410             mov esi, dword ptr [esp + 0x10]
// 00435635  57                   push edi
// 00435636  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043563a  8d9b00000000         lea ebx, [ebx]
// 00435640  8b542424             mov edx, dword ptr [esp + 0x24]
// 00435644  3bf7                 cmp esi, edi
// 00435646  7415                 je 0x43565d
// 00435648  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043564c  8d4608               lea eax, [esi + 8]
// 0043564f  50                   push eax
// 00435650  51                   push ecx
// 00435651  52                   push edx
// 00435652  ff54242c             call dword ptr [esp + 0x2c]
// 00435656  8b36                 mov esi, dword ptr [esi]
// 00435658  83c40c               add esp, 0xc
// 0043565b  ebe3                 jmp 0x435640
// 0043565d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00435661  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00435665  8908                 mov dword ptr [eax], ecx
// 00435667  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043566b  5f                   pop edi
// 0043566c  895004               mov dword ptr [eax + 4], edx
// 0043566f  894808               mov dword ptr [eax + 8], ecx
// 00435672  5e                   pop esi
// 00435673  c3                   ret 

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
