// from server: 95% by colin
struct CXTPControlTabWorkspace
{
    char pad[0x168];
    char field_168[0x8c];
    void* field_1f4;
    void Detach();
};

extern void __fastcall sub_6ffab0(void*, int, int);

void CXTPControlTabWorkspace::Detach()
{
    if (field_1f4 != 0)
    {
        if (*(void**)((char*)field_1f4 + 0x7c) == (void*)((char*)this + 0x168))
        {
            *(void**)((char*)field_1f4 + 0x7c) = 0;
            void* p = field_1f4;
            sub_6ffab0((char*)p + 0x68, 0, -1);
        }
    }
}
