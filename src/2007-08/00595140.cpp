// from server: 92% by colin
// roc 2007-08 00595140  unit: RBX::VDropperTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595140
//
// 00595140  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595143  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595149  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059514f  85c0                 test eax, eax
// 00595151  7416                 je 0x595169
// 00595153  50                   push eax
// 00595154  e839c20900           call 0x631392
// 00595159  83c404               add esp, 4
// 0059515c  50                   push eax
// 0059515d  b964568a00           mov ecx, 0x8a5664
// 00595162  ff1508e77700         call dword ptr [0x77e708]
// 00595168  c3                   ret 
// 00595169  32c0                 xor al, al
// 0059516b  c3                   ret 

struct DataModel;

struct Verb
{
    bool isEnabled() const;
};

struct TToolVerb : Verb
{
    char pad0[12];
    DataModel* dataModel;
    bool isEnabled() const;
};

extern "C" const char* __cdecl sub_631392(void*);
extern "C" void __stdcall sub_77e708(const char*, const char*);

bool TToolVerb::isEnabled() const
{
    Verb* verb = *(Verb**)((char*)dataModel + 0x188);
    void* p = *(void**)((char*)verb + 0x318);
    if (p)
    {
        const char* r = sub_631392(p);
        sub_77e708((const char*)0x8A5664, r);
        return true;
    }
    return false;
}
