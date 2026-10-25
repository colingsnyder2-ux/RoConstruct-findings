// from server: 100% by king_originala
// roc 2008-06 005e5320  unit: RBX::SimJob  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5320
//
// 005e5320  51                   push ecx
// 005e5321  56                   push esi
// 005e5322  8bf1                 mov esi, ecx
// 005e5324  8b06                 mov eax, dword ptr [esi]
// 005e5326  85c0                 test eax, eax
// 005e5328  741b                 je 0x5e5345
// 005e532a  8d4c2404             lea ecx, [esp + 4]
// 005e532e  51                   push ecx
// 005e532f  83c004               add eax, 4
// 005e5332  50                   push eax
// 005e5333  8974240c             mov dword ptr [esp + 0xc], esi
// 005e5337  e8c4feffff           call 0x5e5200
// 005e533c  83c408               add esp, 8
// 005e533f  c70600000000         mov dword ptr [esi], 0
// 005e5345  5e                   pop esi
// 005e5346  59                   pop ecx
// 005e5347  c3                   ret 

struct Listener;

struct SimJob {
    void* object;
    void clearObject();
};

extern "C" void __cdecl detach(Listener* listener, void** owner);

void SimJob::clearObject() {
    if (object) {
        void* owner = this;
        detach(reinterpret_cast<Listener*>(static_cast<char*>(object) + 4),
               &owner);
        object = 0;
    }
}
