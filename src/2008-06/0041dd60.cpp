// from server: 100% by colin
// roc 2008-06 0041dd60  unit: VDHTMLWindow::?$SignalDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041dd60
//
// 0041dd60  8b442404             mov eax, dword ptr [esp + 4]
// 0041dd64  8b542408             mov edx, dword ptr [esp + 8]
// 0041dd68  56                   push esi
// 0041dd69  50                   push eax
// 0041dd6a  83ec1c               sub esp, 0x1c
// 0041dd6d  8bf1                 mov esi, ecx
// 0041dd6f  8bcc                 mov ecx, esp
// 0041dd71  89642428             mov dword ptr [esp + 0x28], esp
// 0041dd75  52                   push edx
// 0041dd76  ff1558248000         call dword ptr [0x802458]
// 0041dd7c  8bce                 mov ecx, esi
// 0041dd7e  e8ad091600           call 0x57e730
// 0041dd83  c7065cf18000         mov dword ptr [esi], 0x80f15c
// 0041dd89  8bc6                 mov eax, esi
// 0041dd8b  5e                   pop esi
// 0041dd8c  c20800               ret 8

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
struct Base
{
    Base(std::string, int);
    virtual void v();
};
struct S : Base
{
    S(int, const char*);
    virtual void v();
};
S::S(int value, const char* text)
    : Base(std::string(text), value)
{
}
