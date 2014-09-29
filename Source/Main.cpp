#include "JuceHeader.h"

class DandyCloudsApplication : public juce::JUCEApplication
{
public:
    DandyCloudsApplication() {}

    //==============================================================================
    const juce::String getApplicationName() override            { return ProjectInfo::projectName; }
    const juce::String getApplicationVersion() override         { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override                  { return true; }
    void initialise (const juce::String&) override              { }
    void shutdown() override                                    { }
    void systemRequestedQuit() override                         { quit(); }
    void anotherInstanceStarted (const juce::String&) override  { }

private:
    //==============================================================================

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DandyCloudsApplication)
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (DandyCloudsApplication)