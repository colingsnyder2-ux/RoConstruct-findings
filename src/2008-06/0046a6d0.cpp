// from server: 80% by atomic.potato
struct CWebToolbox
{
    void Update(void *);
    void Finalize();
    char unused[0xf8];
    void *field_f8;
};

void CWebToolbox::Update(void *arg)
{
    Update(arg);
    if (field_f8)
        Finalize();
}
