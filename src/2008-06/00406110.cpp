// from server: 100% by king_originala
// roc 2008-06 00406110  unit: VCApp::?$CComObject  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406110
//
// 00406110  83ec10               sub esp, 0x10
// 00406113  56                   push esi
// 00406114  e84fa82900           call 0x6a0968
// 00406119  50                   push eax
// 0040611a  8d4c2408             lea ecx, [esp + 8]
// 0040611e  e83fa82900           call 0x6a0962
// 00406123  e8fea72900           call 0x6a0926
// 00406128  8b4004               mov eax, dword ptr [eax + 4]
// 0040612b  6a00                 push 0
// 0040612d  8bc8                 mov ecx, eax
// 0040612f  e8bc3a0400           call 0x449bf0
// 00406134  8bf0                 mov esi, eax
// 00406136  8b442408             mov eax, dword ptr [esp + 8]
// 0040613a  f7de                 neg esi
// 0040613c  1bf6                 sbb esi, esi
// 0040613e  81e6fbbfff7f         and esi, 0x7fffbffb
// 00406144  81c605400080         add esi, 0x80004005
// 0040614a  85c0                 test eax, eax
// 0040614c  7407                 je 0x406155
// 0040614e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00406152  894804               mov dword ptr [eax + 4], ecx
// 00406155  837c241000           cmp dword ptr [esp + 0x10], 0
// 0040615a  740c                 je 0x406168
// 0040615c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00406160  52                   push edx
// 00406161  6a00                 push 0
// 00406163  e8f4a72900           call 0x6a095c
// 00406168  8bc6                 mov eax, esi
// 0040616a  5e                   pop esi
// 0040616b  83c410               add esp, 0x10
// 0040616e  c20400               ret 4

struct Worker {
    int run(int);
};

struct State {
    int reserved;
    Worker* volatile worker;
};

struct Link {
    int reserved;
    int previous;
};

struct Context {
    int previous;
    Link* link;
    void* handle;
    int active;

    Context(void*);
};

extern "C" void* __stdcall get_context();
extern "C" State* __stdcall get_state();
extern "C" void __stdcall release_context(int, void*);

int __stdcall func(int)
{
    Context context(get_context());
    Worker* worker = get_state()->worker;
    int result = worker->run(0) ? 0 : (int)0x80004005u;

    if (context.link)
        context.link->previous = context.previous;

    if (context.active)
        release_context(0, context.handle);

    return result;
}
