// from server: 100% by colin
// roc 2008-06 00413490  unit: CutVerb  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413490
//
// 00413490  51                   push ecx
// 00413491  56                   push esi
// 00413492  57                   push edi
// 00413493  83ec1c               sub esp, 0x1c
// 00413496  8bf1                 mov esi, ecx
// 00413498  8bcc                 mov ecx, esp
// 0041349a  89642424             mov dword ptr [esp + 0x24], esp
// 0041349e  6828e98000           push 0x80e928
// 004134a3  ff1558248000         call dword ptr [0x802458]
// 004134a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 004134ac  e8cffe1600           call 0x583380
// 004134b1  8b10                 mov edx, dword ptr [eax]
// 004134b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004134b7  8bc8                 mov ecx, eax
// 004134b9  8b4210               mov eax, dword ptr [edx + 0x10]
// 004134bc  57                   push edi
// 004134bd  ffd0                 call eax
// 004134bf  57                   push edi
// 004134c0  8bce                 mov ecx, esi
// 004134c2  e8c9db1600           call 0x581090
// 004134c7  5f                   pop edi
// 004134c8  5e                   pop esi
// 004134c9  59                   pop ecx
// 004134ca  c20400               ret 4

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
struct Action {
    void (__thiscall **table)(Action*, int);
};
struct Context {
    Action* find(std::string);
};
struct CutVerb {
    char padding[8];
    Context* context;
    void execute(int);
    void finish(int);
};
void CutVerb::execute(int argument) {
    Action* action = context->find(std::string("Copy"));
    action->table[4](action, argument);
    finish(argument);
}
