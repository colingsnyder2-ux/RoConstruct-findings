// from server: 80% by atomic.potato
struct AttachCameraCommand
{
    void* field0c;
    unsigned char f();
};

unsigned char AttachCameraCommand::f()
{
    unsigned char* object = *(unsigned char**)((unsigned char*)field0c + 0x288);
    typedef void* (__thiscall *Method)(void*);
    Method method = *(Method*)((unsigned char*)object + 4);
    void* result = method((unsigned char*)field0c + 0x288);
    return *(int*)((unsigned char*)result + 0x1d4) == 1;
}
