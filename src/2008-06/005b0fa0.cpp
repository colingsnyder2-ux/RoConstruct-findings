// from server: 77% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instance_type;
extern char camera_subject_type;

struct Entry
{
    void* object;
    void* control;
};

struct Children
{
    char reserved[12];
    Entry* volatile first;
    Entry* volatile last;
};

struct CameraSubject
{
    virtual void slot0() = 0;
    virtual void update(float) = 0;
};

struct S
{
    void update(float value);
};

void S::update(float value)
{
    void (__cdecl * const invalid)() = invalid_parameter_noinfo;
    Children* children;
    for (unsigned int i = 0;
         (children = *reinterpret_cast<Children* volatile*>(
             reinterpret_cast<char*>(this) - 200)) != 0 &&
         i < static_cast<unsigned int>(children->last - children->first);
         ++i)
    {
        Children* current = children;
        if (i >= static_cast<unsigned int>(current->last - current->first))
            invalid();

        CameraSubject* subject = static_cast<CameraSubject*>(
            __RTDynamicCast(current->first[i].object, 0,
                            &instance_type, &camera_subject_type, 0));
        if (subject)
            subject->update(value);
    }
}
