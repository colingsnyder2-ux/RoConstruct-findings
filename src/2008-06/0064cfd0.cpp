// from server: 83% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Stage;

struct TreeStage {
    char storage[120];
    TreeStage(Stage* owner, Stage* next);
};

struct Collection {
    Collection(Stage* const& first, Stage* const& last);
    ~Collection();
};

struct Stage {
    virtual ~Stage();

    Stage* owner;
    TreeStage* tree;
    Stage* next;

    __forceinline Stage(Stage* ownerValue, Stage* nextValue);
};

struct ClumpStage : Stage {
    Collection collection;

    ClumpStage(Stage* ownerValue, Stage* nextValue);
    virtual ~ClumpStage();
};

__forceinline Stage::Stage(Stage* ownerValue, Stage* nextValue)
{
    TreeStage* treeValue = new TreeStage(this, nextValue);
    owner = ownerValue;
    tree = treeValue;
    next = nextValue;
}

ClumpStage::ClumpStage(Stage* ownerValue, Stage* nextValue)
    : Stage(ownerValue, nextValue),
      collection(nextValue, nextValue)
{
}
