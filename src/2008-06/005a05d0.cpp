// from server: 100% by king_originala
// roc 2008-06 005a05d0  unit: RBX::Workspace  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a05d0
//
// 005a05d0  8b442404             mov eax, dword ptr [esp + 4]
// 005a05d4  56                   push esi
// 005a05d5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a05d9  57                   push edi
// 005a05da  56                   push esi
// 005a05db  8bf9                 mov edi, ecx
// 005a05dd  50                   push eax
// 005a05de  8d4c2418             lea ecx, [esp + 0x18]
// 005a05e2  e8692cffff           call 0x593250
// 005a05e7  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a05ea  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005a05ed  c1f903               sar ecx, 3
// 005a05f0  85c9                 test ecx, ecx
// 005a05f2  7613                 jbe 0x5a0607
// 005a05f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a05f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a05fc  52                   push edx
// 005a05fd  50                   push eax
// 005a05fe  57                   push edi
// 005a05ff  56                   push esi
// 005a0600  8bcf                 mov ecx, edi
// 005a0602  e8c90bffff           call 0x5911d0
// 005a0607  5f                   pop edi
// 005a0608  5e                   pop esi
// 005a0609  c21000               ret 0x10

struct Element {
    int first;
    int second;
};

struct Container {
    char pad[12];
    Element* begin;
    Element* end;
};

struct Helper {
    void prepare(void*, Container*);
};

struct Workspace {
    void process(Container*, Workspace*, unsigned int, unsigned int);
    void method(void*, Container*, unsigned int, unsigned int);
};

void Workspace::method(void* result, Container* container,
                       unsigned int first, unsigned int last) {
    Container* saved = container;
    ((Helper*)&container)->prepare(result, saved);
    if ((unsigned int)(saved->end - saved->begin) > 0)
        process(saved, this, first, last);
}
