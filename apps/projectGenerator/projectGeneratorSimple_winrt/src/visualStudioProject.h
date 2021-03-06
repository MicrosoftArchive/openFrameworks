
#ifndef VSWINPROJECT_H_
#define VSWINPROJECT_H_

#include "ofConstants.h"
#include "pugixml.hpp"
#include "ofAddon.h"
#include "baseProject.h"

class visualStudioProject : public baseProject {

public:

    void setup(string ofRoot= "../../../");

    void setup();

    bool createProjectFile();
    bool loadProjectFile();
    bool saveProjectFile();

    void addSrc(string srcFile, string folder, SrcType type=DEFAULT);
    void addInclude(string includeName);
    void addLibrary(string libraryName, LibType libType);
    void addCFLAG(string cflag, LibType libType = RELEASE_LIB);

    void addAddon(ofAddon & addon);

	static string LOG_NAME;

	pugi::xml_document filterXmlDoc;
	pugi::xml_document filterXmlDocXaml;
	pugi::xml_document docXaml;


	void appendFilter(string folderName);

private:

};

#endif
