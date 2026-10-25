// from server: 100% by king_originala
// roc 2008-06 00434570  unit: CDeclarationView  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00434570
//
// 00434570  56                   push esi
// 00434571  8bf1                 mov esi, ecx
// 00434573  c706c42b8100         mov dword ptr [esi], 0x812bc4
// 00434579  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0043457f  85c0                 test eax, eax
// 00434581  7408                 je 0x43458b
// 00434583  8b08                 mov ecx, dword ptr [eax]
// 00434585  8b5108               mov edx, dword ptr [ecx + 8]
// 00434588  50                   push eax
// 00434589  ffd2                 call edx
// 0043458b  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 00434591  85c0                 test eax, eax
// 00434593  7408                 je 0x43459d
// 00434595  8b08                 mov ecx, dword ptr [eax]
// 00434597  8b5108               mov edx, dword ptr [ecx + 8]
// 0043459a  50                   push eax
// 0043459b  ffd2                 call edx
// 0043459d  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 004345a3  85c0                 test eax, eax
// 004345a5  7408                 je 0x4345af
// 004345a7  8b08                 mov ecx, dword ptr [eax]
// 004345a9  8b5108               mov edx, dword ptr [ecx + 8]
// 004345ac  50                   push eax
// 004345ad  ffd2                 call edx
// 004345af  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 004345b5  85c0                 test eax, eax
// 004345b7  7408                 je 0x4345c1
// 004345b9  8b08                 mov ecx, dword ptr [eax]
// 004345bb  8b5108               mov edx, dword ptr [ecx + 8]
// 004345be  50                   push eax
// 004345bf  ffd2                 call edx
// 004345c1  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 004345c7  85c0                 test eax, eax
// 004345c9  7408                 je 0x4345d3
// 004345cb  8b08                 mov ecx, dword ptr [eax]
// 004345cd  8b5108               mov edx, dword ptr [ecx + 8]
// 004345d0  50                   push eax
// 004345d1  ffd2                 call edx
// 004345d3  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 004345d9  85c0                 test eax, eax
// 004345db  7408                 je 0x4345e5
// 004345dd  8b08                 mov ecx, dword ptr [eax]
// 004345df  8b5108               mov edx, dword ptr [ecx + 8]
// 004345e2  50                   push eax
// 004345e3  ffd2                 call edx
// 004345e5  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 004345eb  85c0                 test eax, eax
// 004345ed  7408                 je 0x4345f7
// 004345ef  8b08                 mov ecx, dword ptr [eax]
// 004345f1  8b5108               mov edx, dword ptr [ecx + 8]
// 004345f4  50                   push eax
// 004345f5  ffd2                 call edx
// 004345f7  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 004345fd  85c0                 test eax, eax
// 004345ff  7408                 je 0x434609
// 00434601  8b08                 mov ecx, dword ptr [eax]
// 00434603  8b5108               mov edx, dword ptr [ecx + 8]
// 00434606  50                   push eax
// 00434607  ffd2                 call edx
// 00434609  8bce                 mov ecx, esi
// 0043460b  5e                   pop esi
// 0043460c  e901cb2600           jmp 0x6a1112

struct Interface;

struct InterfaceTable {
    void* reserved[2];
    unsigned long (__stdcall *release)(Interface*);
};

struct Interface {
    InterfaceTable* table;
};

extern void* declarationViewTable[];

struct Base {
    void** volatile table;
    char storage[0xF0];
    void cleanup();
};

struct CDeclarationView : Base {
    Interface* pF4;
    Interface* pF8;
    Interface* pFC;
    Interface* p100;
    Interface* p104;
    Interface* p108;
    Interface* p10C;
    Interface* volatile p110;

    void cleanup();
};

void CDeclarationView::cleanup()
{
    table = declarationViewTable;
    Interface* p = p110;
    if (p) p->table->release(p);
    if (p10C) p10C->table->release(p10C);
    if (p108) p108->table->release(p108);
    if (p104) p104->table->release(p104);
    if (p100) p100->table->release(p100);
    if (pFC) pFC->table->release(pFC);
    if (pF8) pF8->table->release(pF8);
    if (pF4) pF4->table->release(pF4);
    Base::cleanup();
}
