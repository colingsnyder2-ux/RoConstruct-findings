// from server: 100% by king_originala
// roc 2008-06 00596e60  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596e60
//
// 00596e60  68945c9700           push 0x975c94
// 00596e65  68506d5900           push 0x596d50
// 00596e6a  e8c104fcff           call 0x557330
// 00596e6f  8b0d905c9700         mov ecx, dword ptr [0x975c90]
// 00596e75  83c408               add esp, 8
// 00596e78  e8f3060100           call 0x5a7570
// 00596e7d  85c0                 test eax, eax
// 00596e7f  740e                 je 0x596e8f
// 00596e81  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00596e85  7204                 jb 0x596e8b
// 00596e87  8b4004               mov eax, dword ptr [eax + 4]
// 00596e8a  c3                   ret 
// 00596e8b  83c004               add eax, 4
// 00596e8e  c3                   ret 
// 00596e8f  a1609c9400           mov eax, dword ptr [0x949c60]
// 00596e94  c3                   ret 

struct StringData {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct Log {
    StringData* get();
};

extern Log* globalLog;
extern int initializationFlag;
extern char* fallbackText;

void __cdecl initializeLog();
void __cdecl initializeOnce(void (__cdecl* initializer)(), int* flag);

char* getText()
{
    initializeOnce(initializeLog, &initializationFlag);
    StringData* text = globalLog->get();
    if (text) {
        if (text->capacity >= 16)
            return text->pointer;
        return text->buffer;
    }
    return fallbackText;
}
