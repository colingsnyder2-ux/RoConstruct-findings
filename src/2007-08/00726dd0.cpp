// from server: 100% by colin
// roc 2007-08 00726dd0  unit: boost::thread_resource_error  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726dd0
//
// 00726dd0  56                   push esi
// 00726dd1  68fc988c00           push 0x8c98fc
// 00726dd6  68806c7200           push 0x726c80
// 00726ddb  e840e7ffff           call 0x725520
// 00726de0  8b35f8988c00         mov esi, dword ptr [0x8c98f8]
// 00726de6  83c408               add esp, 8
// 00726de9  8bce                 mov ecx, esi
// 00726deb  e860e9ffff           call 0x725750
// 00726df0  a184ab8b00           mov eax, dword ptr [0x8bab84]
// 00726df5  83f8ff               cmp eax, -1
// 00726df8  7411                 je 0x726e0b
// 00726dfa  50                   push eax
// 00726dfb  ff15d8d17700         call dword ptr [0x77d1d8]
// 00726e01  c70584ab8b00ffffffff mov dword ptr [0x8bab84], 0xffffffff
// 00726e0b  8bce                 mov ecx, esi
// 00726e0d  5e                   pop esi
// 00726e0e  e95de9ffff           jmp 0x725770

extern "C" __declspec(dllimport) unsigned long __stdcall TlsFree(unsigned long);

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void __fastcall sub_725750(void*);
extern "C" void __fastcall sub_725770(void*);

extern void* g_8c98f8;
extern unsigned long g_8bab84;

struct boost_thread_resource_error {
    void __fastcall destroy();
};

void __fastcall boost_thread_resource_error::destroy()
{
    sub_725520((const char*)0x8c98fc, (const char*)0x726c80);
    void* p = g_8c98f8;
    sub_725750(p);
    unsigned long tls = g_8bab84;
    if (tls != 0xffffffff) {
        TlsFree(tls);
        g_8bab84 = 0xffffffff;
    }
    sub_725770(p);
}
