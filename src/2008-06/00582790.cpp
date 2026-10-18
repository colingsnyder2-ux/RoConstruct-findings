// from server: 63% by colin
struct StopCommand {
    char padding[0xC];
    void* field_C;
    int field_10;
    void dispose();
};

void sub_57D250(void*);
void* sub_581C00(void*, int);
void sub_554DA0(void*);

void StopCommand::dispose()
{
    sub_57D250(field_C);
    void* p = sub_581C00(&field_10, 1);
    *(int*)p = 2;
    sub_554DA0(p);
}
