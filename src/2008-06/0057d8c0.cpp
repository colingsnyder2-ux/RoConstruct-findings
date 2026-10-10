// from server: 63% by atomic.potato
struct SelectAllCommand {
    void *field0c;
    void f(void *);
};

void sub_57d250(void *);
void sub_5a3e10(void *);

void SelectAllCommand::f(void *arg)
{
    void *p = field0c;
    sub_57d250(arg);
    sub_5a3e10(*(void **)((char *)p + 0x204));
}
