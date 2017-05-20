#include "ecere.h"



// Global Functions Pointers

GlobalFunction * FUNCTION(bestColorMatch);
GlobalFunction * FUNCTION(getColorDepthShifts);
GlobalFunction * FUNCTION(getDefaultMaterial);
GlobalFunction * FUNCTION(getDefaultPalette);
GlobalFunction * FUNCTION(getDepthBits);
GlobalFunction * FUNCTION(getResolutionHeight);
GlobalFunction * FUNCTION(getResolutionWidth);
GlobalFunction * FUNCTION(listAvailableFonts);
GlobalFunction * FUNCTION(loadPalette);
GlobalFunction * FUNCTION(paletteGradient);
GlobalFunction * FUNCTION(resolveCharFont);
GlobalFunction * FUNCTION(resolveFont);
GlobalFunction * FUNCTION(setPrintingDocumentName);
GlobalFunction * FUNCTION(gLABBindBuffer);
GlobalFunction * FUNCTION(gLSetupFog);
GlobalFunction * FUNCTION(gLSetupLighting);
GlobalFunction * FUNCTION(gLSetupTexturing);
GlobalFunction * FUNCTION(useSingleGLContext);
GlobalFunction * FUNCTION(glimtkBegin);
GlobalFunction * FUNCTION(glimtkColor3f);
GlobalFunction * FUNCTION(glimtkColor4f);
GlobalFunction * FUNCTION(glimtkColor4fv);
GlobalFunction * FUNCTION(glimtkColor4ub);
GlobalFunction * FUNCTION(glimtkEnd);
GlobalFunction * FUNCTION(glimtkNormal3d);
GlobalFunction * FUNCTION(glimtkNormal3f);
GlobalFunction * FUNCTION(glimtkNormal3fd);
GlobalFunction * FUNCTION(glimtkNormal3fv);
GlobalFunction * FUNCTION(glimtkRecti);
GlobalFunction * FUNCTION(glimtkTexCoord2d);
GlobalFunction * FUNCTION(glimtkTexCoord2f);
GlobalFunction * FUNCTION(glimtkTexCoord2fv);
GlobalFunction * FUNCTION(glimtkTexCoord2i);
GlobalFunction * FUNCTION(glimtkVertex2d);
GlobalFunction * FUNCTION(glimtkVertex2f);
GlobalFunction * FUNCTION(glimtkVertex2i);
GlobalFunction * FUNCTION(glimtkVertex3d);
GlobalFunction * FUNCTION(glimtkVertex3dv);
GlobalFunction * FUNCTION(glimtkVertex3f);
GlobalFunction * FUNCTION(glimtkVertex3fv);
GlobalFunction * FUNCTION(glmsFlushMatrices);
GlobalFunction * FUNCTION(glmsFrustum);
GlobalFunction * FUNCTION(glmsGetDoublev);
GlobalFunction * FUNCTION(glmsGetNearPlane);
GlobalFunction * FUNCTION(glmsLoadIdentity);
GlobalFunction * FUNCTION(glmsLoadMatrix);
GlobalFunction * FUNCTION(glmsLoadMatrixd);
GlobalFunction * FUNCTION(glmsLoadMatrixf);
GlobalFunction * FUNCTION(glmsMatrixMode);
GlobalFunction * FUNCTION(glmsMultMatrixd);
GlobalFunction * FUNCTION(glmsOrtho);
GlobalFunction * FUNCTION(glmsPopMatrix);
GlobalFunction * FUNCTION(glmsPushMatrix);
GlobalFunction * FUNCTION(glmsRotated);
GlobalFunction * FUNCTION(glmsScaled);
GlobalFunction * FUNCTION(glmsSetNearPlane);
GlobalFunction * FUNCTION(glmsTranslated);
GlobalFunction * FUNCTION(glsupLightModeli);
GlobalFunction * FUNCTION(glsupLineStipple);
GlobalFunction * FUNCTION(fastInvSqrt);
GlobalFunction * FUNCTION(fastInvSqrtDouble);
GlobalFunction * FUNCTION(applySkin);
GlobalFunction * FUNCTION(desktop3DFullScreen);
GlobalFunction * FUNCTION(desktop3DGetClipBox);
GlobalFunction * FUNCTION(desktop3DGetClippedWindow);
GlobalFunction * FUNCTION(desktop3DGetWindowHandle);
GlobalFunction * FUNCTION(desktop3DInitialize);
GlobalFunction * FUNCTION(desktop3DMouseMessage);
GlobalFunction * FUNCTION(desktop3DSetDesktopDirty);
GlobalFunction * FUNCTION(desktop3DTitleBarClicked);
GlobalFunction * FUNCTION(desktop3DUpdateDisplay);
GlobalFunction * FUNCTION(unapplySkin);
GlobalFunction * FUNCTION(connectToFileServer);
GlobalFunction * FUNCTION(fileOpenURL);
GlobalFunction * FUNCTION(getAddressFromName);
GlobalFunction * FUNCTION(getHostName);
GlobalFunction * FUNCTION(getNameFromAddress);
GlobalFunction * FUNCTION(archiveOpen);
GlobalFunction * FUNCTION(archiveQuerySize);
GlobalFunction * FUNCTION(changeWorkingDir);
GlobalFunction * FUNCTION(charMatchCategories);
GlobalFunction * FUNCTION(copyBytes);
GlobalFunction * FUNCTION(copyBytesBy2);
GlobalFunction * FUNCTION(copyBytesBy4);
GlobalFunction * FUNCTION(copySystemPath);
GlobalFunction * FUNCTION(copyUnixPath);
GlobalFunction * FUNCTION(createTemporaryDir);
GlobalFunction * FUNCTION(createTemporaryFile);
GlobalFunction * FUNCTION(deleteFile);
GlobalFunction * FUNCTION(dualPipeOpen);
GlobalFunction * FUNCTION(dualPipeOpenEnv);
GlobalFunction * FUNCTION(dualPipeOpenEnvf);
GlobalFunction * FUNCTION(dualPipeOpenf);
GlobalFunction * FUNCTION(dumpErrors);
GlobalFunction * FUNCTION(execute);
GlobalFunction * FUNCTION(executeEnv);
GlobalFunction * FUNCTION(executeWait);
GlobalFunction * FUNCTION(fileExists);
GlobalFunction * FUNCTION(fileFixCase);
GlobalFunction * FUNCTION(fileGetSize);
GlobalFunction * FUNCTION(fileGetStats);
GlobalFunction * FUNCTION(fileOpen);
GlobalFunction * FUNCTION(fileOpenBuffered);
GlobalFunction * FUNCTION(fileSetAttribs);
GlobalFunction * FUNCTION(fileSetTime);
GlobalFunction * FUNCTION(fileTruncate);
GlobalFunction * FUNCTION(fillBytes);
GlobalFunction * FUNCTION(fillBytesBy2);
GlobalFunction * FUNCTION(fillBytesBy4);
GlobalFunction * FUNCTION(getAlNum);
GlobalFunction * FUNCTION(getCharCategory);
GlobalFunction * FUNCTION(getEnvironment);
GlobalFunction * FUNCTION(getFreeSpace);
GlobalFunction * FUNCTION(getLastErrorCode);
GlobalFunction * FUNCTION(getRandom);
GlobalFunction * FUNCTION(getSlashPathBuffer);
GlobalFunction * FUNCTION(getSystemPathBuffer);
GlobalFunction * FUNCTION(getTime);
GlobalFunction * FUNCTION(getWorkingDir);
GlobalFunction * FUNCTION(__log);
GlobalFunction * FUNCTION(logErrorCode);
GlobalFunction * FUNCTION(__logf);
GlobalFunction * FUNCTION(makeDir);
GlobalFunction * FUNCTION(makeSlashPath);
GlobalFunction * FUNCTION(makeSystemPath);
GlobalFunction * FUNCTION(moveBytes);
GlobalFunction * FUNCTION(moveFile);
GlobalFunction * FUNCTION(moveFileEx);
GlobalFunction * FUNCTION(randomSeed);
GlobalFunction * FUNCTION(removeDir);
GlobalFunction * FUNCTION(renameFile);
GlobalFunction * FUNCTION(resetError);
GlobalFunction * FUNCTION(setEnvironment);
GlobalFunction * FUNCTION(setErrorLevel);
GlobalFunction * FUNCTION(setLoggingMode);
GlobalFunction * FUNCTION(shellOpen);
GlobalFunction * FUNCTION(__sleep);
GlobalFunction * FUNCTION(uTF16BEtoUTF8Buffer);
GlobalFunction * FUNCTION(uTF8toISO8859_1);
GlobalFunction * FUNCTION(uTF8toUTF16BufferLen);
GlobalFunction * FUNCTION(uTF8toUTF16Len);
GlobalFunction * FUNCTION(unsetEnvironment);
GlobalFunction * FUNCTION(writeColorAlpha);
GlobalFunction * FUNCTION(writeECONObject);
GlobalFunction * FUNCTION(writeJSONObject);



// Virtual Methods

C(Method) * METHOD(Bitmap, allocate);
C(Method) * METHOD(Bitmap, allocateDD);
C(Method) * METHOD(Bitmap, convert);
C(Method) * METHOD(Bitmap, copy);
C(Method) * METHOD(Bitmap, free);
C(Method) * METHOD(Bitmap, getSurface);
C(Method) * METHOD(Bitmap, grab);
C(Method) * METHOD(Bitmap, load);
C(Method) * METHOD(Bitmap, loadFromFile);
C(Method) * METHOD(Bitmap, loadGrayed);
C(Method) * METHOD(Bitmap, loadMipMaps);
C(Method) * METHOD(Bitmap, loadMonochrome);
C(Method) * METHOD(Bitmap, loadT);
C(Method) * METHOD(Bitmap, loadTMipMaps);
C(Method) * METHOD(Bitmap, makeDD);
C(Method) * METHOD(Bitmap, makeMipMaps);
C(Method) * METHOD(Bitmap, quantize);
C(Method) * METHOD(Bitmap, save);
C(Method) * METHOD(Bitmap, smoothEdges);

C(Method) * METHOD(CubeMap, load);

C(Method) * METHOD(Display, applyMaterial);
C(Method) * METHOD(Display, collectHits);
C(Method) * METHOD(Display, create);
C(Method) * METHOD(Display, drawMesh);
C(Method) * METHOD(Display, drawObject);
C(Method) * METHOD(Display, drawPrimitives);
C(Method) * METHOD(Display, drawTranslucency);
C(Method) * METHOD(Display, endUpdate);
C(Method) * METHOD(Display, fontExtent);
C(Method) * METHOD(Display, fontExtent2);
C(Method) * METHOD(Display, getHits);
C(Method) * METHOD(Display, getIntersect);
C(Method) * METHOD(Display, getSurface);
C(Method) * METHOD(Display, grab);
C(Method) * METHOD(Display, intersectPolygons);
C(Method) * METHOD(Display, isObjectVisible);
C(Method) * METHOD(Display, lock);
C(Method) * METHOD(Display, nextPage);
C(Method) * METHOD(Display, popMatrix);
C(Method) * METHOD(Display, position);
C(Method) * METHOD(Display, pushMatrix);
C(Method) * METHOD(Display, resize);
C(Method) * METHOD(Display, restorePalette);
C(Method) * METHOD(Display, scroll);
C(Method) * METHOD(Display, selectMesh);
C(Method) * METHOD(Display, setCamera);
C(Method) * METHOD(Display, setLight);
C(Method) * METHOD(Display, setLights);
C(Method) * METHOD(Display, setPalette);
C(Method) * METHOD(Display, setTransform);
C(Method) * METHOD(Display, startSelection);
C(Method) * METHOD(Display, startUpdate);
C(Method) * METHOD(Display, stopSelection);
C(Method) * METHOD(Display, unlock);
C(Method) * METHOD(Display, update);

C(Method) * METHOD(DisplayDriver, allocateBitmap);
C(Method) * METHOD(DisplayDriver, allocateIndices);
C(Method) * METHOD(DisplayDriver, allocateMesh);
C(Method) * METHOD(DisplayDriver, applyMaterial);
C(Method) * METHOD(DisplayDriver, area);
C(Method) * METHOD(DisplayDriver, blit);
C(Method) * METHOD(DisplayDriver, blitDI);
C(Method) * METHOD(DisplayDriver, clear);
C(Method) * METHOD(DisplayDriver, clip);
C(Method) * METHOD(DisplayDriver, convertBitmap);
C(Method) * METHOD(DisplayDriver, createDisplay);
C(Method) * METHOD(DisplayDriver, createDisplaySystem);
C(Method) * METHOD(DisplayDriver, destroyDisplay);
C(Method) * METHOD(DisplayDriver, destroyDisplaySystem);
C(Method) * METHOD(DisplayDriver, displayPosition);
C(Method) * METHOD(DisplayDriver, displaySize);
C(Method) * METHOD(DisplayDriver, drawLine);
C(Method) * METHOD(DisplayDriver, drawPrimitives);
C(Method) * METHOD(DisplayDriver, drawingChar);
C(Method) * METHOD(DisplayDriver, endUpdate);
C(Method) * METHOD(DisplayDriver, filter);
C(Method) * METHOD(DisplayDriver, filterDI);
C(Method) * METHOD(DisplayDriver, fontExtent);
C(Method) * METHOD(DisplayDriver, freeBitmap);
C(Method) * METHOD(DisplayDriver, freeIndices);
C(Method) * METHOD(DisplayDriver, freeMesh);
C(Method) * METHOD(DisplayDriver, getBitmapSurface);
C(Method) * METHOD(DisplayDriver, getPixel);
C(Method) * METHOD(DisplayDriver, getSurface);
C(Method) * METHOD(DisplayDriver, grabScreen);
C(Method) * METHOD(DisplayDriver, lineStipple);
C(Method) * METHOD(DisplayDriver, loadFont);
C(Method) * METHOD(DisplayDriver, lock);
C(Method) * METHOD(DisplayDriver, lockIndices);
C(Method) * METHOD(DisplayDriver, lockMesh);
C(Method) * METHOD(DisplayDriver, lockSystem);
C(Method) * METHOD(DisplayDriver, makeDDBitmap);
C(Method) * METHOD(DisplayDriver, nextPage);
C(Method) * METHOD(DisplayDriver, popMatrix);
C(Method) * METHOD(DisplayDriver, pushMatrix);
C(Method) * METHOD(DisplayDriver, putPixel);
C(Method) * METHOD(DisplayDriver, rectangle);
C(Method) * METHOD(DisplayDriver, releaseSurface);
C(Method) * METHOD(DisplayDriver, restorePalette);
C(Method) * METHOD(DisplayDriver, scroll);
C(Method) * METHOD(DisplayDriver, selectMesh);
C(Method) * METHOD(DisplayDriver, setBackground);
C(Method) * METHOD(DisplayDriver, setBlitTint);
C(Method) * METHOD(DisplayDriver, setCamera);
C(Method) * METHOD(DisplayDriver, setForeground);
C(Method) * METHOD(DisplayDriver, setLight);
C(Method) * METHOD(DisplayDriver, setPalette);
C(Method) * METHOD(DisplayDriver, setRenderState);
C(Method) * METHOD(DisplayDriver, setTransform);
C(Method) * METHOD(DisplayDriver, startUpdate);
C(Method) * METHOD(DisplayDriver, stretch);
C(Method) * METHOD(DisplayDriver, stretchDI);
C(Method) * METHOD(DisplayDriver, textExtent);
C(Method) * METHOD(DisplayDriver, textFont);
C(Method) * METHOD(DisplayDriver, textOpacity);
C(Method) * METHOD(DisplayDriver, unloadFont);
C(Method) * METHOD(DisplayDriver, unlock);
C(Method) * METHOD(DisplayDriver, unlockIndices);
C(Method) * METHOD(DisplayDriver, unlockMesh);
C(Method) * METHOD(DisplayDriver, unlockSystem);
C(Method) * METHOD(DisplayDriver, update);
C(Method) * METHOD(DisplayDriver, writeText);

C(Method) * METHOD(DisplaySystem, addMaterial);
C(Method) * METHOD(DisplaySystem, addMesh);
C(Method) * METHOD(DisplaySystem, addNamedMaterial);
C(Method) * METHOD(DisplaySystem, addTexture);
C(Method) * METHOD(DisplaySystem, clearMaterials);
C(Method) * METHOD(DisplaySystem, clearMeshes);
C(Method) * METHOD(DisplaySystem, clearTextures);
C(Method) * METHOD(DisplaySystem, create);
C(Method) * METHOD(DisplaySystem, fontExtent);
C(Method) * METHOD(DisplaySystem, fontExtent2);
C(Method) * METHOD(DisplaySystem, getMaterial);
C(Method) * METHOD(DisplaySystem, getTexture);
C(Method) * METHOD(DisplaySystem, loadFont);
C(Method) * METHOD(DisplaySystem, loadOutlineFont);
C(Method) * METHOD(DisplaySystem, loadResource);
C(Method) * METHOD(DisplaySystem, loadResourceFM);
C(Method) * METHOD(DisplaySystem, lock);
C(Method) * METHOD(DisplaySystem, removeMaterial);
C(Method) * METHOD(DisplaySystem, removeMesh);
C(Method) * METHOD(DisplaySystem, removeTexture);
C(Method) * METHOD(DisplaySystem, unloadFont);
C(Method) * METHOD(DisplaySystem, unloadResource);
C(Method) * METHOD(DisplaySystem, unlock);
C(Method) * METHOD(DisplaySystem, _LoadResource);

C(Method) * METHOD(DrawManager, clear);
C(Method) * METHOD(DrawManager, drawBarrier);
C(Method) * METHOD(DrawManager, drawImage);
C(Method) * METHOD(DrawManager, end);
C(Method) * METHOD(DrawManager, finish);
C(Method) * METHOD(DrawManager, flush);
C(Method) * METHOD(DrawManager, init);
C(Method) * METHOD(DrawManager, ready);

C(Method) * METHOD(FMFont, setOutline);

C(Method) * METHOD(FontManager, addFont);
C(Method) * METHOD(FontManager, addFontData);
C(Method) * METHOD(FontManager, clearState);
C(Method) * METHOD(FontManager, create);
C(Method) * METHOD(FontManager, drawText);
C(Method) * METHOD(FontManager, drawTextTruncate);
C(Method) * METHOD(FontManager, drawTextWithCursor);
C(Method) * METHOD(FontManager, expandAtlas);
C(Method) * METHOD(FontManager, flush);
C(Method) * METHOD(FontManager, flushUpdate);
C(Method) * METHOD(FontManager, freeFont);
C(Method) * METHOD(FontManager, getAtlasSize);
C(Method) * METHOD(FontManager, getFont);
C(Method) * METHOD(FontManager, getFontExtent);
C(Method) * METHOD(FontManager, getFontLimits);
C(Method) * METHOD(FontManager, getFontLineHeight);
C(Method) * METHOD(FontManager, getTextBounds);
C(Method) * METHOD(FontManager, getTextNearestOffset);
C(Method) * METHOD(FontManager, getTextTruncateOffset);
C(Method) * METHOD(FontManager, getTextWidth);
C(Method) * METHOD(FontManager, getTextWidthTruncate);
C(Method) * METHOD(FontManager, getTextureData);
C(Method) * METHOD(FontManager, initPathDraw);
C(Method) * METHOD(FontManager, onAtlasFull);
C(Method) * METHOD(FontManager, pathDrawCharacter);
C(Method) * METHOD(FontManager, pathDrawPredictAdvance);
C(Method) * METHOD(FontManager, popState);
C(Method) * METHOD(FontManager, pushState);
C(Method) * METHOD(FontManager, removeFont);
C(Method) * METHOD(FontManager, resetAtlas);
C(Method) * METHOD(FontManager, setAlign);
C(Method) * METHOD(FontManager, setFont);
C(Method) * METHOD(FontManager, setFontImageProcessing);
C(Method) * METHOD(FontManager, setSize);
C(Method) * METHOD(FontManager, setState);
C(Method) * METHOD(FontManager, validateTexture);

C(Method) * METHOD(FontManagerRenderer, createTexture);
C(Method) * METHOD(FontManagerRenderer, drawImage);
C(Method) * METHOD(FontManagerRenderer, drawImageAlt);
C(Method) * METHOD(FontManagerRenderer, drawImageCursor);
C(Method) * METHOD(FontManagerRenderer, drawImageFloat);
C(Method) * METHOD(FontManagerRenderer, flush);
C(Method) * METHOD(FontManagerRenderer, init);
C(Method) * METHOD(FontManagerRenderer, registerImage);
C(Method) * METHOD(FontManagerRenderer, resetImages);
C(Method) * METHOD(FontManagerRenderer, resizeTexture);
C(Method) * METHOD(FontManagerRenderer, setLayer);
C(Method) * METHOD(FontManagerRenderer, updateTexture);

C(Method) * METHOD(FontRenderer, setColor);
C(Method) * METHOD(FontRenderer, setCursorColor);
C(Method) * METHOD(FontRenderer, setExtColor);

C(Method) * METHOD(HitRecord, compare);

C(Method) * METHOD(Surface, area);
C(Method) * METHOD(Surface, bevel);
C(Method) * METHOD(Surface, blit);
C(Method) * METHOD(Surface, centerTextf);
C(Method) * METHOD(Surface, clear);
C(Method) * METHOD(Surface, clip);
C(Method) * METHOD(Surface, drawLine);
C(Method) * METHOD(Surface, drawingChar);
C(Method) * METHOD(Surface, filter);
C(Method) * METHOD(Surface, filterHTile);
C(Method) * METHOD(Surface, filterVTile);
C(Method) * METHOD(Surface, getBackground);
C(Method) * METHOD(Surface, getBox);
C(Method) * METHOD(Surface, getDisplay);
C(Method) * METHOD(Surface, getFont);
C(Method) * METHOD(Surface, getForeground);
C(Method) * METHOD(Surface, getPixel);
C(Method) * METHOD(Surface, getSize);
C(Method) * METHOD(Surface, getTextOpacity);
C(Method) * METHOD(Surface, gradient);
C(Method) * METHOD(Surface, hLine);
C(Method) * METHOD(Surface, hTile);
C(Method) * METHOD(Surface, lineStipple);
C(Method) * METHOD(Surface, putPixel);
C(Method) * METHOD(Surface, rectangle);
C(Method) * METHOD(Surface, setBackground);
C(Method) * METHOD(Surface, setForeground);
C(Method) * METHOD(Surface, stretch);
C(Method) * METHOD(Surface, textExtent);
C(Method) * METHOD(Surface, textExtent2);
C(Method) * METHOD(Surface, textFont);
C(Method) * METHOD(Surface, textOpacity);
C(Method) * METHOD(Surface, thinBevel);
C(Method) * METHOD(Surface, tile);
C(Method) * METHOD(Surface, vLine);
C(Method) * METHOD(Surface, vTile);
C(Method) * METHOD(Surface, writeText);
C(Method) * METHOD(Surface, writeText2);
C(Method) * METHOD(Surface, writeTextDots);
C(Method) * METHOD(Surface, writeTextDotsf);
C(Method) * METHOD(Surface, writeTextf);

C(Method) * METHOD(CompiledDefaultShader, registerUniforms);

C(Method) * METHOD(CompiledShader, free);

C(Method) * METHOD(DefaultShader, debugging);
C(Method) * METHOD(DefaultShader, fog);
C(Method) * METHOD(DefaultShader, lighting);
C(Method) * METHOD(DefaultShader, setCamera);
C(Method) * METHOD(DefaultShader, setColor);
C(Method) * METHOD(DefaultShader, setFogColor);
C(Method) * METHOD(DefaultShader, setFogDensity);
C(Method) * METHOD(DefaultShader, setGlobalAmbient);
C(Method) * METHOD(DefaultShader, setLight);
C(Method) * METHOD(DefaultShader, setPerVertexColor);
C(Method) * METHOD(DefaultShader, setSimpleMaterial);
C(Method) * METHOD(DefaultShader, shader);
C(Method) * METHOD(DefaultShader, swizzle);
C(Method) * METHOD(DefaultShader, texturing);

C(Method) * METHOD(GLAB, allocate);
C(Method) * METHOD(GLAB, deleteBuffers);
C(Method) * METHOD(GLAB, free);
C(Method) * METHOD(GLAB, upload);
C(Method) * METHOD(GLAB, use);
C(Method) * METHOD(GLAB, useVertTrans);

C(Method) * METHOD(GLEAB, allocate);
C(Method) * METHOD(GLEAB, draw);
C(Method) * METHOD(GLEAB, free);
C(Method) * METHOD(GLEAB, upload);

C(Method) * METHOD(Shader, activate);
C(Method) * METHOD(Shader, bindAttribs);
C(Method) * METHOD(Shader, free);
C(Method) * METHOD(Shader, getDefinitions);
C(Method) * METHOD(Shader, load);
C(Method) * METHOD(Shader, registerShader);
C(Method) * METHOD(Shader, select);
C(Method) * METHOD(Shader, setMaterial);
C(Method) * METHOD(Shader, updateMatrix);
C(Method) * METHOD(Shader, uploadUniforms);

C(Method) * METHOD(Camera, adjustAngle);
C(Method) * METHOD(Camera, adjustPosition);
C(Method) * METHOD(Camera, move);
C(Method) * METHOD(Camera, pointsVisible);
C(Method) * METHOD(Camera, project);
C(Method) * METHOD(Camera, projectSize);
C(Method) * METHOD(Camera, rotatePitch);
C(Method) * METHOD(Camera, rotateRoll);
C(Method) * METHOD(Camera, rotateYaw);
C(Method) * METHOD(Camera, setup);
C(Method) * METHOD(Camera, slerp);
C(Method) * METHOD(Camera, sphereVisible);
C(Method) * METHOD(Camera, transformMatrix);
C(Method) * METHOD(Camera, transformNormal);
C(Method) * METHOD(Camera, transformPoint);
C(Method) * METHOD(Camera, unproject);
C(Method) * METHOD(Camera, untransform);
C(Method) * METHOD(Camera, update);
C(Method) * METHOD(Camera, setCPosition);
C(Method) * METHOD(Camera, setViewMatrix);

C(Method) * METHOD(Euler, add);

C(Method) * METHOD(Line, intersectSphere);

C(Method) * METHOD(Material, free);

C(Method) * METHOD(Matrix, determinant);
C(Method) * METHOD(Matrix, identity);
C(Method) * METHOD(Matrix, inverse);
C(Method) * METHOD(Matrix, multiply);
C(Method) * METHOD(Matrix, rotate);
C(Method) * METHOD(Matrix, rotationQuaternion);
C(Method) * METHOD(Matrix, scale);
C(Method) * METHOD(Matrix, toEuler);
C(Method) * METHOD(Matrix, translate);
C(Method) * METHOD(Matrix, transpose);

C(Method) * METHOD(Mesh, addPrimitiveGroup);
C(Method) * METHOD(Mesh, allocate);
C(Method) * METHOD(Mesh, allocatePrimitive);
C(Method) * METHOD(Mesh, applyMaterial);
C(Method) * METHOD(Mesh, applyTranslucency);
C(Method) * METHOD(Mesh, computeNormals);
C(Method) * METHOD(Mesh, free);
C(Method) * METHOD(Mesh, freePrimitive);
C(Method) * METHOD(Mesh, freePrimitiveGroup);
C(Method) * METHOD(Mesh, getData);
C(Method) * METHOD(Mesh, lock);
C(Method) * METHOD(Mesh, lockPrimitive);
C(Method) * METHOD(Mesh, lockPrimitiveGroup);
C(Method) * METHOD(Mesh, setData);
C(Method) * METHOD(Mesh, unlock);
C(Method) * METHOD(Mesh, unlockPrimitive);
C(Method) * METHOD(Mesh, unlockPrimitiveGroup);

C(Method) * METHOD(Object, addName);
C(Method) * METHOD(Object, animate);
C(Method) * METHOD(Object, doubleSided);
C(Method) * METHOD(Object, duplicate);
C(Method) * METHOD(Object, find);
C(Method) * METHOD(Object, free);
C(Method) * METHOD(Object, freeMesh);
C(Method) * METHOD(Object, initialize);
C(Method) * METHOD(Object, initializeMesh);
C(Method) * METHOD(Object, intersectsGroundPolygon);
C(Method) * METHOD(Object, load);
C(Method) * METHOD(Object, merge);
C(Method) * METHOD(Object, move);
C(Method) * METHOD(Object, rotateEuler);
C(Method) * METHOD(Object, setMinMaxRadius);
C(Method) * METHOD(Object, updateTransform);

C(Method) * METHOD(Plane, fromPointNormal);
C(Method) * METHOD(Plane, fromPoints);
C(Method) * METHOD(Plane, fromPointsf);
C(Method) * METHOD(Plane, intersectLine);
C(Method) * METHOD(Plane, intersectLinef);
C(Method) * METHOD(Plane, multMatrix);

C(Method) * METHOD(Quaternion, divide);
C(Method) * METHOD(Quaternion, identity);
C(Method) * METHOD(Quaternion, inverse);
C(Method) * METHOD(Quaternion, multiply);
C(Method) * METHOD(Quaternion, normalize);
C(Method) * METHOD(Quaternion, pitch);
C(Method) * METHOD(Quaternion, roll);
C(Method) * METHOD(Quaternion, rotatePitch);
C(Method) * METHOD(Quaternion, rotateRoll);
C(Method) * METHOD(Quaternion, rotateYaw);
C(Method) * METHOD(Quaternion, rotateYawPitch);
C(Method) * METHOD(Quaternion, rotationAxis);
C(Method) * METHOD(Quaternion, rotationDirection);
C(Method) * METHOD(Quaternion, rotationMatrix);
C(Method) * METHOD(Quaternion, rotationYawPitchRoll);
C(Method) * METHOD(Quaternion, slerp);
C(Method) * METHOD(Quaternion, toDirection);
C(Method) * METHOD(Quaternion, yaw);
C(Method) * METHOD(Quaternion, yawPitch);

C(Method) * METHOD(Vector3D, add);
C(Method) * METHOD(Vector3D, crossProduct);
C(Method) * METHOD(Vector3D, divideMatrix);
C(Method) * METHOD(Vector3D, dotProduct);
C(Method) * METHOD(Vector3D, dotProductf);
C(Method) * METHOD(Vector3D, multMatrix);
C(Method) * METHOD(Vector3D, multMatrixf);
C(Method) * METHOD(Vector3D, normalize);
C(Method) * METHOD(Vector3D, scale);
C(Method) * METHOD(Vector3D, subtract);

C(Method) * METHOD(Vector3Df, add);
C(Method) * METHOD(Vector3Df, crossProduct);
C(Method) * METHOD(Vector3Df, divideMatrix);
C(Method) * METHOD(Vector3Df, dotProduct);
C(Method) * METHOD(Vector3Df, multMatrix);
C(Method) * METHOD(Vector3Df, normalize);
C(Method) * METHOD(Vector3Df, scale);
C(Method) * METHOD(Vector3Df, subtract);

C(Method) * METHOD(Cube, create);

C(Method) * METHOD(SkyBox, create);
C(Method) * METHOD(SkyBox, render);

C(Method) * METHOD(Sphere, create);

C(Method) * METHOD(ClipBoard, allocate);
C(Method) * METHOD(ClipBoard, clear);
C(Method) * METHOD(ClipBoard, load);
C(Method) * METHOD(ClipBoard, save);
C(Method) * METHOD(ClipBoard, unload);

C(Method) * METHOD(Cursor, load);

C(Method) * METHOD(Extent, addBox);
C(Method) * METHOD(Extent, copy);
C(Method) * METHOD(Extent, empty);
C(Method) * METHOD(Extent, excludeBox);
C(Method) * METHOD(Extent, exclusion);
C(Method) * METHOD(Extent, intersectBox);
C(Method) * METHOD(Extent, intersection);
C(Method) * METHOD(Extent, offset);
C(Method) * METHOD(Extent, union);
C(Method) * METHOD(Extent, unionBox);

C(Method) * METHOD(GuiApplication, cycle);
C(Method) * METHOD(GuiApplication, getCursor);
C(Method) * METHOD(GuiApplication, getKeyState);
C(Method) * METHOD(GuiApplication, getMouseState);
C(Method) * METHOD(GuiApplication, init);
C(Method) * METHOD(GuiApplication, lock);
C(Method) * METHOD(GuiApplication, lockEx);
C(Method) * METHOD(GuiApplication, pauseNetworkEvents);
C(Method) * METHOD(GuiApplication, processFileNotifications);
C(Method) * METHOD(GuiApplication, processInput);
C(Method) * METHOD(GuiApplication, processNetworkEvents);
C(Method) * METHOD(GuiApplication, resumeNetworkEvents);
C(Method) * METHOD(GuiApplication, setDesktopPosition);
C(Method) * METHOD(GuiApplication, signalEvent);
C(Method) * METHOD(GuiApplication, switchMode);
C(Method) * METHOD(GuiApplication, terminate);
C(Method) * METHOD(GuiApplication, unlock);
C(Method) * METHOD(GuiApplication, unlockEx);
C(Method) * METHOD(GuiApplication, updateDisplay);
C(Method) * METHOD(GuiApplication, wait);
C(Method) * METHOD(GuiApplication, waitEvent);
C(Method) * METHOD(GuiApplication, waitNetworkEvent);

C(Method) * METHOD(Interface, acquireInput);
C(Method) * METHOD(Interface, activateRootWindow);
C(Method) * METHOD(Interface, allocateClipboard);
C(Method) * METHOD(Interface, clearClipboard);
C(Method) * METHOD(Interface, createRootWindow);
C(Method) * METHOD(Interface, destroyRootWindow);
C(Method) * METHOD(Interface, ensureFullScreen);
C(Method) * METHOD(Interface, flashRootWindow);
C(Method) * METHOD(Interface, getCurrentMode);
C(Method) * METHOD(Interface, getExtendedKey);
C(Method) * METHOD(Interface, getJoystickState);
C(Method) * METHOD(Interface, getKeyState);
C(Method) * METHOD(Interface, getMousePosition);
C(Method) * METHOD(Interface, getMouseState);
C(Method) * METHOD(Interface, getScreenArea);
C(Method) * METHOD(Interface, graphicsDrivers);
C(Method) * METHOD(Interface, initialize);
C(Method) * METHOD(Interface, loadClipboard);
C(Method) * METHOD(Interface, lock);
C(Method) * METHOD(Interface, offsetWindow);
C(Method) * METHOD(Interface, orderRootWindow);
C(Method) * METHOD(Interface, positionRootWindow);
C(Method) * METHOD(Interface, processInput);
C(Method) * METHOD(Interface, saveClipboard);
C(Method) * METHOD(Interface, screenMode);
C(Method) * METHOD(Interface, setCaret);
C(Method) * METHOD(Interface, setIcon);
C(Method) * METHOD(Interface, setMouseCapture);
C(Method) * METHOD(Interface, setMouseCursor);
C(Method) * METHOD(Interface, setMousePosition);
C(Method) * METHOD(Interface, setMouseRange);
C(Method) * METHOD(Interface, setRootWindowCaption);
C(Method) * METHOD(Interface, setRootWindowColor);
C(Method) * METHOD(Interface, setRootWindowState);
C(Method) * METHOD(Interface, setTimerResolution);
C(Method) * METHOD(Interface, startMoving);
C(Method) * METHOD(Interface, stopMoving);
C(Method) * METHOD(Interface, terminate);
C(Method) * METHOD(Interface, translateKey);
C(Method) * METHOD(Interface, unloadClipboard);
C(Method) * METHOD(Interface, unlock);
C(Method) * METHOD(Interface, updateRootWindow);
C(Method) * METHOD(Interface, wait);
C(Method) * METHOD(Interface, writeKeyedText);
C(Method) * METHOD(Interface, writeKeyedTextDisabled);

C(Method) * METHOD(Skin, captionFont);
C(Method) * METHOD(Skin, cursorsBitmaps);
C(Method) * METHOD(Skin, getBitmap);
C(Method) * METHOD(Skin, getDecorationsSize);
C(Method) * METHOD(Skin, horizontalSBH);
C(Method) * METHOD(Skin, isMouseMoving);
C(Method) * METHOD(Skin, isMouseResizing);
C(Method) * METHOD(Skin, setWindowArea);
C(Method) * METHOD(Skin, setWindowMinimum);
C(Method) * METHOD(Skin, showDecorations);
C(Method) * METHOD(Skin, systemFont);
C(Method) * METHOD(Skin, updateNonClient);
C(Method) * METHOD(Skin, verticalSBW);

C(Method) * METHOD(Timer, delayExpired);
C(Method) * METHOD(Timer, start);
C(Method) * METHOD(Timer, stop);

C(Method) * METHOD(Window, acquireInput);
C(Method) * METHOD(Window, activate);
C(Method) * METHOD(Window, addResource);
C(Method) * METHOD(Window, buttonCloseDialog);
C(Method) * METHOD(Window, capture);
C(Method) * METHOD(Window, closeConfirmation);
C(Method) * METHOD(Window, create);
C(Method) * METHOD(Window, cycleChildren);
C(Method) * METHOD(Window, deactivate);
C(Method) * METHOD(Window, destroy);
C(Method) * METHOD(Window, doModal);
C(Method) * METHOD(Window, doModalEnd);
C(Method) * METHOD(Window, doModalLoop);
C(Method) * METHOD(Window, doModalStart);
C(Method) * METHOD(Window, externalPosition);
C(Method) * METHOD(Window, flash);
C(Method) * METHOD(Window, freeMouseRange);
C(Method) * METHOD(Window, getCaretPosition);
C(Method) * METHOD(Window, getCaretSize);
C(Method) * METHOD(Window, getDecorationsSize);
C(Method) * METHOD(Window, getIcon);
C(Method) * METHOD(Window, getMousePosition);
C(Method) * METHOD(Window, getNCMousePosition);
C(Method) * METHOD(Window, grab);
C(Method) * METHOD(Window, isInside);
C(Method) * METHOD(Window, isMouseMoving);
C(Method) * METHOD(Window, isMouseResizing);
C(Method) * METHOD(Window, isOpaque);
C(Method) * METHOD(Window, makeActive);
C(Method) * METHOD(Window, menuFileClose);
C(Method) * METHOD(Window, menuFileExit);
C(Method) * METHOD(Window, menuFileSave);
C(Method) * METHOD(Window, menuFileSaveAll);
C(Method) * METHOD(Window, menuFileSaveAs);
C(Method) * METHOD(Window, menuWindowArrangeIcons);
C(Method) * METHOD(Window, menuWindowCascade);
C(Method) * METHOD(Window, menuWindowClose);
C(Method) * METHOD(Window, menuWindowCloseAll);
C(Method) * METHOD(Window, menuWindowMaximize);
C(Method) * METHOD(Window, menuWindowMinimize);
C(Method) * METHOD(Window, menuWindowMove);
C(Method) * METHOD(Window, menuWindowNext);
C(Method) * METHOD(Window, menuWindowPrevious);
C(Method) * METHOD(Window, menuWindowRestore);
C(Method) * METHOD(Window, menuWindowSelectWindow);
C(Method) * METHOD(Window, menuWindowSize);
C(Method) * METHOD(Window, menuWindowStayOnTop);
C(Method) * METHOD(Window, menuWindowTileHorz);
C(Method) * METHOD(Window, menuWindowTileVert);
C(Method) * METHOD(Window, menuWindowWindows);
C(Method) * METHOD(Window, modal);
C(Method) * METHOD(Window, mouseMessage);
C(Method) * METHOD(Window, move);
C(Method) * METHOD(Window, multiTouchMessage);
C(Method) * METHOD(Window, notifyActivate);
C(Method) * METHOD(Window, notifyDestroyed);
C(Method) * METHOD(Window, notifySaved);
C(Method) * METHOD(Window, onActivate);
C(Method) * METHOD(Window, onActivateClient);
C(Method) * METHOD(Window, onApplyGraphics);
C(Method) * METHOD(Window, onChildAddedOrRemoved);
C(Method) * METHOD(Window, onChildResized);
C(Method) * METHOD(Window, onChildVisibilityToggled);
C(Method) * METHOD(Window, onClose);
C(Method) * METHOD(Window, onCreate);
C(Method) * METHOD(Window, onDestroy);
C(Method) * METHOD(Window, onDestroyed);
C(Method) * METHOD(Window, onDrawOverChildren);
C(Method) * METHOD(Window, onFileModified);
C(Method) * METHOD(Window, onHScroll);
C(Method) * METHOD(Window, onKeyDown);
C(Method) * METHOD(Window, onKeyHit);
C(Method) * METHOD(Window, onKeyUp);
C(Method) * METHOD(Window, onLeftButtonDown);
C(Method) * METHOD(Window, onLeftButtonUp);
C(Method) * METHOD(Window, onLeftDoubleClick);
C(Method) * METHOD(Window, onLoadGraphics);
C(Method) * METHOD(Window, onMiddleButtonDown);
C(Method) * METHOD(Window, onMiddleButtonUp);
C(Method) * METHOD(Window, onMiddleDoubleClick);
C(Method) * METHOD(Window, onMouseCaptureLost);
C(Method) * METHOD(Window, onMouseLeave);
C(Method) * METHOD(Window, onMouseMove);
C(Method) * METHOD(Window, onMouseOver);
C(Method) * METHOD(Window, onMoving);
C(Method) * METHOD(Window, onMultiTouch);
C(Method) * METHOD(Window, onPosition);
C(Method) * METHOD(Window, onPostCreate);
C(Method) * METHOD(Window, onRedraw);
C(Method) * METHOD(Window, onResize);
C(Method) * METHOD(Window, onResizing);
C(Method) * METHOD(Window, onRightButtonDown);
C(Method) * METHOD(Window, onRightButtonUp);
C(Method) * METHOD(Window, onRightDoubleClick);
C(Method) * METHOD(Window, onSaveFile);
C(Method) * METHOD(Window, onStateChange);
C(Method) * METHOD(Window, onSysKeyDown);
C(Method) * METHOD(Window, onSysKeyHit);
C(Method) * METHOD(Window, onSysKeyUp);
C(Method) * METHOD(Window, onUnloadGraphics);
C(Method) * METHOD(Window, onVScroll);
C(Method) * METHOD(Window, preShowDecorations);
C(Method) * METHOD(Window, releaseCapture);
C(Method) * METHOD(Window, removeResource);
C(Method) * METHOD(Window, restoreCaret);
C(Method) * METHOD(Window, scroll);
C(Method) * METHOD(Window, setBox);
C(Method) * METHOD(Window, setCaption);
C(Method) * METHOD(Window, setCaret);
C(Method) * METHOD(Window, setMouseRange);
C(Method) * METHOD(Window, setMouseRangeToClient);
C(Method) * METHOD(Window, setMouseRangeToWindow);
C(Method) * METHOD(Window, setScrollArea);
C(Method) * METHOD(Window, setScrollLineStep);
C(Method) * METHOD(Window, setScrollPosition);
C(Method) * METHOD(Window, setState);
C(Method) * METHOD(Window, setText);
C(Method) * METHOD(Window, setWindowArea);
C(Method) * METHOD(Window, setWindowMinimum);
C(Method) * METHOD(Window, showDecorations);
C(Method) * METHOD(Window, showSysMenu);
C(Method) * METHOD(Window, softActivate);
C(Method) * METHOD(Window, update);
C(Method) * METHOD(Window, updateDisplay);
C(Method) * METHOD(Window, updateNonClient);
C(Method) * METHOD(Window, writeCaption);

C(Method) * METHOD(WindowController, onCreate);
C(Method) * METHOD(WindowController, onKeyDown);
C(Method) * METHOD(WindowController, onKeyHit);
C(Method) * METHOD(WindowController, onKeyUp);
C(Method) * METHOD(WindowController, onLeftButtonDown);
C(Method) * METHOD(WindowController, onLeftButtonUp);
C(Method) * METHOD(WindowController, onLeftDoubleClick);
C(Method) * METHOD(WindowController, onLoadGraphics);
C(Method) * METHOD(WindowController, onMiddleButtonDown);
C(Method) * METHOD(WindowController, onMiddleButtonUp);
C(Method) * METHOD(WindowController, onMiddleDoubleClick);
C(Method) * METHOD(WindowController, onMouseMove);
C(Method) * METHOD(WindowController, onMultiTouch);
C(Method) * METHOD(WindowController, onRedraw);
C(Method) * METHOD(WindowController, onResize);
C(Method) * METHOD(WindowController, onRightButtonDown);
C(Method) * METHOD(WindowController, onRightButtonUp);
C(Method) * METHOD(WindowController, onRightDoubleClick);
C(Method) * METHOD(WindowController, onUnloadGraphics);

C(Method) * METHOD(BufferLocation, adjustAdd);
C(Method) * METHOD(BufferLocation, adjustDelete);

C(Method) * METHOD(Button, notifyClicked);
C(Method) * METHOD(Button, notifyDoubleClick);
C(Method) * METHOD(Button, notifyMouseLeave);
C(Method) * METHOD(Button, notifyMouseMove);
C(Method) * METHOD(Button, notifyMouseOver);
C(Method) * METHOD(Button, notifyPushed);
C(Method) * METHOD(Button, notifyReleased);
C(Method) * METHOD(Button, removeRadio);
C(Method) * METHOD(Button, setColor);
C(Method) * METHOD(Button, setTextColor);

C(Method) * METHOD(CalendarControl, notifyChanged);

C(Method) * METHOD(DataBox, modified);
C(Method) * METHOD(DataBox, notifyChanged);
C(Method) * METHOD(DataBox, notifyModified);
C(Method) * METHOD(DataBox, onConfigure);
C(Method) * METHOD(DataBox, refresh);
C(Method) * METHOD(DataBox, saveData);
C(Method) * METHOD(DataBox, setData);

C(Method) * METHOD(DataField, autoSize);
C(Method) * METHOD(DataField, move);

C(Method) * METHOD(DataRow, addRow);
C(Method) * METHOD(DataRow, addRowAfter);
C(Method) * METHOD(DataRow, addString);
C(Method) * METHOD(DataRow, addStringf);
C(Method) * METHOD(DataRow, edit);
C(Method) * METHOD(DataRow, findRow);
C(Method) * METHOD(DataRow, findSubRow);
C(Method) * METHOD(DataRow, getData);
C(Method) * METHOD(DataRow, getNextRow);
C(Method) * METHOD(DataRow, getPrevRow);
C(Method) * METHOD(DataRow, move);
C(Method) * METHOD(DataRow, setData);
C(Method) * METHOD(DataRow, sortSubRows);
C(Method) * METHOD(DataRow, unsetData);

C(Method) * METHOD(DirectoriesBox, notifyModified);
C(Method) * METHOD(DirectoriesBox, notifyPathBoxModified);
C(Method) * METHOD(DirectoriesBox, onBrowsedDir);
C(Method) * METHOD(DirectoriesBox, onChangedDir);
C(Method) * METHOD(DirectoriesBox, onPrepareBrowseDir);

C(Method) * METHOD(DropBox, addField);
C(Method) * METHOD(DropBox, addRow);
C(Method) * METHOD(DropBox, addRowAfter);
C(Method) * METHOD(DropBox, addString);
C(Method) * METHOD(DropBox, addStringf);
C(Method) * METHOD(DropBox, clear);
C(Method) * METHOD(DropBox, deleteRow);
C(Method) * METHOD(DropBox, findRow);
C(Method) * METHOD(DropBox, findSubRow);
C(Method) * METHOD(DropBox, getData);
C(Method) * METHOD(DropBox, getRowCount);
C(Method) * METHOD(DropBox, getTag);
C(Method) * METHOD(DropBox, notifyClose);
C(Method) * METHOD(DropBox, notifyHighlight);
C(Method) * METHOD(DropBox, notifySelect);
C(Method) * METHOD(DropBox, notifyTextEntry);
C(Method) * METHOD(DropBox, onCloseDropDown);
C(Method) * METHOD(DropBox, onDropDown);
C(Method) * METHOD(DropBox, save);
C(Method) * METHOD(DropBox, selectRow);
C(Method) * METHOD(DropBox, setData);
C(Method) * METHOD(DropBox, sort);

C(Method) * METHOD(EditBox, addCh);
C(Method) * METHOD(EditBox, addS);
C(Method) * METHOD(EditBox, backSpace);
C(Method) * METHOD(EditBox, centerOnCursor);
C(Method) * METHOD(EditBox, clear);
C(Method) * METHOD(EditBox, clearLine);
C(Method) * METHOD(EditBox, copy);
C(Method) * METHOD(EditBox, cut);
C(Method) * METHOD(EditBox, delete);
C(Method) * METHOD(EditBox, deleteSelection);
C(Method) * METHOD(EditBox, deselect);
C(Method) * METHOD(EditBox, end);
C(Method) * METHOD(EditBox, find);
C(Method) * METHOD(EditBox, findInSelection);
C(Method) * METHOD(EditBox, getSel);
C(Method) * METHOD(EditBox, getSelPos);
C(Method) * METHOD(EditBox, getText);
C(Method) * METHOD(EditBox, goToLineNum);
C(Method) * METHOD(EditBox, goToPosition);
C(Method) * METHOD(EditBox, home);
C(Method) * METHOD(EditBox, lineDown);
C(Method) * METHOD(EditBox, lineUp);
C(Method) * METHOD(EditBox, load);
C(Method) * METHOD(EditBox, modified);
C(Method) * METHOD(EditBox, notifyCaretMove);
C(Method) * METHOD(EditBox, notifyCharsAdded);
C(Method) * METHOD(EditBox, notifyCharsDeleted);
C(Method) * METHOD(EditBox, notifyDoubleClick);
C(Method) * METHOD(EditBox, notifyDropped);
C(Method) * METHOD(EditBox, notifyKeyDown);
C(Method) * METHOD(EditBox, notifyModified);
C(Method) * METHOD(EditBox, notifyOvrToggle);
C(Method) * METHOD(EditBox, notifyUnsetModified);
C(Method) * METHOD(EditBox, notifyUpdate);
C(Method) * METHOD(EditBox, pageDown);
C(Method) * METHOD(EditBox, pageUp);
C(Method) * METHOD(EditBox, paste);
C(Method) * METHOD(EditBox, printf);
C(Method) * METHOD(EditBox, putCh);
C(Method) * METHOD(EditBox, putS);
C(Method) * METHOD(EditBox, record);
C(Method) * METHOD(EditBox, redo);
C(Method) * METHOD(EditBox, save);
C(Method) * METHOD(EditBox, selSize);
C(Method) * METHOD(EditBox, select);
C(Method) * METHOD(EditBox, selectAll);
C(Method) * METHOD(EditBox, setContents);
C(Method) * METHOD(EditBox, setCursorToView);
C(Method) * METHOD(EditBox, setModified);
C(Method) * METHOD(EditBox, setSelPos);
C(Method) * METHOD(EditBox, setViewToCursor);
C(Method) * METHOD(EditBox, undo);

C(Method) * METHOD(EditBoxStream, deleteBytes);

C(Method) * METHOD(EditableSelectorButton, onRename);

C(Method) * METHOD(ListBox, addField);
C(Method) * METHOD(ListBox, addRow);
C(Method) * METHOD(ListBox, addRowAfter);
C(Method) * METHOD(ListBox, addRowNone);
C(Method) * METHOD(ListBox, addString);
C(Method) * METHOD(ListBox, addStringf);
C(Method) * METHOD(ListBox, clear);
C(Method) * METHOD(ListBox, clearFields);
C(Method) * METHOD(ListBox, deleteRow);
C(Method) * METHOD(ListBox, findRow);
C(Method) * METHOD(ListBox, findString);
C(Method) * METHOD(ListBox, findSubRow);
C(Method) * METHOD(ListBox, findSubString);
C(Method) * METHOD(ListBox, findSubStringAfter);
C(Method) * METHOD(ListBox, findSubStringi);
C(Method) * METHOD(ListBox, getData);
C(Method) * METHOD(ListBox, getMultiSelection);
C(Method) * METHOD(ListBox, getTag);
C(Method) * METHOD(ListBox, notifyChanged);
C(Method) * METHOD(ListBox, notifyCollapse);
C(Method) * METHOD(ListBox, notifyDoubleClick);
C(Method) * METHOD(ListBox, notifyEditDone);
C(Method) * METHOD(ListBox, notifyEdited);
C(Method) * METHOD(ListBox, notifyEditing);
C(Method) * METHOD(ListBox, notifyHighlight);
C(Method) * METHOD(ListBox, notifyKeyDown);
C(Method) * METHOD(ListBox, notifyKeyHit);
C(Method) * METHOD(ListBox, notifyModified);
C(Method) * METHOD(ListBox, notifyMove);
C(Method) * METHOD(ListBox, notifyMoved);
C(Method) * METHOD(ListBox, notifyMovedField);
C(Method) * METHOD(ListBox, notifyReclick);
C(Method) * METHOD(ListBox, notifyResized);
C(Method) * METHOD(ListBox, notifyRightClick);
C(Method) * METHOD(ListBox, notifySelect);
C(Method) * METHOD(ListBox, notifySort);
C(Method) * METHOD(ListBox, removeField);
C(Method) * METHOD(ListBox, selectRow);
C(Method) * METHOD(ListBox, setData);
C(Method) * METHOD(ListBox, sort);
C(Method) * METHOD(ListBox, stopEditing);

C(Method) * METHOD(Menu, addDynamic);
C(Method) * METHOD(Menu, addItem);
C(Method) * METHOD(Menu, addSubMenu);
C(Method) * METHOD(Menu, clean);
C(Method) * METHOD(Menu, clear);
C(Method) * METHOD(Menu, findItem);
C(Method) * METHOD(Menu, findMenu);
C(Method) * METHOD(Menu, merge);
C(Method) * METHOD(Menu, removeItem);

C(Method) * METHOD(MenuItem, notifySelect);

C(Method) * METHOD(PaneSplitter, notifyResized);

C(Method) * METHOD(PathBox, deselect);
C(Method) * METHOD(PathBox, end);
C(Method) * METHOD(PathBox, home);
C(Method) * METHOD(PathBox, notifyModified);
C(Method) * METHOD(PathBox, selectAll);

C(Method) * METHOD(ScrollBar, action);
C(Method) * METHOD(ScrollBar, notifyScrolling);

C(Method) * METHOD(SelectorBar, addButton);
C(Method) * METHOD(SelectorBar, clear);
C(Method) * METHOD(SelectorBar, findButtonByID);
C(Method) * METHOD(SelectorBar, removeButton);
C(Method) * METHOD(SelectorBar, select);

C(Method) * METHOD(Stacker, destroyChildren);
C(Method) * METHOD(Stacker, getNextStackedItem);
C(Method) * METHOD(Stacker, makeControlVisible);

C(Method) * METHOD(StatusBar, addField);
C(Method) * METHOD(StatusBar, clear);
C(Method) * METHOD(StatusBar, removeField);

C(Method) * METHOD(StatusField, setTextf);

C(Method) * METHOD(Tab, selectTab);

C(Method) * METHOD(TabControl, addTab);
C(Method) * METHOD(TabControl, removeTab);

C(Method) * METHOD(UndoAction, redo);
C(Method) * METHOD(UndoAction, undo);

C(Method) * METHOD(UndoBuffer, clear);
C(Method) * METHOD(UndoBuffer, record);
C(Method) * METHOD(UndoBuffer, redo);
C(Method) * METHOD(UndoBuffer, undo);

C(Method) * METHOD(FileFilter, validateFileName);

C(Method) * METHOD(FileNameType, selectByExtension);

C(Method) * METHOD(DCOMClientObject, callMethod);
C(Method) * METHOD(DCOMClientObject, callVirtualMethod);
C(Method) * METHOD(DCOMClientObject, connect);

C(Method) * METHOD(DCOMSendControl, resume);
C(Method) * METHOD(DCOMSendControl, stop);

C(Method) * METHOD(DCOMServerObject, callMethod);
C(Method) * METHOD(DCOMServerObject, callVirtualMethod);

C(Method) * METHOD(DCOMService, start);
C(Method) * METHOD(DCOMService, stop);

C(Method) * METHOD(FileServerConnection, open);

C(Method) * METHOD(HTTPFile, openURL);

C(Method) * METHOD(SSLSocket, establishConnection);

C(Method) * METHOD(Service, onAccept);
C(Method) * METHOD(Service, process);
C(Method) * METHOD(Service, processTimeOut);
C(Method) * METHOD(Service, start);
C(Method) * METHOD(Service, stop);

C(Method) * METHOD(Socket, connect);
C(Method) * METHOD(Socket, datagramConnect);
C(Method) * METHOD(Socket, datagramHost);
C(Method) * METHOD(Socket, disconnect);
C(Method) * METHOD(Socket, onConnect);
C(Method) * METHOD(Socket, onDisconnect);
C(Method) * METHOD(Socket, onEstablishConnection);
C(Method) * METHOD(Socket, onReceive);
C(Method) * METHOD(Socket, onReceivePacket);
C(Method) * METHOD(Socket, process);
C(Method) * METHOD(Socket, processTimeOut);
C(Method) * METHOD(Socket, receiveData);
C(Method) * METHOD(Socket, send);
C(Method) * METHOD(Socket, sendData);
C(Method) * METHOD(Socket, sendPacket);
C(Method) * METHOD(Socket, sendString);
C(Method) * METHOD(Socket, sendf);
C(Method) * METHOD(Socket, safeDecRef);
C(Method) * METHOD(Socket, safeIncRef);

C(Method) * METHOD(Archive, clear);
C(Method) * METHOD(Archive, fileExists);
C(Method) * METHOD(Archive, fileOpen);
C(Method) * METHOD(Archive, fileOpenAtPosition);
C(Method) * METHOD(Archive, openDirectory);
C(Method) * METHOD(Archive, setBufferRead);
C(Method) * METHOD(Archive, setBufferSize);

C(Method) * METHOD(ArchiveDir, add);
C(Method) * METHOD(ArchiveDir, addFromFile);
C(Method) * METHOD(ArchiveDir, addFromFileAtPosition);
C(Method) * METHOD(ArchiveDir, delete);
C(Method) * METHOD(ArchiveDir, fileExists);
C(Method) * METHOD(ArchiveDir, fileOpen);
C(Method) * METHOD(ArchiveDir, move);
C(Method) * METHOD(ArchiveDir, openDirectory);
C(Method) * METHOD(ArchiveDir, rename);

C(Method) * METHOD(Box, clip);
C(Method) * METHOD(Box, clipOffset);
C(Method) * METHOD(Box, isPointInside);
C(Method) * METHOD(Box, overlap);

C(Method) * METHOD(Condition, signal);
C(Method) * METHOD(Condition, wait);

C(Method) * METHOD(Date, onGetStringEn);

C(Method) * METHOD(DateTime, fixDayOfYear);
C(Method) * METHOD(DateTime, getLocalTime);

C(Method) * METHOD(DualPipe, getExitCode);
C(Method) * METHOD(DualPipe, getLinePeek);
C(Method) * METHOD(DualPipe, getProcessID);
C(Method) * METHOD(DualPipe, peek);
C(Method) * METHOD(DualPipe, terminate);
C(Method) * METHOD(DualPipe, wait);

C(Method) * METHOD(File, close);
C(Method) * METHOD(File, closeInput);
C(Method) * METHOD(File, closeOutput);
C(Method) * METHOD(File, copyTo);
C(Method) * METHOD(File, eof);
C(Method) * METHOD(File, flush);
C(Method) * METHOD(File, getDouble);
C(Method) * METHOD(File, getFloat);
C(Method) * METHOD(File, getHexValue);
C(Method) * METHOD(File, getLine);
C(Method) * METHOD(File, getLineEx);
C(Method) * METHOD(File, getSize);
C(Method) * METHOD(File, getString);
C(Method) * METHOD(File, getValue);
C(Method) * METHOD(File, getc);
C(Method) * METHOD(File, lock);
C(Method) * METHOD(File, print);
C(Method) * METHOD(File, printLn);
C(Method) * METHOD(File, printf);
C(Method) * METHOD(File, putc);
C(Method) * METHOD(File, puts);
C(Method) * METHOD(File, read);
C(Method) * METHOD(File, seek);
C(Method) * METHOD(File, seek64);
C(Method) * METHOD(File, tell);
C(Method) * METHOD(File, truncate);
C(Method) * METHOD(File, unlock);
C(Method) * METHOD(File, write);

C(Method) * METHOD(FileListing, find);
C(Method) * METHOD(FileListing, stop);

C(Method) * METHOD(FileMonitor, onDirNotify);
C(Method) * METHOD(FileMonitor, onFileNotify);
C(Method) * METHOD(FileMonitor, startMonitoring);
C(Method) * METHOD(FileMonitor, stopMonitoring);

C(Method) * METHOD(GlobalAppSettings, getGlobalValue);
C(Method) * METHOD(GlobalAppSettings, putGlobalValue);

C(Method) * METHOD(GlobalSettings, close);
C(Method) * METHOD(GlobalSettings, closeAndMonitor);
C(Method) * METHOD(GlobalSettings, load);
C(Method) * METHOD(GlobalSettings, onAskReloadSettings);
C(Method) * METHOD(GlobalSettings, openAndLock);
C(Method) * METHOD(GlobalSettings, save);

C(Method) * METHOD(GlobalSettingsDriver, load);
C(Method) * METHOD(GlobalSettingsDriver, save);

C(Method) * METHOD(JSONParser, getObject);

C(Method) * METHOD(Month, getNumDays);

C(Method) * METHOD(Semaphore, release);
C(Method) * METHOD(Semaphore, tryWait);
C(Method) * METHOD(Semaphore, wait);

C(Method) * METHOD(Thread, create);
C(Method) * METHOD(Thread, kill);
C(Method) * METHOD(Thread, main);
C(Method) * METHOD(Thread, setPriority);
C(Method) * METHOD(Thread, wait);




// Methods Function Pointers

C(bool) (* Bitmap_allocate)(C(Bitmap) __this, const char * driverName, int width, int height, int stride, C(PixelFormat) format, C(bool) allocatePalette);
C(bool) (* Bitmap_allocateDD)(C(Bitmap) __this, C(DisplaySystem) displaySystem, int width, int height);
C(bool) (* Bitmap_convert)(C(Bitmap) __this, C(DisplaySystem) displaySystem, C(PixelFormat) format, C(ColorAlpha) * palette);
C(bool) (* Bitmap_copy)(C(Bitmap) __this, C(Bitmap) source);
void (* Bitmap_free)(C(Bitmap) __this);
C(Surface) (* Bitmap_getSurface)(C(Bitmap) __this, int x, int y, C(Box) * clip);
void (* Bitmap_grab)(C(Bitmap) __this, C(Bitmap) src, int x, int y);
C(bool) (* Bitmap_load)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadFromFile)(C(Bitmap) __this, C(File) file, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadGrayed)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadMipMaps)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadMonochrome)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadT)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_loadTMipMaps)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_makeDD)(C(Bitmap) __this, C(DisplaySystem) displaySystem);
C(bool) (* Bitmap_makeMipMaps)(C(Bitmap) __this, C(DisplaySystem) displaySystem);
C(ColorAlpha) * (* Bitmap_quantize)(C(Bitmap) __this, uint start, uint end);
C(bool) (* Bitmap_save)(C(Bitmap) __this, const char * fileName, const char * type, void * options);
void (* Bitmap_smoothEdges)(C(Bitmap) __this, int size);

C(bool) (* CubeMap_load)(C(CubeMap) __this, C(DisplaySystem) displaySystem, constString * names, constString extension, C(bool) oldStyle);

void (* Display_applyMaterial)(C(Display) __this, C(Material) * material, C(Mesh) * mesh);
void (* Display_collectHits)(C(Display) __this);
C(bool) (* Display_create)(C(Display) __this, C(DisplaySystem) displaySystem, void * window);
C(bool) (* Display_drawMesh)(C(Display) __this, C(Object) * object);
C(bool) (* Display_drawObject)(C(Display) __this, C(Object) * object);
void (* Display_drawPrimitives)(C(Display) __this, C(PrimitiveSingle) * primitive, C(Mesh) * mesh);
void (* Display_drawTranslucency)(C(Display) __this);
void (* Display_endUpdate)(C(Display) __this);
void (* Display_fontExtent)(C(Display) __this, C(Font) * font, const char * text, int len, int * width, int * height);
void (* Display_fontExtent2)(C(Display) __this, C(Font) * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);
int (* Display_getHits)(C(Display) __this, C(OldList) * list);
C(bool) (* Display_getIntersect)(C(Display) __this, C(Vector3D) * intersect);
C(Surface) (* Display_getSurface)(C(Display) __this, int x, int y, C(Box) * clip);
C(bool) (* Display_grab)(C(Display) __this, C(Bitmap) bitmap, int x, int y, int w, int h);
void (* Display_intersectPolygons)(C(Display) __this);
C(bool) (* Display_isObjectVisible)(C(Display) __this, C(Object) * object);
C(bool) (* Display_lock)(C(Display) __this, C(bool) render);
void (* Display_nextPage)(C(Display) __this);
void (* Display_popMatrix)(C(Display) __this);
void (* Display_position)(C(Display) __this, int x, int y);
void (* Display_pushMatrix)(C(Display) __this);
C(bool) (* Display_resize)(C(Display) __this, int width, int height);
void (* Display_restorePalette)(C(Display) __this);
void (* Display_scroll)(C(Display) __this, C(Box) * scroll, int x, int y, C(Extent) * dirty);
void (* Display_selectMesh)(C(Display) __this, C(Mesh) * mesh);
void (* Display_setCamera)(C(Display) __this, C(Surface) surface, C(Camera) camera);
void (* Display_setLight)(C(Display) __this, int id, C(Light) * light);
void (* Display_setLights)(C(Display) __this, C(Object) * object);
void (* Display_setPalette)(C(Display) __this, C(ColorAlpha) * palette, C(bool) colorMatch);
void (* Display_setTransform)(C(Display) __this, C(Matrix) * matrix, C(bool) viewSpace);
void (* Display_startSelection)(C(Display) __this, int pickX, int pickY, int pickW, int pickH);
void (* Display_startUpdate)(C(Display) __this);
void (* Display_stopSelection)(C(Display) __this);
void (* Display_unlock)(C(Display) __this);
void (* Display_update)(C(Display) __this, C(Box) * updateBox);


C(bool) (* DisplaySystem_addMaterial)(C(DisplaySystem) __this, C(Material) * material);
C(OldLink) * (* DisplaySystem_addMesh)(C(DisplaySystem) __this, C(Mesh) * mesh);
C(Material) * (* DisplaySystem_addNamedMaterial)(C(DisplaySystem) __this, const char * name);
C(NamedLink) * (* DisplaySystem_addTexture)(C(DisplaySystem) __this, const char * name, C(Bitmap) bitmap);
void (* DisplaySystem_clearMaterials)(C(DisplaySystem) __this);
void (* DisplaySystem_clearMeshes)(C(DisplaySystem) __this);
void (* DisplaySystem_clearTextures)(C(DisplaySystem) __this);
C(bool) (* DisplaySystem_create)(C(DisplaySystem) __this, const char * driverName, void * window, C(bool) fullScreen);
void (* DisplaySystem_fontExtent)(C(DisplaySystem) __this, C(Font) * font, const char * text, int len, int * width, int * height);
void (* DisplaySystem_fontExtent2)(C(DisplaySystem) __this, C(Font) * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);
C(Material) * (* DisplaySystem_getMaterial)(C(DisplaySystem) __this, const char * name);
C(Bitmap) (* DisplaySystem_getTexture)(C(DisplaySystem) __this, const char * name);
C(Font) * (* DisplaySystem_loadFont)(C(DisplaySystem) __this, const char * faceName, float size, C(FontFlags) flags);
C(Font) * (* DisplaySystem_loadOutlineFont)(C(DisplaySystem) __this, const char * faceName, float size, C(FontFlags) flags, float outlineSize, float outlineFade);
void * (* DisplaySystem_loadResource)(C(DisplaySystem) __this, C(Resource) resource);
void * (* DisplaySystem_loadResourceFM)(C(DisplaySystem) __this, C(Resource) resource, C(FontManager) fm);
C(bool) (* DisplaySystem_lock)(C(DisplaySystem) __this);
C(bool) (* DisplaySystem_removeMaterial)(C(DisplaySystem) __this, C(Material) * material);
C(bool) (* DisplaySystem_removeMesh)(C(DisplaySystem) __this, C(Mesh) * mesh);
C(bool) (* DisplaySystem_removeTexture)(C(DisplaySystem) __this, const char * name);
void (* DisplaySystem_unloadFont)(C(DisplaySystem) __this, C(Font) * font);
void (* DisplaySystem_unloadResource)(C(DisplaySystem) __this, C(Resource) resource, C(DisplaySystemResPtr) * res);
void (* DisplaySystem_unlock)(C(DisplaySystem) __this);
void * (* DisplaySystem__LoadResource)(C(DisplaySystem) __this, C(Resource) resource, void * fm);

void (* DrawManager_clear)(C(DrawManager) __this);
void (* DrawManager_drawBarrier)(C(DrawManager) __this);
void (* DrawManager_drawImage)(C(DrawManager) __this, int index, float offsetx, float offsety, float angsin, float angcos, C(ColorAlpha) color);
void (* DrawManager_end)(C(DrawManager) __this);
void (* DrawManager_finish)(C(DrawManager) __this);
C(bool) (* DrawManager_init)(C(DrawManager) __this);
void (* DrawManager_ready)(C(DrawManager) __this, int viewportWidth, int viewportHeight);

void (* FMFont_setOutline)(C(FMFont) * __this, float size, float fade);

C(FMFont) * (* FontManager_addFont)(C(FontManager) __this, constString path, int glyphPaddingWidth);
C(FMFont) * (* FontManager_addFontData)(C(FontManager) __this, byte * data, int dataSize, int glyphPaddingWidth);
void (* FontManager_clearState)(C(FontManager) __this);
C(bool) (* FontManager_create)(C(FontManager) __this, int width, int height, int channelCount, int channelIndex, C(FontManagerRenderer) renderer);
int (* FontManager_drawText)(C(FontManager) __this, int x, int y, const char * string, int stringlength);
int (* FontManager_drawTextTruncate)(C(FontManager) __this, int x, int y, int truncatewidth, const char * string, int stringlength, char * extstring, int extwidth);
int (* FontManager_drawTextWithCursor)(C(FontManager) __this, int x, int y, const char * string, int stringlength, int cursoroffset);
C(bool) (* FontManager_expandAtlas)(C(FontManager) __this, int width, int height);
void (* FontManager_flush)(C(FontManager) __this, C(bool) rendererFlush);
void (* FontManager_flushUpdate)(C(FontManager) __this);
void (* FontManager_freeFont)(C(FontManager) __this, C(FMFont) * font);
void (* FontManager_getAtlasSize)(C(FontManager) __this, int * retwidth, int * retheight);
C(FMFont) * (* FontManager_getFont)(C(FontManager) __this, C(FontResource) fontResource);
void (* FontManager_getFontExtent)(C(FontManager) __this, int * retascent, int * retdescent);
void (* FontManager_getFontLimits)(C(FontManager) __this, int * retlimitminy, int * retlimitmaxy);
int (* FontManager_getFontLineHeight)(C(FontManager) __this);
int (* FontManager_getTextBounds)(C(FontManager) __this, int x, int y, const char * string, int stringlength, int * bounds);
int (* FontManager_getTextNearestOffset)(C(FontManager) __this, int targetwidth, const char * string, int stringlength);
int (* FontManager_getTextTruncateOffset)(C(FontManager) __this, int truncatewidth, const char * string, int stringlength, int extwidth, int * retextflag, int * retfullwidth);
int (* FontManager_getTextWidth)(C(FontManager) __this, const char * string, int stringlength);
int (* FontManager_getTextWidthTruncate)(C(FontManager) __this, const char * string, int stringlength, int truncatewidth);
const byte * (* FontManager_getTextureData)(C(FontManager) __this, int * width, int * height);
C(bool) (* FontManager_initPathDraw)(C(FontManager) __this, C(FMPathDraw) * pathdraw);
float (* FontManager_pathDrawCharacter)(C(FontManager) __this, C(FMPathDraw) * pathdraw, float x, float y, float vectorx, float vectory, int unicode);
float (* FontManager_pathDrawPredictAdvance)(C(FontManager) __this, C(FMPathDraw) * pathdraw, unichar unicode);
void (* FontManager_popState)(C(FontManager) __this);
void (* FontManager_pushState)(C(FontManager) __this);
void (* FontManager_removeFont)(C(FontManager) __this, C(FMFont) * font);
C(bool) (* FontManager_resetAtlas)(C(FontManager) __this, int width, int height);
void (* FontManager_setAlign)(C(FontManager) __this, int align);
void (* FontManager_setFont)(C(FontManager) __this, C(FMFont) * font);
void (* FontManager_setFontImageProcessing)(C(FontManager) __this, C(FMFont) * font, void (* processImage)(byte * image, int width, int height, int bytesperpixel, int bytesperline, int paddingwidth, void * opaquecontext), void * opaquecontext);
void (* FontManager_setSize)(C(FontManager) __this, int size);
void (* FontManager_setState)(C(FontManager) __this, C(FMFont) * font, int size, int align);
C(bool) (* FontManager_validateTexture)(C(FontManager) __this, int * retdirtyrect);


void (* FontRenderer_setColor)(C(FontRenderer) __this, C(ColorAlpha) color);
void (* FontRenderer_setCursorColor)(C(FontRenderer) __this, C(ColorAlpha) color);
void (* FontRenderer_setExtColor)(C(FontRenderer) __this, C(ColorAlpha) color);

int (* HitRecord_compare)(C(HitRecord) * __this, C(HitRecord) * recordB, void * unused);

void (* Surface_area)(C(Surface) __this, int x1, int y1, int x2, int y2);
void (* Surface_bevel)(C(Surface) __this, C(bool) inner, int x, int y, int w, int h);
void (* Surface_blit)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h);
void (* Surface_centerTextf)(C(Surface) __this, int x, int y, const char * format, ...);
void (* Surface_clear)(C(Surface) __this, C(ClearType) type);
void (* Surface_clip)(C(Surface) __this, C(Box) * box);
void (* Surface_drawLine)(C(Surface) __this, int x1, int y1, int x2, int y2);
void (* Surface_drawingChar)(C(Surface) __this, char value);
void (* Surface_filter)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
void (* Surface_filterHTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);
void (* Surface_filterVTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);
C(Color) (* Surface_getBackground)(C(Surface) __this);
void (* Surface_getBox)(C(Surface) __this, C(Box) * value);
C(Display) (* Surface_getDisplay)(C(Surface) __this);
C(Font) * (* Surface_getFont)(C(Surface) __this);
C(Color) (* Surface_getForeground)(C(Surface) __this);
C(ColorAlpha) (* Surface_getPixel)(C(Surface) __this, int x, int y);
void (* Surface_getSize)(C(Surface) __this, int * w, int * h);
C(bool) (* Surface_getTextOpacity)(C(Surface) __this);
void (* Surface_gradient)(C(Surface) __this, C(ColorKey) * keys, int numKeys, float smoothness, C(GradientDirection) direction, int x1, int y1, int x2, int y2);
void (* Surface_hLine)(C(Surface) __this, int x1, int x2, int y);
void (* Surface_hTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);
void (* Surface_lineStipple)(C(Surface) __this, uint value);
void (* Surface_putPixel)(C(Surface) __this, int x, int y);
void (* Surface_rectangle)(C(Surface) __this, int x1, int y1, int x2, int y2);
void (* Surface_setBackground)(C(Surface) __this, C(ColorAlpha) value);
void (* Surface_setForeground)(C(Surface) __this, C(ColorAlpha) value);
void (* Surface_stretch)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
void (* Surface_textExtent)(C(Surface) __this, const char * text, int len, int * width, int * height);
void (* Surface_textExtent2)(C(Surface) __this, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);
void (* Surface_textFont)(C(Surface) __this, C(Font) * value);
void (* Surface_textOpacity)(C(Surface) __this, C(bool) value);
void (* Surface_thinBevel)(C(Surface) __this, C(bool) inner, int x, int y, int w, int h);
void (* Surface_tile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);
void (* Surface_vLine)(C(Surface) __this, int y1, int y2, int x);
void (* Surface_vTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);
void (* Surface_writeText)(C(Surface) __this, int x, int y, const char * text, int len);
void (* Surface_writeText2)(C(Surface) __this, int x, int y, const char * text, int len, int prevGlyph, int * rPrevGlyph);
void (* Surface_writeTextDots)(C(Surface) __this, C(Alignment) alignment, int x, int y, int width, const char * text, int len);
void (* Surface_writeTextDotsf)(C(Surface) __this, C(Alignment) alignment, int x, int y, int width, const char * format, ...);
void (* Surface_writeTextf)(C(Surface) __this, int x, int y, const char * format, ...);

void (* CompiledDefaultShader_registerUniforms)(C(CompiledDefaultShader) * __this, int program, C(DefaultShaderBits) state);

void (* CompiledShader_free)(C(CompiledShader) * __this);

void (* DefaultShader_debugging)(C(DefaultShader) __this, C(bool) on);
void (* DefaultShader_fog)(C(DefaultShader) __this, C(bool) on);
void (* DefaultShader_lighting)(C(DefaultShader) __this, C(bool) on);
void (* DefaultShader_setCamera)(C(DefaultShader) __this, C(Camera) camera);
void (* DefaultShader_setColor)(C(DefaultShader) __this, float r, float g, float b, float a);
void (* DefaultShader_setFogColor)(C(DefaultShader) __this, float r, float g, float b);
void (* DefaultShader_setFogDensity)(C(DefaultShader) __this, float density);
void (* DefaultShader_setGlobalAmbient)(C(DefaultShader) __this, float r, float g, float b, float a);
void (* DefaultShader_setLight)(C(DefaultShader) __this, C(Display) display, uint id, C(Light) * light);
void (* DefaultShader_setPerVertexColor)(C(DefaultShader) __this, C(bool) perVertexColor);
void (* DefaultShader_setSimpleMaterial)(C(DefaultShader) __this, C(ColorAlpha) color, C(bool) twoSided);
C(DefaultShader) (* DefaultShader_shader)();
void (* DefaultShader_swizzle)(C(DefaultShader) __this, C(SwizzleMode) swizzle);
void (* DefaultShader_texturing)(C(DefaultShader) __this, C(bool) on);

void (* GLAB_allocate)(C(GLAB) * __this, uint size, void * data, C(GLBufferUsage) usage);
void (* GLAB_deleteBuffers)(int count, C(GLAB) * buffers);
void (* GLAB_free)(C(GLAB) * __this);
void (* GLAB_upload)(C(GLAB) * __this, uint offset, uint size, void * data);
void (* GLAB_use)(C(GLAB) * __this, C(GLBufferContents) contents, int n, int type, uint stride, void * pointer);
void (* GLAB_useVertTrans)(C(GLAB) * __this, uint count, int n, int type, uint stride, void * pointer);

void (* GLEAB_allocate)(C(GLEAB) * __this, uint size, void * data, C(GLBufferUsage) usage);
void (* GLEAB_draw)(C(GLEAB) * __this, int primType, int count, int type, void * indices);
void (* GLEAB_free)(C(GLEAB) * __this);
void (* GLEAB_upload)(C(GLEAB) * __this, uint offset, uint size, void * data);

C(bool) (* Shader_activate)(C(Shader) __this);
void (* Shader_free)(C(Shader) __this);
C(CompiledShader) * (* Shader_load)(C(Shader) __this, uint64 state);
void (* Shader_select)(C(Shader) __this);

void (* Camera_adjustAngle)(C(Camera) __this, C(Quaternion) * angle);
void (* Camera_adjustPosition)(C(Camera) __this, C(Vector3D) * position);
void (* Camera_move)(C(Camera) __this, C(Vector3D) * direction);
C(bool) (* Camera_pointsVisible)(C(Camera) __this, C(Vector3D) * points, int numPoints, double threshold);
C(bool) (* Camera_project)(C(Camera) __this, C(Vector3D) * vector, C(Vector3D) * point);
C(bool) (* Camera_projectSize)(C(Camera) __this, C(Vector3D) * vector, C(Point) * point);
void (* Camera_rotatePitch)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);
void (* Camera_rotateRoll)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);
void (* Camera_rotateYaw)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);
void (* Camera_setup)(C(Camera) __this, int width, int height, C(Point) * origin);
void (* Camera_slerp)(C(Camera) __this, float amount);
C(bool) (* Camera_sphereVisible)(C(Camera) __this, C(Vector3D) * center, float radius);
void (* Camera_transformMatrix)(C(Camera) __this, C(Matrix) * dest, C(Matrix) * src);
void (* Camera_transformNormal)(C(Camera) __this, C(Vector3D) * dest, C(Vector3D) * src);
void (* Camera_transformPoint)(C(Camera) __this, C(Vector3D) * dest, C(Vector3D) * src);
void (* Camera_unproject)(C(Camera) __this, C(Vector3D) * point, C(Vector3D) * vector);
void (* Camera_untransform)(C(Camera) __this, C(Vector3D) * src, C(Vector3D) * result);
C(bool) (* Camera_update)(C(Camera) __this);
void (* Camera_setCPosition)(C(Camera) __this, C(Vector3D) * value);
void (* Camera_setViewMatrix)(C(Camera) __this, C(Matrix) * value);

void (* Euler_add)(C(Euler) * __this, C(Euler) * e1, C(Euler) * e2);

C(bool) (* Line_intersectSphere)(C(Line) * __this, double radius, double * t);

void (* Material_free)(C(Material) * __this);

double (* Matrix_determinant)(C(Matrix) * __this);
void (* Matrix_identity)(C(Matrix) * __this);
void (* Matrix_inverse)(C(Matrix) * __this, C(Matrix) * source);
void (* Matrix_multiply)(C(Matrix) * __this, C(Matrix) * a, C(Matrix) * b);
void (* Matrix_rotate)(C(Matrix) * __this, C(Quaternion) * quat);
void (* Matrix_rotationQuaternion)(C(Matrix) * __this, C(Quaternion) * quat);
void (* Matrix_scale)(C(Matrix) * __this, double sx, double sy, double sz);
void (* Matrix_toEuler)(C(Matrix) * __this, C(Euler) * euler);
void (* Matrix_translate)(C(Matrix) * __this, double tx, double ty, double tz);
void (* Matrix_transpose)(C(Matrix) * __this, C(Matrix) * source);

C(PrimitiveGroup) * (* Mesh_addPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroupType) flags, int nIndices);
C(bool) (* Mesh_allocate)(C(Mesh) * __this, C(MeshFeatures) what, int nVertices, C(DisplaySystem) displaySystem);
C(bool) (* Mesh_allocatePrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive, C(PrimitiveGroupType) flags, int nIndices);
void (* Mesh_applyMaterial)(C(Mesh) * __this, C(Material) * material);
C(bool) (* Mesh_applyTranslucency)(C(Mesh) * __this, C(Object) * object);
void (* Mesh_computeNormals)(C(Mesh) * __this);
void (* Mesh_free)(C(Mesh) * __this, C(MeshFeatures) what);
void (* Mesh_freePrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);
void (* Mesh_freePrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);
void * (* Mesh_getData)(C(Mesh) * __this);
C(bool) (* Mesh_lock)(C(Mesh) * __this, C(MeshFeatures) flags);
C(bool) (* Mesh_lockPrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);
C(bool) (* Mesh_lockPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);
void (* Mesh_setData)(C(Mesh) * __this, void * value);
void (* Mesh_unlock)(C(Mesh) * __this, C(MeshFeatures) flags);
void (* Mesh_unlockPrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);
void (* Mesh_unlockPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);

C(bool) (* Object_addName)(C(Object) * __this, C(Object) * object, const char * name);
void (* Object_animate)(C(Object) * __this, uint frame);
void (* Object_doubleSided)(C(Object) * __this, C(bool) flag);
void (* Object_duplicate)(C(Object) * __this, C(Object) * model);
C(Object) * (* Object_find)(C(Object) * __this, const char * name);
void (* Object_free)(C(Object) * __this, C(DisplaySystem) displaySystem);
void (* Object_freeMesh)(C(Object) * __this, C(DisplaySystem) displaySystem);
void (* Object_initialize)(C(Object) * __this);
C(Mesh) * (* Object_initializeMesh)(C(Object) * __this, C(DisplaySystem) displaySystem);
C(bool) (* Object_intersectsGroundPolygon)(C(Object) * __this, int count, C(Pointf) * pointfs);
C(bool) (* Object_load)(C(Object) * __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);
C(bool) (* Object_merge)(C(Object) * __this, C(DisplaySystem) displaySystem);
void (* Object_move)(C(Object) * __this, C(Vector3D) * direction);
void (* Object_rotateEuler)(C(Object) * __this, C(Euler) * rotation, C(Euler) * min, C(Euler) * max);
void (* Object_setMinMaxRadius)(C(Object) * __this, C(bool) processMesh);
void (* Object_updateTransform)(C(Object) * __this);

void (* Plane_fromPointNormal)(C(Plane) * __this, C(Vector3D) * normal, C(Vector3D) * point);
void (* Plane_fromPoints)(C(Plane) * __this, C(Vector3D) * v1, C(Vector3D) * v2, C(Vector3D) * v3);
void (* Plane_fromPointsf)(C(Plane) * __this, C(Vector3Df) * v1, C(Vector3Df) * v2, C(Vector3Df) * v3);
void (* Plane_intersectLine)(C(Plane) * __this, C(Line) * line, C(Vector3D) * result);
void (* Plane_intersectLinef)(C(Plane) * __this, C(Line) * line, C(Vector3Df) * result);
void (* Plane_multMatrix)(C(Plane) * __this, C(Plane) * source, C(Matrix) * inverseTranspose);

void (* Quaternion_divide)(C(Quaternion) * __this, C(Quaternion) * q1, C(Quaternion) * q2);
void (* Quaternion_identity)(C(Quaternion) * __this);
void (* Quaternion_inverse)(C(Quaternion) * __this, C(Quaternion) * source);
void (* Quaternion_multiply)(C(Quaternion) * __this, C(Quaternion) * q1, C(Quaternion) * q2);
void (* Quaternion_normalize)(C(Quaternion) * __this, C(Quaternion) * source);
void (* Quaternion_pitch)(C(Quaternion) * __this, C(Angle) angle);
void (* Quaternion_roll)(C(Quaternion) * __this, C(Angle) angle);
void (* Quaternion_rotatePitch)(C(Quaternion) * __this, C(Angle) pitch);
void (* Quaternion_rotateRoll)(C(Quaternion) * __this, C(Angle) roll);
void (* Quaternion_rotateYaw)(C(Quaternion) * __this, C(Angle) yaw);
void (* Quaternion_rotateYawPitch)(C(Quaternion) * __this, C(Angle) yaw, C(Angle) pitch);
void (* Quaternion_rotationAxis)(C(Quaternion) * __this, C(Vector3D) * axis, C(Angle) angle);
void (* Quaternion_rotationDirection)(C(Quaternion) * __this, C(Vector3D) * direction);
void (* Quaternion_rotationMatrix)(C(Quaternion) * __this, C(Matrix) * m);
void (* Quaternion_rotationYawPitchRoll)(C(Quaternion) * __this, C(Euler) * euler);
void (* Quaternion_slerp)(C(Quaternion) * __this, C(Quaternion) * from, C(Quaternion) * to, float t);
void (* Quaternion_toDirection)(C(Quaternion) * __this, C(Vector3D) * direction);
void (* Quaternion_yaw)(C(Quaternion) * __this, C(Angle) angle);
void (* Quaternion_yawPitch)(C(Quaternion) * __this, C(Angle) yaw, C(Angle) pitch);

void (* Vector3D_add)(C(Vector3D) * __this, C(Vector3D) * vector1, C(Vector3D) * vector2);
void (* Vector3D_crossProduct)(C(Vector3D) * __this, C(Vector3D) * vector1, C(Vector3D) * vector2);
void (* Vector3D_divideMatrix)(C(Vector3D) * __this, C(Vector3D) * source, C(Matrix) * matrix);
double (* Vector3D_dotProduct)(C(Vector3D) * __this, C(Vector3D) * vector2);
double (* Vector3D_dotProductf)(C(Vector3D) * __this, C(Vector3Df) * vector2);
void (* Vector3D_multMatrix)(C(Vector3D) * __this, C(Vector3D) * source, C(Matrix) * matrix);
void (* Vector3D_multMatrixf)(C(Vector3D) * __this, C(Vector3Df) * source, C(Matrix) * matrix);
void (* Vector3D_normalize)(C(Vector3D) * __this, C(Vector3D) * source);
void (* Vector3D_scale)(C(Vector3D) * __this, C(Vector3D) * vector1, double s);
void (* Vector3D_subtract)(C(Vector3D) * __this, C(Vector3D) * vector1, C(Vector3D) * vector2);

void (* Vector3Df_add)(C(Vector3Df) * __this, C(Vector3Df) * vector1, C(Vector3Df) * vector2);
void (* Vector3Df_crossProduct)(C(Vector3Df) * __this, C(Vector3Df) * vector1, C(Vector3Df) * vector2);
void (* Vector3Df_divideMatrix)(C(Vector3Df) * __this, C(Vector3Df) * source, C(Matrix) * matrix);
double (* Vector3Df_dotProduct)(C(Vector3Df) * __this, C(Vector3Df) * vector2);
void (* Vector3Df_multMatrix)(C(Vector3Df) * __this, C(Vector3Df) * source, C(Matrix) * matrix);
void (* Vector3Df_normalize)(C(Vector3Df) * __this, C(Vector3Df) * source);
void (* Vector3Df_scale)(C(Vector3Df) * __this, C(Vector3Df) * vector1, float s);
void (* Vector3Df_subtract)(C(Vector3Df) * __this, C(Vector3Df) * vector1, C(Vector3Df) * vector2);

C(bool) (* Cube_create)(C(Cube) * __this, C(DisplaySystem) displaySystem);

C(bool) (* SkyBox_create)(C(SkyBox) * __this, C(DisplaySystem) displaySystem);
void (* SkyBox_render)(C(SkyBox) * __this, C(Camera) camera, C(Display) display);

C(bool) (* Sphere_create)(C(Sphere) * __this, C(DisplaySystem) displaySystem);

C(bool) (* ClipBoard_allocate)(C(ClipBoard) * __this, uint size);
void (* ClipBoard_clear)(C(ClipBoard) * __this);
C(bool) (* ClipBoard_load)(C(ClipBoard) * __this);
C(bool) (* ClipBoard_save)(C(ClipBoard) * __this);
void (* ClipBoard_unload)(C(ClipBoard) * __this);

C(bool) (* Cursor_load)(C(Cursor) __this, const char * name, int hotSpotX, int hotSpotY, byte * paletteShades);

void (* Extent_addBox)(C(Extent) * __this, C(Box) * box);
void (* Extent_copy)(C(Extent) * __this, C(Extent) * source);
void (* Extent_empty)(C(Extent) * __this);
void (* Extent_excludeBox)(C(Extent) * __this, C(Box) * box, C(Extent) * temp);
void (* Extent_exclusion)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp);
void (* Extent_intersectBox)(C(Extent) * __this, C(Box) * box);
void (* Extent_intersection)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp, C(Extent) * temp2, C(Extent) * temp3);
void (* Extent_offset)(C(Extent) * __this, int x, int y);
void (* Extent_union)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp);
void (* Extent_unionBox)(C(Extent) * __this, C(Box) * box, C(Extent) * temp);

C(Cursor) (* GuiApplication_getCursor)(C(GuiApplication) __this, C(SystemCursor) cursor);
C(bool) (* GuiApplication_getKeyState)(C(GuiApplication) __this, C(Key) key);
C(bool) (* GuiApplication_getMouseState)(C(GuiApplication) __this, C(MouseButtons) * buttons, int * x, int * y);
void (* GuiApplication_lock)(C(GuiApplication) __this);
void (* GuiApplication_lockEx)(C(GuiApplication) __this, int count);
void (* GuiApplication_pauseNetworkEvents)(C(GuiApplication) __this);
C(bool) (* GuiApplication_processFileNotifications)(C(GuiApplication) __this);
C(bool) (* GuiApplication_processInput)(C(GuiApplication) __this, C(bool) useProcessAll);
C(bool) (* GuiApplication_processNetworkEvents)(C(GuiApplication) __this);
void (* GuiApplication_resumeNetworkEvents)(C(GuiApplication) __this);
C(bool) (* GuiApplication_setDesktopPosition)(C(GuiApplication) __this, int x, int y, int w, int h, C(bool) moveChildren);
void (* GuiApplication_signalEvent)(C(GuiApplication) __this);
C(bool) (* GuiApplication_switchMode)(C(GuiApplication) __this, C(bool) fullScreen, const char * driverName, C(Resolution) resolution, C(PixelFormat) colorDepth, int refreshRate, const char * skinName, C(bool) fallBack);
void (* GuiApplication_unlock)(C(GuiApplication) __this);
int (* GuiApplication_unlockEx)(C(GuiApplication) __this);
void (* GuiApplication_updateDisplay)(C(GuiApplication) __this);
void (* GuiApplication_wait)(C(GuiApplication) __this);
void (* GuiApplication_waitEvent)(C(GuiApplication) __this);
void (* GuiApplication_waitNetworkEvent)(C(GuiApplication) __this);

C(Key) (* Interface_getExtendedKey)(C(Key) key);
char (* Interface_translateKey)(C(Key) key, C(bool) shift);
void (* Interface_writeKeyedText)(C(Surface) surface, int x, int y, const char * text, C(Key) hotKey);
void (* Interface_writeKeyedTextDisabled)(C(Surface) surface, int x, int y, const char * text, C(Key) hotKey, C(bool) disabled);


void (* Timer_start)(C(Timer) __this);
void (* Timer_stop)(C(Timer) __this);

C(bool) (* Window_acquireInput)(C(Window) __this, C(bool) acquired);
void (* Window_activate)(C(Window) __this);
void (* Window_addResource)(C(Window) __this, C(Resource) resource);
C(bool) (* Window_buttonCloseDialog)(C(Window) __this, C(Button) button, int x, int y, C(Modifiers) mods);
C(bool) (* Window_capture)(C(Window) __this);
C(bool) (* Window_closeConfirmation)(C(Window) __this, C(bool) parentClosing);
C(bool) (* Window_create)(C(Window) __this);
C(bool) (* Window_cycleChildren)(C(Window) __this, C(bool) backward, C(bool) clientOnly, C(bool) tabCycleOnly, C(bool) cycleParents);
void (* Window_deactivate)(C(Window) __this);
C(bool) (* Window_destroy)(C(Window) __this, int64 code);
C(DialogResult) (* Window_doModal)(C(Window) __this);
C(DialogResult) (* Window_doModalEnd)(C(Window) __this);
C(bool) (* Window_doModalLoop)(C(Window) __this);
void (* Window_doModalStart)(C(Window) __this);
void (* Window_externalPosition)(C(Window) __this, int x, int y, int w, int h);
void (* Window_flash)(C(Window) __this);
void (* Window_freeMouseRange)();
void (* Window_getCaretPosition)(C(Window) __this, C(Point) * caretPos);
int (* Window_getCaretSize)(C(Window) __this);
C(BitmapResource) (* Window_getIcon)(C(Window) __this, C(SkinBitmap) iconID);
void (* Window_getMousePosition)(C(Window) __this, int * x, int * y);
void (* Window_getNCMousePosition)(C(Window) __this, int * x, int * y);
C(bool) (* Window_grab)(C(Window) __this, C(Bitmap) bitmap, C(Box) * box, C(bool) decorations);
void (* Window_makeActive)(C(Window) __this);
C(bool) (* Window_menuFileClose)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuFileExit)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuFileSave)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuFileSaveAll)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuFileSaveAs)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowArrangeIcons)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowCascade)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowClose)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowCloseAll)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowMaximize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowMinimize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowMove)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowNext)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowPrevious)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowRestore)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowSelectWindow)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowSize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowStayOnTop)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowTileHorz)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowTileVert)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(bool) (* Window_menuWindowWindows)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);
C(DialogResult) (* Window_modal)(C(Window) __this);
C(bool) (* Window_mouseMessage)(C(Window) __this, uint method, int x, int y, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);
void (* Window_move)(C(Window) __this, int x, int y, int w, int h);
C(bool) (* Window_multiTouchMessage)(C(Window) __this, C(TouchPointerEvent) event, C(Array) infos, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);
void (* Window_releaseCapture)(C(Window) __this);
void (* Window_removeResource)(C(Window) __this, C(Resource) resource);
void (* Window_restoreCaret)();
void (* Window_scroll)(C(Window) __this, int x, int y);
void (* Window_setCaption)(C(Window) __this, const char * format, ...);
void (* Window_setCaret)(C(Window) __this, int x, int y, int size);
void (* Window_setMouseRange)(C(Window) __this, C(Box) * range);
void (* Window_setMouseRangeToClient)(C(Window) __this);
void (* Window_setMouseRangeToWindow)(C(Window) __this);
void (* Window_setScrollArea)(C(Window) __this, int width, int height, C(bool) snapToStep);
void (* Window_setScrollLineStep)(C(Window) __this, int stepX, int stepY);
void (* Window_setScrollPosition)(C(Window) __this, int x, int y);
void (* Window_setState)(C(Window) __this, C(WindowState) newState, C(bool) activate, C(Modifiers) mods);
void (* Window_setText)(C(Window) __this, const char * format, ...);
void (* Window_showSysMenu)(C(Window) __this, int x, int y);
void (* Window_softActivate)(C(Window) __this);
void (* Window_update)(C(Window) __this, C(Box) * region);
void (* Window_updateDisplay)(C(Window) __this);
void (* Window_writeCaption)(C(Window) __this, C(Surface) surface, int x, int y);


void (* BufferLocation_adjustAdd)(C(BufferLocation) * __this, C(BufferLocation) * start, C(BufferLocation) * end);
void (* BufferLocation_adjustDelete)(C(BufferLocation) * __this, C(BufferLocation) * start, C(BufferLocation) * end);

void (* Button_removeRadio)(C(Button) __this);
void (* Button_setColor)(C(Button) __this, C(ButtonState) state, C(Color) value);
void (* Button_setTextColor)(C(Button) __this, C(ButtonState) state, C(Color) value);


void (* DataBox_modified)(C(DataBox) __this);
void (* DataBox_refresh)(C(DataBox) __this);
C(bool) (* DataBox_saveData)(C(DataBox) __this);

void (* DataField_autoSize)(C(DataField) __this);
void (* DataField_move)(C(DataField) __this, C(DataField) after);

C(DataRow) (* DataRow_addRow)(C(DataRow) __this);
C(DataRow) (* DataRow_addRowAfter)(C(DataRow) __this, C(DataRow) after);
C(DataRow) (* DataRow_addString)(C(DataRow) __this, const char * string);
C(DataRow) (* DataRow_addStringf)(C(DataRow) __this, const char * format, ...);
void (* DataRow_edit)(C(DataRow) __this, C(DataField) field);
C(DataRow) (* DataRow_findRow)(C(DataRow) __this, int64 tag);
C(DataRow) (* DataRow_findSubRow)(C(DataRow) __this, int64 tag);
any_object (* DataRow_getData)(C(DataRow) __this, C(DataField) field);
C(DataRow) (* DataRow_getNextRow)(C(DataRow) __this);
C(DataRow) (* DataRow_getPrevRow)(C(DataRow) __this);
void (* DataRow_move)(C(DataRow) __this, C(DataRow) after);
void * (* DataRow_setData)(C(DataRow) __this, C(DataField) field, any_object newData);
void (* DataRow_sortSubRows)(C(DataRow) __this, C(bool) scrollToCurrent);
void (* DataRow_unsetData)(C(DataRow) __this, C(DataField) field);


void (* DropBox_addField)(C(DropBox) __this, C(DataField) field);
C(DataRow) (* DropBox_addRow)(C(DropBox) __this);
C(DataRow) (* DropBox_addRowAfter)(C(DropBox) __this, C(DataRow) after);
C(DataRow) (* DropBox_addString)(C(DropBox) __this, const char * string);
C(DataRow) (* DropBox_addStringf)(C(DropBox) __this, const char * format, ...);
void (* DropBox_clear)(C(DropBox) __this);
void (* DropBox_deleteRow)(C(DropBox) __this, C(DataRow) row);
C(DataRow) (* DropBox_findRow)(C(DropBox) __this, int64 tag);
C(DataRow) (* DropBox_findSubRow)(C(DropBox) __this, int64 tag);
any_object (* DropBox_getData)(C(DropBox) __this, C(DataField) field);
int (* DropBox_getRowCount)(C(DropBox) __this);
int64 (* DropBox_getTag)(C(DropBox) __this);
C(bool) (* DropBox_save)(C(DropBox) __this);
void (* DropBox_selectRow)(C(DropBox) __this, C(DataRow) row);
void * (* DropBox_setData)(C(DropBox) __this, C(DataField) field, any_object data);
void (* DropBox_sort)(C(DropBox) __this, C(DataField) field, int order);

C(bool) (* EditBox_addCh)(C(EditBox) __this, unichar ch);
C(bool) (* EditBox_addS)(C(EditBox) __this, const char * string);
void (* EditBox_backSpace)(C(EditBox) __this);
void (* EditBox_centerOnCursor)(C(EditBox) __this);
void (* EditBox_clear)(C(EditBox) __this);
void (* EditBox_clearLine)(C(EditBox) __this);
void (* EditBox_copy)(C(EditBox) __this);
void (* EditBox_cut)(C(EditBox) __this);
void (* EditBox_delete)(C(EditBox) __this, C(EditLine) * line1, int y1, int x1, C(EditLine) * line2, int y2, int x2);
void (* EditBox_deleteSelection)(C(EditBox) __this);
void (* EditBox_deselect)(C(EditBox) __this);
void (* EditBox_end)(C(EditBox) __this);
C(EditBoxFindResult) (* EditBox_find)(C(EditBox) __this, const char * text, C(bool) matchWord, C(bool) matchCase, C(bool) isSearchDown);
C(EditBoxFindResult) (* EditBox_findInSelection)(C(EditBox) __this, const char * text, C(bool) matchWord, C(bool) matchCase, C(EditLine) * l2, int y2, int x2);
void (* EditBox_getSel)(C(EditBox) __this, char * text, C(bool) addCr);
void (* EditBox_getSelPos)(C(EditBox) __this, C(EditLine) * l1, int * y1, int * x1, C(EditLine) * l2, int * y2, int * x2, C(bool) reorder);
int (* EditBox_getText)(C(EditBox) __this, char * text, C(EditLine) * _l1, int _y1, int _x1, C(EditLine) * _l2, int _y2, int _x2, C(bool) addCr, C(bool) addSpaces);
C(bool) (* EditBox_goToLineNum)(C(EditBox) __this, int lineNum);
C(bool) (* EditBox_goToPosition)(C(EditBox) __this, C(EditLine) * line, int y, int x);
void (* EditBox_home)(C(EditBox) __this);
void (* EditBox_lineDown)(C(EditBox) __this);
void (* EditBox_lineUp)(C(EditBox) __this);
void (* EditBox_load)(C(EditBox) __this, C(File) f);
void (* EditBox_modified)(C(EditBox) __this);
void (* EditBox_pageDown)(C(EditBox) __this);
void (* EditBox_pageUp)(C(EditBox) __this);
void (* EditBox_paste)(C(EditBox) __this);
void (* EditBox_printf)(C(EditBox) __this, const char * format, ...);
void (* EditBox_putCh)(C(EditBox) __this, unichar ch);
void (* EditBox_putS)(C(EditBox) __this, const char * string);
void (* EditBox_record)(C(EditBox) __this, C(UndoAction) * action);
void (* EditBox_redo)(C(EditBox) __this);
void (* EditBox_save)(C(EditBox) __this, C(File) f, C(bool) cr);
uint (* EditBox_selSize)(C(EditBox) __this);
void (* EditBox_select)(C(EditBox) __this, C(EditLine) * line1, int y1, int x1, C(EditLine) * line2, int y2, int x2);
void (* EditBox_selectAll)(C(EditBox) __this);
void (* EditBox_setContents)(C(EditBox) __this, const char * format, ...);
void (* EditBox_setCursorToView)(C(EditBox) __this);
void (* EditBox_setModified)(C(EditBox) __this, C(bool) flag);
void (* EditBox_setSelPos)(C(EditBox) __this, C(EditLine) * l1, int y1, int x1, C(EditLine) * l2, int y2, int x2);
void (* EditBox_setViewToCursor)(C(EditBox) __this, C(bool) setCaret);
void (* EditBox_undo)(C(EditBox) __this);

void (* EditBoxStream_deleteBytes)(C(EditBoxStream) __this, uint count);


void (* ListBox_addField)(C(ListBox) __this, C(DataField) addedField);
C(DataRow) (* ListBox_addRow)(C(ListBox) __this);
C(DataRow) (* ListBox_addRowAfter)(C(ListBox) __this, C(DataRow) after);
C(DataRow) (* ListBox_addRowNone)(C(ListBox) __this);
C(DataRow) (* ListBox_addString)(C(ListBox) __this, const char * string);
C(DataRow) (* ListBox_addStringf)(C(ListBox) __this, const char * format, ...);
void (* ListBox_clear)(C(ListBox) __this);
void (* ListBox_clearFields)(C(ListBox) __this);
void (* ListBox_deleteRow)(C(ListBox) __this, C(DataRow) row);
C(DataRow) (* ListBox_findRow)(C(ListBox) __this, int64 tag);
C(DataRow) (* ListBox_findString)(C(ListBox) __this, const char * searchedString);
C(DataRow) (* ListBox_findSubRow)(C(ListBox) __this, int64 tag);
C(DataRow) (* ListBox_findSubString)(C(ListBox) __this, const char * subString);
C(DataRow) (* ListBox_findSubStringAfter)(C(ListBox) __this, C(DataRow) after, const char * subString);
C(DataRow) (* ListBox_findSubStringi)(C(ListBox) __this, const char * subString);
any_object (* ListBox_getData)(C(ListBox) __this, C(DataField) field);
void (* ListBox_getMultiSelection)(C(ListBox) __this, C(OldList) * list);
int64 (* ListBox_getTag)(C(ListBox) __this);
void (* ListBox_removeField)(C(ListBox) __this, C(DataField) field);
void (* ListBox_selectRow)(C(ListBox) __this, C(DataRow) row);
void * (* ListBox_setData)(C(ListBox) __this, C(DataField) field, any_object data);
void (* ListBox_sort)(C(ListBox) __this, C(DataField) field, int order);
void (* ListBox_stopEditing)(C(ListBox) __this, C(bool) save);

void (* Menu_addDynamic)(C(Menu) __this, C(MenuItem) addedItem, C(Window) master, C(bool) persistent);
void (* Menu_addItem)(C(Menu) __this, C(MenuItem) item);
void (* Menu_addSubMenu)(C(Menu) __this, C(Menu) subMenu);
void (* Menu_clean)(C(Menu) __this, C(Window) window);
void (* Menu_clear)(C(Menu) __this);
C(MenuItem) (* Menu_findItem)(C(Menu) __this, C(bool) (* notifySelect)(C(MenuItem) selection, C(Modifiers) mods), uint64 id);
C(Menu) (* Menu_findMenu)(C(Menu) __this, const char * name);
void (* Menu_merge)(C(Menu) __this, C(Menu) menuBeingMerged, C(bool) menuBar, C(Window) window);
void (* Menu_removeItem)(C(Menu) __this, C(MenuItem) item);



void (* PathBox_deselect)(C(PathBox) __this);
void (* PathBox_end)(C(PathBox) __this);
void (* PathBox_home)(C(PathBox) __this);
void (* PathBox_selectAll)(C(PathBox) __this);

C(bool) (* ScrollBar_action)(C(ScrollBar) __this, C(ScrollBarAction) action, int newPosition, C(Key) key);

void (* SelectorBar_addButton)(C(SelectorBar) __this, C(SelectorButton) button);
void (* SelectorBar_clear)(C(SelectorBar) __this);
C(SelectorButton) (* SelectorBar_findButtonByID)(C(SelectorBar) __this, int64 id);
void (* SelectorBar_removeButton)(C(SelectorBar) __this, C(SelectorButton) button);
void (* SelectorBar_select)(C(SelectorBar) __this, C(SelectorButton) button);

void (* Stacker_destroyChildren)(C(Stacker) __this);
C(Window) (* Stacker_getNextStackedItem)(C(Stacker) __this, C(Window) current, C(bool) previous, C(Class) * filter);
void (* Stacker_makeControlVisible)(C(Stacker) __this, C(Window) control);

void (* StatusBar_addField)(C(StatusBar) __this, C(StatusField) field);
void (* StatusBar_clear)(C(StatusBar) __this);
void (* StatusBar_removeField)(C(StatusBar) __this, C(StatusField) field);

void (* StatusField_setTextf)(C(StatusField) __this, const char * format, ...);

void (* Tab_selectTab)(C(Tab) __this);

void (* TabControl_addTab)(C(TabControl) __this, C(Tab) tab);
void (* TabControl_removeTab)(C(TabControl) __this, C(Tab) tab);


void (* UndoBuffer_clear)(C(UndoBuffer) __this);
void (* UndoBuffer_record)(C(UndoBuffer) __this, C(UndoAction) * action);
void (* UndoBuffer_redo)(C(UndoBuffer) __this);
void (* UndoBuffer_undo)(C(UndoBuffer) __this);

C(bool) (* FileFilter_validateFileName)(C(FileFilter) * __this, const char * name);

C(FileNameType) (* FileNameType_selectByExtension)(const char * extension);

C(bool) (* DCOMClientObject_callMethod)(C(DCOMClientObject) __this, uint methodID);
C(bool) (* DCOMClientObject_connect)(C(DCOMClientObject) __this, const char * server, int port);

void (* DCOMSendControl_resume)(C(DCOMSendControl) __this);
void (* DCOMSendControl_stop)(C(DCOMSendControl) __this);

C(bool) (* DCOMServerObject_callVirtualMethod)(C(DCOMServerObject) __this, uint methodID, C(bool) hasReturnValue);

C(bool) (* DCOMService_start)(C(DCOMService) __this);
C(bool) (* DCOMService_stop)(C(DCOMService) __this);

C(NetworkClientFile) (* FileServerConnection_open)(C(FileServerConnection) __this, const char * fileName, C(FileOpenMode) mode);

C(bool) (* HTTPFile_openURL)(C(HTTPFile) __this, const char * name, const char * referer, char * relocation);

C(bool) (* SSLSocket_establishConnection)(C(SSLSocket) __this);

C(bool) (* Service_process)(C(Service) __this);
C(bool) (* Service_processTimeOut)(C(Service) __this, C(Time) timeOut);
C(bool) (* Service_start)(C(Service) __this);
C(bool) (* Service_stop)(C(Service) __this);

C(bool) (* Socket_connect)(C(Socket) __this, const char * address, int port);
C(bool) (* Socket_datagramConnect)(C(Socket) __this, const char * sendAddress, int port);
C(bool) (* Socket_datagramHost)(C(Socket) __this, int port);
void (* Socket_disconnect)(C(Socket) __this, C(DisconnectCode) code);
C(bool) (* Socket_process)(C(Socket) __this);
C(bool) (* Socket_processTimeOut)(C(Socket) __this, C(Time) timeOut);
C(bool) (* Socket_send)(C(Socket) __this, const void * buffer, int size);
C(bool) (* Socket_sendPacket)(C(Socket) __this, C(Packet) * packet);
C(bool) (* Socket_sendString)(C(Socket) __this, const char * string);
C(bool) (* Socket_sendf)(C(Socket) __this, const char * format, ...);
void (* Socket_safeDecRef)(C(Socket) __this);
void (* Socket_safeIncRef)(C(Socket) __this);


C(bool) (* ArchiveDir_add)(C(ArchiveDir) __this, const char * name, const char * path, C(ArchiveAddMode) addMode, int compression, int * ratio, uint * newPosition);

void (* Box_clip)(C(Box) * __this, C(Box) * against);
void (* Box_clipOffset)(C(Box) * __this, C(Box) * against, int x, int y);
C(bool) (* Box_isPointInside)(C(Box) * __this, C(Point) * point);
C(bool) (* Box_overlap)(C(Box) * __this, C(Box) * box);

void (* Condition_signal)(C(Condition) * __this);
void (* Condition_wait)(C(Condition) * __this, C(Mutex) * mutex);

const char * (* Date_onGetStringEn)(C(Date) * __this, char * stringOutput, void * fieldData, C(bool) * needClass);

C(bool) (* DateTime_fixDayOfYear)(C(DateTime) * __this);
C(bool) (* DateTime_getLocalTime)(C(DateTime) * __this);

int (* DualPipe_getExitCode)(C(DualPipe) __this);
C(bool) (* DualPipe_getLinePeek)(C(DualPipe) __this, char * s, int max, int * charsRead);
int (* DualPipe_getProcessID)(C(DualPipe) __this);
C(bool) (* DualPipe_peek)(C(DualPipe) __this);
void (* DualPipe_terminate)(C(DualPipe) __this);
void (* DualPipe_wait)(C(DualPipe) __this);

C(bool) (* File_copyTo)(C(File) __this, const char * outputFileName);
C(bool) (* File_flush)(C(File) __this);
double (* File_getDouble)(C(File) __this);
float (* File_getFloat)(C(File) __this);
uint (* File_getHexValue)(C(File) __this);
C(bool) (* File_getLine)(C(File) __this, char * s, int max);
int (* File_getLineEx)(C(File) __this, char * s, int max, C(bool) * hasNewLineChar);
C(bool) (* File_getString)(C(File) __this, char * string, int max);
int (* File_getValue)(C(File) __this);
void (* File_print)(C(File) __this, C(Class) * class_object, void * object, ...);
void (* File_printLn)(C(File) __this, C(Class) * class_object, void * object, ...);
int (* File_printf)(C(File) __this, const char * format, ...);

C(bool) (* FileListing_find)(C(FileListing) * __this);
void (* FileListing_stop)(C(FileListing) * __this);

void (* FileMonitor_startMonitoring)(C(FileMonitor) __this);
void (* FileMonitor_stopMonitoring)(C(FileMonitor) __this);

C(bool) (* GlobalAppSettings_getGlobalValue)(C(GlobalAppSettings) __this, const char * section, const char * name, C(GlobalSettingType) type, void * value);
C(bool) (* GlobalAppSettings_putGlobalValue)(C(GlobalAppSettings) __this, const char * section, const char * name, C(GlobalSettingType) type, const void * value);

void (* GlobalSettings_close)(C(GlobalSettings) __this);
void (* GlobalSettings_closeAndMonitor)(C(GlobalSettings) __this);
C(bool) (* GlobalSettings_openAndLock)(C(GlobalSettings) __this, C(FileSize) * fileSize);


C(JSONResult) (* JSONParser_getObject)(C(JSONParser) __this, C(Class) * objectType, void ** object);

int (* Month_getNumDays)(C(Month) __this, int year);

void (* Semaphore_release)(C(Semaphore) * __this);
C(bool) (* Semaphore_tryWait)(C(Semaphore) * __this);
void (* Semaphore_wait)(C(Semaphore) * __this);

void (* Thread_create)(C(Thread) __this);
void (* Thread_kill)(C(Thread) __this);
void (* Thread_setPriority)(C(Thread) __this, C(ThreadPriority) priority);
void (* Thread_wait)(C(Thread) __this);



C(Property) * PROPERTY(BitmapResource, fileName);
void (* BitmapResource_set_fileName)(C(BitmapResource) b, const char * value);
const char * (* BitmapResource_get_fileName)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, grayed);
void (* BitmapResource_set_grayed)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_grayed)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, monochrome);
void (* BitmapResource_set_monochrome)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_monochrome)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, transparent);
void (* BitmapResource_set_transparent)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_transparent)(C(BitmapResource) b);
bool (* BitmapResource_isSet_transparent)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, alphaBlend);
void (* BitmapResource_set_alphaBlend)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_alphaBlend)(C(BitmapResource) b);
bool (* BitmapResource_isSet_alphaBlend)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, mipMaps);
void (* BitmapResource_set_mipMaps)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_mipMaps)(C(BitmapResource) b);
bool (* BitmapResource_isSet_mipMaps)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, keepData);
void (* BitmapResource_set_keepData)(C(BitmapResource) b, C(bool) value);
C(bool) (* BitmapResource_get_keepData)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, bitmap);
void (* BitmapResource_set_bitmap)(C(BitmapResource) b, C(Bitmap) value);
C(Bitmap) (* BitmapResource_get_bitmap)(C(BitmapResource) b);

C(Property) * PROPERTY(BitmapResource, window);
void (* BitmapResource_set_window)(C(BitmapResource) b, C(Window) value);

C(Property) * PROPERTY(Color, ColorRGB);
C(Color) (* Color_from_ColorRGB)(C(ColorRGB) colorRGB);
void (* Color_to_ColorRGB)(C(Color) color, C(ColorRGB) * value);

C(Property) * PROPERTY(Color444, Color);
C(Color444) (* Color444_from_Color)(C(Color) color);
C(Color) (* Color444_to_Color)(C(Color444) color444);

C(Property) * PROPERTY(Color555, Color);
C(Color555) (* Color555_from_Color)(C(Color) color);
C(Color) (* Color555_to_Color)(C(Color555) color555);

C(Property) * PROPERTY(Color565, Color);
C(Color565) (* Color565_from_Color)(C(Color) color);
C(Color) (* Color565_to_Color)(C(Color565) color565);

C(Property) * PROPERTY(ColorAlpha, Color);
C(ColorAlpha) (* ColorAlpha_from_Color)(C(Color) color);
C(Color) (* ColorAlpha_to_Color)(C(ColorAlpha) colorAlpha);

C(Property) * PROPERTY(ColorCMYK, ColorRGB);
void (* ColorCMYK_from_ColorRGB)(C(ColorCMYK) c, const C(ColorRGB) * value);
void (* ColorCMYK_to_ColorRGB)(C(ColorCMYK) c, C(ColorRGB) * value);

C(Property) * PROPERTY(ColorHSV, ColorRGB);
void (* ColorHSV_from_ColorRGB)(C(ColorHSV) c, const C(ColorRGB) * value);
void (* ColorHSV_to_ColorRGB)(C(ColorHSV) c, C(ColorRGB) * value);

C(Property) * PROPERTY(ColorLab, ColorRGB);
void (* ColorLab_from_ColorRGB)(C(ColorLab) c, const C(ColorRGB) * value);
void (* ColorLab_to_ColorRGB)(C(ColorLab) c, C(ColorRGB) * value);

C(Property) * PROPERTY(ColorRGBA, ColorAlpha);
C(ColorRGBA) (* ColorRGBA_from_ColorAlpha)(C(ColorAlpha) colorAlpha);
C(ColorAlpha) (* ColorRGBA_to_ColorAlpha)(C(ColorRGBA) colorRGBA);

C(Property) * PROPERTY(ColorRGBA, Color);
C(ColorRGBA) (* ColorRGBA_from_Color)(C(Color) color);
C(Color) (* ColorRGBA_to_Color)(C(ColorRGBA) colorRGBA);

C(Property) * PROPERTY(ColorRGBAf, ColorAlpha);
void (* ColorRGBAf_from_ColorAlpha)(C(ColorRGBAf) c, C(ColorAlpha) value);
C(ColorAlpha) (* ColorRGBAf_to_ColorAlpha)(C(ColorRGBAf) c);

C(Property) * PROPERTY(ColorRGBAf, Color);
void (* ColorRGBAf_from_Color)(C(ColorRGBAf) c, C(Color) value);
C(Color) (* ColorRGBAf_to_Color)(C(ColorRGBAf) c);

C(Property) * PROPERTY(Display, fillMode);
void (* Display_set_fillMode)(C(Display) d, C(FillModeValue) value);

C(Property) * PROPERTY(Display, depthTest);
void (* Display_set_depthTest)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, depthWrite);
void (* Display_set_depthWrite)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, fogDensity);
void (* Display_set_fogDensity)(C(Display) d, float value);

C(Property) * PROPERTY(Display, fogColor);
void (* Display_set_fogColor)(C(Display) d, C(Color) value);

C(Property) * PROPERTY(Display, blend);
void (* Display_set_blend)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, ambient);
void (* Display_set_ambient)(C(Display) d, C(Color) value);

C(Property) * PROPERTY(Display, alphaWrite);
void (* Display_set_alphaWrite)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, antiAlias);
void (* Display_set_antiAlias)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, vSync);
void (* Display_set_vSync)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, pickingPlanes);
void (* Display_set_pickingPlanes)(C(Display) d, C(bool) value);

C(Property) * PROPERTY(Display, flags);
C(DisplayFlags) (* Display_get_flags)(C(Display) d);

C(Property) * PROPERTY(Display, pixelFormat);
C(PixelFormat) (* Display_get_pixelFormat)(C(Display) d);

C(Property) * PROPERTY(Display, alphaBlend);
void (* Display_set_alphaBlend)(C(Display) d, C(bool) value);
C(bool) (* Display_get_alphaBlend)(C(Display) d);

C(Property) * PROPERTY(Display, useSharedMemory);
void (* Display_set_useSharedMemory)(C(Display) d, C(bool) value);
C(bool) (* Display_get_useSharedMemory)(C(Display) d);

C(Property) * PROPERTY(Display, systemWindow);
void * (* Display_get_systemWindow)(C(Display) d);

C(Property) * PROPERTY(Display, displaySystem);
C(DisplaySystem) (* Display_get_displaySystem)(C(Display) d);

C(Property) * PROPERTY(Display, glCapabilities);
void (* Display_set_glCapabilities)(C(Display) d, C(GLCapabilities) value);
C(GLCapabilities) (* Display_get_glCapabilities)(C(Display) d);

C(Property) * PROPERTY(DrawManager, renderingFlipped);
void (* DrawManager_set_renderingFlipped)(C(DrawManager) d, C(bool) value);

C(Property) * PROPERTY(Font, ascent);
int (* Font_get_ascent)(C(Font) * f);

C(Property) * PROPERTY(Font, descent);
int (* Font_get_descent)(C(Font) * f);

C(Property) * PROPERTY(FontManager, renderer);
void (* FontManager_set_renderer)(C(FontManager) f, C(FontManagerRenderer) value);
C(FontManagerRenderer) (* FontManager_get_renderer)(C(FontManager) f);

C(Property) * PROPERTY(FontRenderer, drawManager);
void (* FontRenderer_set_drawManager)(C(FontRenderer) f, C(DrawManager) value);

C(Property) * PROPERTY(FontResource, faceName);
void (* FontResource_set_faceName)(C(FontResource) f, const char * value);
const char * (* FontResource_get_faceName)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, size);
void (* FontResource_set_size)(C(FontResource) f, float value);
float (* FontResource_get_size)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, bold);
void (* FontResource_set_bold)(C(FontResource) f, C(bool) value);
C(bool) (* FontResource_get_bold)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, italic);
void (* FontResource_set_italic)(C(FontResource) f, C(bool) value);
C(bool) (* FontResource_get_italic)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, underline);
void (* FontResource_set_underline)(C(FontResource) f, C(bool) value);
C(bool) (* FontResource_get_underline)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, font);
C(Font) * (* FontResource_get_font)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, window);
void (* FontResource_set_window)(C(FontResource) f, C(Window) value);

C(Property) * PROPERTY(FontResource, outlineSize);
void (* FontResource_set_outlineSize)(C(FontResource) f, float value);
float (* FontResource_get_outlineSize)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, outlineFade);
void (* FontResource_set_outlineFade)(C(FontResource) f, float value);
float (* FontResource_get_outlineFade)(C(FontResource) f);

C(Property) * PROPERTY(FontResource, fmFont);
C(FMFont) * (* FontResource_get_fmFont)(C(FontResource) f);

C(Property) * PROPERTY(Surface, alphaWrite);
void (* Surface_set_alphaWrite)(C(Surface) s, C(AlphaWriteMode) value);
C(AlphaWriteMode) (* Surface_get_alphaWrite)(C(Surface) s);

C(Property) * PROPERTY(Surface, blend);
void (* Surface_set_blend)(C(Surface) s, C(bool) value);
C(bool) (* Surface_get_blend)(C(Surface) s);

C(Property) * PROPERTY(Surface, bitmap);
C(Bitmap) (* Surface_get_bitmap)(C(Surface) s);

C(Property) * PROPERTY(Surface, outlineColor);
void (* Surface_set_outlineColor)(C(Surface) s, C(ColorAlpha) value);
C(ColorAlpha) (* Surface_get_outlineColor)(C(Surface) s);

C(Property) * PROPERTY(Surface, foreground);
void (* Surface_set_foreground)(C(Surface) s, C(ColorAlpha) value);
C(ColorAlpha) (* Surface_get_foreground)(C(Surface) s);

C(Property) * PROPERTY(Surface, background);
void (* Surface_set_background)(C(Surface) s, C(ColorAlpha) value);
C(ColorAlpha) (* Surface_get_background)(C(Surface) s);

C(Property) * PROPERTY(Surface, blitTint);
void (* Surface_set_blitTint)(C(Surface) s, C(ColorAlpha) value);
C(ColorAlpha) (* Surface_get_blitTint)(C(Surface) s);

C(Property) * PROPERTY(Surface, lineStipple);
void (* Surface_set_lineStipple)(C(Surface) s, uint value);

C(Property) * PROPERTY(Surface, size);
void (* Surface_get_size)(C(Surface) s, C(Size) * value);

C(Property) * PROPERTY(Surface, display);
C(Display) (* Surface_get_display)(C(Surface) s);

C(Property) * PROPERTY(Surface, font);
void (* Surface_set_font)(C(Surface) s, C(Font) * value);
C(Font) * (* Surface_get_font)(C(Surface) s);

C(Property) * PROPERTY(Surface, textOpacity);
void (* Surface_set_textOpacity)(C(Surface) s, C(bool) value);
C(bool) (* Surface_get_textOpacity)(C(Surface) s);

C(Property) * PROPERTY(Surface, drawingChar);
void (* Surface_set_drawingChar)(C(Surface) s, byte value);

C(Property) * PROPERTY(Surface, clipping);
void (* Surface_set_clipping)(C(Surface) s, const C(Box) * value);

C(Property) * PROPERTY(Shader, vertexShaderFile);
void (* Shader_set_vertexShaderFile)(C(Shader) s, constString value);

C(Property) * PROPERTY(Shader, fragmentShaderFile);
void (* Shader_set_fragmentShaderFile)(C(Shader) s, constString value);

C(Property) * PROPERTY(Shader, vertexShader);
void (* Shader_set_vertexShader)(C(Shader) s, constString value);

C(Property) * PROPERTY(Shader, fragmentShader);
void (* Shader_set_fragmentShader)(C(Shader) s, constString value);

C(Property) * PROPERTY(Camera, type);
void (* Camera_set_type)(C(Camera) c, C(CameraType) value);
C(CameraType) (* Camera_get_type)(C(Camera) c);

C(Property) * PROPERTY(Camera, position);
void (* Camera_set_position)(C(Camera) c, const C(Vector3D) * value);
void (* Camera_get_position)(C(Camera) c, C(Vector3D) * value);

C(Property) * PROPERTY(Camera, orientation);
void (* Camera_set_orientation)(C(Camera) c, const C(Quaternion) * value);
void (* Camera_get_orientation)(C(Camera) c, C(Quaternion) * value);

C(Property) * PROPERTY(Camera, eulerOrientation);
void (* Camera_set_eulerOrientation)(C(Camera) c, const C(Euler) * value);
void (* Camera_get_eulerOrientation)(C(Camera) c, C(Euler) * value);

C(Property) * PROPERTY(Camera, cPosition);
void (* Camera_get_cPosition)(C(Camera) c, C(Vector3D) * value);

C(Property) * PROPERTY(Camera, cOrientation);
void (* Camera_get_cOrientation)(C(Camera) c, C(Quaternion) * value);

C(Property) * PROPERTY(Camera, fov);
void (* Camera_set_fov)(C(Camera) c, C(Angle) value);
C(Angle) (* Camera_get_fov)(C(Camera) c);

C(Property) * PROPERTY(Camera, zMin);
void (* Camera_set_zMin)(C(Camera) c, float value);
float (* Camera_get_zMin)(C(Camera) c);

C(Property) * PROPERTY(Camera, zMax);
void (* Camera_set_zMax)(C(Camera) c, float value);
float (* Camera_get_zMax)(C(Camera) c);

C(Property) * PROPERTY(Camera, target);
void (* Camera_set_target)(C(Camera) c, C(Object) * value);
C(Object) * (* Camera_get_target)(C(Camera) c);

C(Property) * PROPERTY(Camera, fovDirection);
void (* Camera_set_fovDirection)(C(Camera) c, C(FovDirection) value);
C(FovDirection) (* Camera_get_fovDirection)(C(Camera) c);

C(Property) * PROPERTY(Camera, aspectRatio);
void (* Camera_set_aspectRatio)(C(Camera) c, float value);
float (* Camera_get_aspectRatio)(C(Camera) c);

C(Property) * PROPERTY(Camera, focal);
void (* Camera_get_focal)(C(Camera) c, C(Size) * value);

C(Property) * PROPERTY(Euler, Quaternion);
void (* Euler_from_Quaternion)(C(Euler) e, const C(Quaternion) * value);
void (* Euler_to_Quaternion)(C(Euler) e, C(Quaternion) * value);

C(Property) * PROPERTY(Matrix, Quaternion);
void (* Matrix_from_Quaternion)(C(Matrix) m, const C(Quaternion) * value);
void (* Matrix_to_Quaternion)(C(Matrix) m, C(Quaternion) * value);

C(Property) * PROPERTY(Mesh, texCoords);
void (* Mesh_set_texCoords)(C(Mesh) * m, C(Pointf) * value);
C(Pointf) * (* Mesh_get_texCoords)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, nVertices);
void (* Mesh_set_nVertices)(C(Mesh) * m, int value);
int (* Mesh_get_nVertices)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, vertices);
void (* Mesh_set_vertices)(C(Mesh) * m, C(Vector3Df) * value);
C(Vector3Df) * (* Mesh_get_vertices)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, normals);
void (* Mesh_set_normals)(C(Mesh) * m, C(Vector3Df) * value);
C(Vector3Df) * (* Mesh_get_normals)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, tangents);
void (* Mesh_set_tangents)(C(Mesh) * m, C(Vector3Df) * value);
C(Vector3Df) * (* Mesh_get_tangents)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, colors);
void (* Mesh_set_colors)(C(Mesh) * m, C(ColorRGBAf) * value);
C(ColorRGBAf) * (* Mesh_get_colors)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, lightVectors);
void (* Mesh_set_lightVectors)(C(Mesh) * m, C(ColorRGB) * value);
C(ColorRGB) * (* Mesh_get_lightVectors)(C(Mesh) * m);

C(Property) * PROPERTY(Mesh, groups);
void (* Mesh_get_groups)(C(Mesh) * m, C(OldList) * value);

C(Property) * PROPERTY(Mesh, flags);
void (* Mesh_set_flags)(C(Mesh) * m, C(MeshFeatures) value);
C(MeshFeatures) (* Mesh_get_flags)(C(Mesh) * m);

C(Property) * PROPERTY(Object, transform);
void (* Object_set_transform)(C(Object) * o, const C(Transform) * value);
void (* Object_get_transform)(C(Object) * o, C(Transform) * value);

C(Property) * PROPERTY(Object, material);
void (* Object_set_material)(C(Object) * o, C(Material) * value);
C(Material) * (* Object_get_material)(C(Object) * o);

C(Property) * PROPERTY(Object, max);
void (* Object_get_max)(C(Object) * o, C(Vector3Df) * value);

C(Property) * PROPERTY(Object, min);
void (* Object_get_min)(C(Object) * o, C(Vector3Df) * value);

C(Property) * PROPERTY(Object, center);
void (* Object_get_center)(C(Object) * o, C(Vector3Df) * value);

C(Property) * PROPERTY(Object, radius);
float (* Object_get_radius)(C(Object) * o);

C(Property) * PROPERTY(Object, wmax);
void (* Object_get_wmax)(C(Object) * o, C(Vector3D) * value);

C(Property) * PROPERTY(Object, wmin);
void (* Object_get_wmin)(C(Object) * o, C(Vector3D) * value);

C(Property) * PROPERTY(Object, wcenter);
void (* Object_get_wcenter)(C(Object) * o, C(Vector3D) * value);

C(Property) * PROPERTY(Object, wradius);
double (* Object_get_wradius)(C(Object) * o);

C(Property) * PROPERTY(Object, tag);
void (* Object_set_tag)(C(Object) * o, void * value);
void * (* Object_get_tag)(C(Object) * o);

C(Property) * PROPERTY(Object, frame);
void (* Object_set_frame)(C(Object) * o, int value);
int (* Object_get_frame)(C(Object) * o);

C(Property) * PROPERTY(Object, startFrame);
void (* Object_set_startFrame)(C(Object) * o, int value);
int (* Object_get_startFrame)(C(Object) * o);

C(Property) * PROPERTY(Object, endFrame);
void (* Object_set_endFrame)(C(Object) * o, int value);
int (* Object_get_endFrame)(C(Object) * o);

C(Property) * PROPERTY(Object, mesh);
void (* Object_set_mesh)(C(Object) * o, C(Mesh) * value);
C(Mesh) * (* Object_get_mesh)(C(Object) * o);

C(Property) * PROPERTY(Object, camera);
C(Camera) (* Object_get_camera)(C(Object) * o);

C(Property) * PROPERTY(Object, firstChild);
C(Object) * (* Object_get_firstChild)(C(Object) * o);

C(Property) * PROPERTY(Object, next);
C(Object) * (* Object_get_next)(C(Object) * o);

C(Property) * PROPERTY(Object, name);
const char * (* Object_get_name)(C(Object) * o);

C(Property) * PROPERTY(Object, matrix);
void (* Object_get_matrix)(C(Object) * o, C(Matrix) * value);

C(Property) * PROPERTY(Object, cameraTarget);
void (* Object_set_cameraTarget)(C(Object) * o, C(Object) * value);
C(Object) * (* Object_get_cameraTarget)(C(Object) * o);

C(Property) * PROPERTY(Object, tracks);
C(OldList) * (* Object_get_tracks)(C(Object) * o);

C(Property) * PROPERTY(Object, flags);
void (* Object_set_flags)(C(Object) * o, C(ObjectFlags) value);
C(ObjectFlags) (* Object_get_flags)(C(Object) * o);

C(Property) * PROPERTY(Object, parent);
C(Object) * (* Object_get_parent)(C(Object) * o);

C(Property) * PROPERTY(Object, numChildren);
uint (* Object_get_numChildren)(C(Object) * o);

C(Property) * PROPERTY(Object, localMatrixPtr);
C(Matrix) * (* Object_get_localMatrixPtr)(C(Object) * o);

C(Property) * PROPERTY(Object, matrixPtr);
C(Matrix) * (* Object_get_matrixPtr)(C(Object) * o);

C(Property) * PROPERTY(Object, light);
void (* Object_set_light)(C(Object) * o, const C(Light) * value);
void (* Object_get_light)(C(Object) * o, C(Light) * value);

C(Property) * PROPERTY(Vector3D, length);
double (* Vector3D_get_length)(C(Vector3D) v);

C(Property) * PROPERTY(Vector3D, lengthApprox);
double (* Vector3D_get_lengthApprox)(C(Vector3D) v);

C(Property) * PROPERTY(Vector3Df, length);
float (* Vector3Df_get_length)(C(Vector3Df) v);

C(Property) * PROPERTY(Vector3Df, lengthApprox);
float (* Vector3Df_get_lengthApprox)(C(Vector3Df) v);

C(Property) * PROPERTY(Cube, size);
void (* Cube_set_size)(C(Cube) * c, const C(Vector3Df) * value);

C(Property) * PROPERTY(SkyBox, size);
void (* SkyBox_set_size)(C(SkyBox) * s, const C(Vector3Df) * value);

C(Property) * PROPERTY(SkyBox, folder);
void (* SkyBox_set_folder)(C(SkyBox) * s, const char * value);

C(Property) * PROPERTY(SkyBox, extension);
void (* SkyBox_set_extension)(C(SkyBox) * s, const char * value);

C(Property) * PROPERTY(SkyBox, newStyle);
void (* SkyBox_set_newStyle)(C(SkyBox) * s, C(bool) value);

C(Property) * PROPERTY(SkyBox, cubeMap);
void (* SkyBox_set_cubeMap)(C(SkyBox) * s, C(CubeMap) value);

C(Property) * PROPERTY(Sphere, numLat);
void (* Sphere_set_numLat)(C(Sphere) * s, int value);

C(Property) * PROPERTY(Sphere, numLon);
void (* Sphere_set_numLon)(C(Sphere) * s, int value);

C(Property) * PROPERTY(Sphere, flattenedBody);
void (* Sphere_set_flattenedBody)(C(Sphere) * s, float value);

C(Property) * PROPERTY(AnchorValue, MinMaxValue);
void (* AnchorValue_from_MinMaxValue)(C(AnchorValue) a, C(MinMaxValue) value);
C(MinMaxValue) (* AnchorValue_to_MinMaxValue)(C(AnchorValue) a);

C(Property) * PROPERTY(AnchorValue, int);
void (* AnchorValue_from_int)(C(AnchorValue) a, int value);
int (* AnchorValue_to_int)(C(AnchorValue) a);

C(Property) * PROPERTY(AnchorValue, double);
void (* AnchorValue_from_double)(C(AnchorValue) a, double value);
double (* AnchorValue_to_double)(C(AnchorValue) a);

C(Property) * PROPERTY(ClipBoard, memory);
char * (* ClipBoard_get_memory)(C(ClipBoard) * c);

C(Property) * PROPERTY(CommonControl, toolTip);
void (* CommonControl_set_toolTip)(C(CommonControl) c, constString value);
constString (* CommonControl_get_toolTip)(C(CommonControl) c);

C(Property) * PROPERTY(Cursor, systemCursor);
void (* Cursor_set_systemCursor)(C(Cursor) c, C(SystemCursor) value);

C(Property) * PROPERTY(GuiApplication, appName);
void (* GuiApplication_set_appName)(C(GuiApplication) g, const char * value);
const char * (* GuiApplication_get_appName)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, semaphore);
C(Semaphore) * (* GuiApplication_get_semaphore)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, alwaysEmptyInput);
void (* GuiApplication_set_alwaysEmptyInput)(C(GuiApplication) g, C(bool) value);
C(bool) (* GuiApplication_get_alwaysEmptyInput)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, fullScreen);
void (* GuiApplication_set_fullScreen)(C(GuiApplication) g, C(bool) value);
C(bool) (* GuiApplication_get_fullScreen)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, driver);
void (* GuiApplication_set_driver)(C(GuiApplication) g, const char * value);
const char * (* GuiApplication_get_driver)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, resolution);
void (* GuiApplication_set_resolution)(C(GuiApplication) g, C(Resolution) value);
C(Resolution) (* GuiApplication_get_resolution)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, pixelFormat);
void (* GuiApplication_set_pixelFormat)(C(GuiApplication) g, C(PixelFormat) value);
C(PixelFormat) (* GuiApplication_get_pixelFormat)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, refreshRate);
void (* GuiApplication_set_refreshRate)(C(GuiApplication) g, int value);
int (* GuiApplication_get_refreshRate)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, skin);
void (* GuiApplication_set_skin)(C(GuiApplication) g, const char * value);
const char * (* GuiApplication_get_skin)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, textMode);
void (* GuiApplication_set_textMode)(C(GuiApplication) g, C(bool) value);
C(bool) (* GuiApplication_get_textMode)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, desktop);
C(Window) (* GuiApplication_get_desktop)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, drivers);
const char ** (* GuiApplication_get_drivers)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, skins);
const char ** (* GuiApplication_get_skins)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, currentSkin);
subclass(Skin) (* GuiApplication_get_currentSkin)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, numDrivers);
int (* GuiApplication_get_numDrivers)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, numSkins);
int (* GuiApplication_get_numSkins)(C(GuiApplication) g);

C(Property) * PROPERTY(GuiApplication, timerResolution);
void (* GuiApplication_set_timerResolution)(C(GuiApplication) g, uint value);

C(Property) * PROPERTY(GuiApplication, acquiredWindow);
C(Window) (* GuiApplication_get_acquiredWindow)(C(GuiApplication) g);

C(Property) * PROPERTY(Key, SmartKey);
C(SmartKey) (* Key_to_SmartKey)(C(Key) key);

C(Property) * PROPERTY(MiddleAnchorValue, MinMaxValue);
void (* MiddleAnchorValue_from_MinMaxValue)(C(MiddleAnchorValue) m, C(MinMaxValue) value);
C(MinMaxValue) (* MiddleAnchorValue_to_MinMaxValue)(C(MiddleAnchorValue) m);

C(Property) * PROPERTY(MiddleAnchorValue, int);
void (* MiddleAnchorValue_from_int)(C(MiddleAnchorValue) m, int value);
int (* MiddleAnchorValue_to_int)(C(MiddleAnchorValue) m);

C(Property) * PROPERTY(MiddleAnchorValue, double);
void (* MiddleAnchorValue_from_double)(C(MiddleAnchorValue) m, double value);
double (* MiddleAnchorValue_to_double)(C(MiddleAnchorValue) m);

C(Property) * PROPERTY(Timer, userData);
void (* Timer_set_userData)(C(Timer) t, void * value);
void * (* Timer_get_userData)(C(Timer) t);

C(Property) * PROPERTY(Timer, delay);
void (* Timer_set_delay)(C(Timer) t, C(Time) value);
C(Time) (* Timer_get_delay)(C(Timer) t);

C(Property) * PROPERTY(Timer, started);
void (* Timer_set_started)(C(Timer) t, C(bool) value);
C(bool) (* Timer_get_started)(C(Timer) t);

C(Property) * PROPERTY(Window, parent);
void (* Window_set_parent)(C(Window) w, C(Window) value);
C(Window) (* Window_get_parent)(C(Window) w);

C(Property) * PROPERTY(Window, master);
void (* Window_set_master)(C(Window) w, C(Window) value);
C(Window) (* Window_get_master)(C(Window) w);

C(Property) * PROPERTY(Window, caption);
void (* Window_set_caption)(C(Window) w, const char * value);
const char * (* Window_get_caption)(C(Window) w);

C(Property) * PROPERTY(Window, hotKey);
void (* Window_set_hotKey)(C(Window) w, C(Key) value);
C(Key) (* Window_get_hotKey)(C(Window) w);

C(Property) * PROPERTY(Window, background);
void (* Window_set_background)(C(Window) w, C(Color) value);
C(Color) (* Window_get_background)(C(Window) w);

C(Property) * PROPERTY(Window, opacity);
void (* Window_set_opacity)(C(Window) w, C(Percentage) value);
C(Percentage) (* Window_get_opacity)(C(Window) w);

C(Property) * PROPERTY(Window, foreground);
void (* Window_set_foreground)(C(Window) w, C(Color) value);
C(Color) (* Window_get_foreground)(C(Window) w);

C(Property) * PROPERTY(Window, borderStyle);
void (* Window_set_borderStyle)(C(Window) w, C(BorderStyle) value);
C(BorderStyle) (* Window_get_borderStyle)(C(Window) w);

C(Property) * PROPERTY(Window, minClientSize);
void (* Window_set_minClientSize)(C(Window) w, const C(Size) * value);
void (* Window_get_minClientSize)(C(Window) w, C(Size) * value);

C(Property) * PROPERTY(Window, maxClientSize);
void (* Window_set_maxClientSize)(C(Window) w, const C(Size) * value);
void (* Window_get_maxClientSize)(C(Window) w, C(Size) * value);

C(Property) * PROPERTY(Window, hasMaximize);
void (* Window_set_hasMaximize)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasMaximize)(C(Window) w);

C(Property) * PROPERTY(Window, hasMinimize);
void (* Window_set_hasMinimize)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasMinimize)(C(Window) w);

C(Property) * PROPERTY(Window, hasClose);
void (* Window_set_hasClose)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasClose)(C(Window) w);

C(Property) * PROPERTY(Window, nonClient);
void (* Window_set_nonClient)(C(Window) w, C(bool) value);
C(bool) (* Window_get_nonClient)(C(Window) w);

C(Property) * PROPERTY(Window, inactive);
void (* Window_set_inactive)(C(Window) w, C(bool) value);
C(bool) (* Window_get_inactive)(C(Window) w);

C(Property) * PROPERTY(Window, clickThrough);
void (* Window_set_clickThrough)(C(Window) w, C(bool) value);
C(bool) (* Window_get_clickThrough)(C(Window) w);

C(Property) * PROPERTY(Window, isRemote);
void (* Window_set_isRemote)(C(Window) w, C(bool) value);
C(bool) (* Window_get_isRemote)(C(Window) w);

C(Property) * PROPERTY(Window, noCycle);
void (* Window_set_noCycle)(C(Window) w, C(bool) value);
C(bool) (* Window_get_noCycle)(C(Window) w);

C(Property) * PROPERTY(Window, isModal);
void (* Window_set_isModal)(C(Window) w, C(bool) value);
C(bool) (* Window_get_isModal)(C(Window) w);

C(Property) * PROPERTY(Window, interim);
void (* Window_set_interim)(C(Window) w, C(bool) value);
C(bool) (* Window_get_interim)(C(Window) w);

C(Property) * PROPERTY(Window, tabCycle);
void (* Window_set_tabCycle)(C(Window) w, C(bool) value);
C(bool) (* Window_get_tabCycle)(C(Window) w);

C(Property) * PROPERTY(Window, isDefault);
void (* Window_set_isDefault)(C(Window) w, C(bool) value);
C(bool) (* Window_get_isDefault)(C(Window) w);

C(Property) * PROPERTY(Window, drawBehind);
void (* Window_set_drawBehind)(C(Window) w, C(bool) value);
C(bool) (* Window_get_drawBehind)(C(Window) w);

C(Property) * PROPERTY(Window, hasMenuBar);
void (* Window_set_hasMenuBar)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasMenuBar)(C(Window) w);

C(Property) * PROPERTY(Window, hasStatusBar);
void (* Window_set_hasStatusBar)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasStatusBar)(C(Window) w);

C(Property) * PROPERTY(Window, stayOnTop);
void (* Window_set_stayOnTop)(C(Window) w, C(bool) value);
C(bool) (* Window_get_stayOnTop)(C(Window) w);

C(Property) * PROPERTY(Window, menu);
void (* Window_set_menu)(C(Window) w, C(Menu) value);
C(Menu) (* Window_get_menu)(C(Window) w);

C(Property) * PROPERTY(Window, font);
void (* Window_set_font)(C(Window) w, C(FontResource) value);
C(FontResource) (* Window_get_font)(C(Window) w);
bool (* Window_isSet_font)(C(Window) w);

C(Property) * PROPERTY(Window, sizeAnchor);
void (* Window_set_sizeAnchor)(C(Window) w, const C(SizeAnchor) * value);
void (* Window_get_sizeAnchor)(C(Window) w, C(SizeAnchor) * value);
bool (* Window_isSet_sizeAnchor)(C(Window) w);

C(Property) * PROPERTY(Window, size);
void (* Window_set_size)(C(Window) w, const C(Size) * value);
void (* Window_get_size)(C(Window) w, C(Size) * value);
bool (* Window_isSet_size)(C(Window) w);

C(Property) * PROPERTY(Window, clientSize);
void (* Window_set_clientSize)(C(Window) w, const C(Size) * value);
void (* Window_get_clientSize)(C(Window) w, C(Size) * value);
bool (* Window_isSet_clientSize)(C(Window) w);

C(Property) * PROPERTY(Window, initSize);
void (* Window_get_initSize)(C(Window) w, C(Size) * value);

C(Property) * PROPERTY(Window, anchor);
void (* Window_set_anchor)(C(Window) w, const C(Anchor) * value);
void (* Window_get_anchor)(C(Window) w, C(Anchor) * value);
bool (* Window_isSet_anchor)(C(Window) w);

C(Property) * PROPERTY(Window, position);
void (* Window_set_position)(C(Window) w, const C(Point) * value);
void (* Window_get_position)(C(Window) w, C(Point) * value);

C(Property) * PROPERTY(Window, disabled);
void (* Window_set_disabled)(C(Window) w, C(bool) value);
C(bool) (* Window_get_disabled)(C(Window) w);

C(Property) * PROPERTY(Window, isEnabled);
C(bool) (* Window_get_isEnabled)(C(Window) w);

C(Property) * PROPERTY(Window, state);
void (* Window_set_state)(C(Window) w, C(WindowState) value);
C(WindowState) (* Window_get_state)(C(Window) w);

C(Property) * PROPERTY(Window, visible);
void (* Window_set_visible)(C(Window) w, C(bool) value);
C(bool) (* Window_get_visible)(C(Window) w);

C(Property) * PROPERTY(Window, isDocument);
void (* Window_set_isDocument)(C(Window) w, C(bool) value);
C(bool) (* Window_get_isDocument)(C(Window) w);

C(Property) * PROPERTY(Window, mergeMenus);
void (* Window_set_mergeMenus)(C(Window) w, C(bool) value);
C(bool) (* Window_get_mergeMenus)(C(Window) w);

C(Property) * PROPERTY(Window, hasHorzScroll);
void (* Window_set_hasHorzScroll)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasHorzScroll)(C(Window) w);

C(Property) * PROPERTY(Window, hasVertScroll);
void (* Window_set_hasVertScroll)(C(Window) w, C(bool) value);
C(bool) (* Window_get_hasVertScroll)(C(Window) w);

C(Property) * PROPERTY(Window, dontHideScroll);
void (* Window_set_dontHideScroll)(C(Window) w, C(bool) value);
C(bool) (* Window_get_dontHideScroll)(C(Window) w);

C(Property) * PROPERTY(Window, dontScrollVert);
void (* Window_set_dontScrollVert)(C(Window) w, C(bool) value);
C(bool) (* Window_get_dontScrollVert)(C(Window) w);

C(Property) * PROPERTY(Window, dontScrollHorz);
void (* Window_set_dontScrollHorz)(C(Window) w, C(bool) value);
C(bool) (* Window_get_dontScrollHorz)(C(Window) w);

C(Property) * PROPERTY(Window, snapVertScroll);
void (* Window_set_snapVertScroll)(C(Window) w, C(bool) value);
C(bool) (* Window_get_snapVertScroll)(C(Window) w);

C(Property) * PROPERTY(Window, snapHorzScroll);
void (* Window_set_snapHorzScroll)(C(Window) w, C(bool) value);
C(bool) (* Window_get_snapHorzScroll)(C(Window) w);

C(Property) * PROPERTY(Window, scroll);
void (* Window_set_scroll)(C(Window) w, const C(Point) * value);
void (* Window_get_scroll)(C(Window) w, C(Point) * value);

C(Property) * PROPERTY(Window, modifyVirtualArea);
void (* Window_set_modifyVirtualArea)(C(Window) w, C(bool) value);
C(bool) (* Window_get_modifyVirtualArea)(C(Window) w);

C(Property) * PROPERTY(Window, dontAutoScrollArea);
void (* Window_set_dontAutoScrollArea)(C(Window) w, C(bool) value);
C(bool) (* Window_get_dontAutoScrollArea)(C(Window) w);

C(Property) * PROPERTY(Window, fileName);
void (* Window_set_fileName)(C(Window) w, const char * value);
const char * (* Window_get_fileName)(C(Window) w);

C(Property) * PROPERTY(Window, id);
void (* Window_set_id)(C(Window) w, int64 value);
int64 (* Window_get_id)(C(Window) w);

C(Property) * PROPERTY(Window, modifiedDocument);
void (* Window_set_modifiedDocument)(C(Window) w, C(bool) value);
C(bool) (* Window_get_modifiedDocument)(C(Window) w);

C(Property) * PROPERTY(Window, showInTaskBar);
void (* Window_set_showInTaskBar)(C(Window) w, C(bool) value);
C(bool) (* Window_get_showInTaskBar)(C(Window) w);

C(Property) * PROPERTY(Window, saveDialog);
void (* Window_set_saveDialog)(C(Window) w, C(FileDialog) value);

C(Property) * PROPERTY(Window, isActiveClient);
void (* Window_set_isActiveClient)(C(Window) w, C(bool) value);
C(bool) (* Window_get_isActiveClient)(C(Window) w);

C(Property) * PROPERTY(Window, cursor);
void (* Window_set_cursor)(C(Window) w, C(Cursor) value);
C(Cursor) (* Window_get_cursor)(C(Window) w);

C(Property) * PROPERTY(Window, name);
void (* Window_set_name)(C(Window) w, const char * value);
const char * (* Window_get_name)(C(Window) w);

C(Property) * PROPERTY(Window, displayDriver);
void (* Window_set_displayDriver)(C(Window) w, const char * value);
const char * (* Window_get_displayDriver)(C(Window) w);

C(Property) * PROPERTY(Window, autoCreate);
void (* Window_set_autoCreate)(C(Window) w, C(bool) value);
C(bool) (* Window_get_autoCreate)(C(Window) w);

C(Property) * PROPERTY(Window, scrollArea);
void (* Window_set_scrollArea)(C(Window) w, const C(Size) * value);
void (* Window_get_scrollArea)(C(Window) w, C(Size) * value);
bool (* Window_isSet_scrollArea)(C(Window) w);

C(Property) * PROPERTY(Window, is3D);
void (* Window_set_is3D)(C(Window) w, C(bool) value);
C(bool) (* Window_get_is3D)(C(Window) w);

C(Property) * PROPERTY(Window, fontObject);
C(Font) * (* Window_get_fontObject)(C(Window) w);

C(Property) * PROPERTY(Window, clientStart);
void (* Window_get_clientStart)(C(Window) w, C(Point) * value);

C(Property) * PROPERTY(Window, absPosition);
void (* Window_get_absPosition)(C(Window) w, C(Point) * value);

C(Property) * PROPERTY(Window, normalAnchor);
void (* Window_get_normalAnchor)(C(Window) w, C(Anchor) * value);

C(Property) * PROPERTY(Window, normalSizeAnchor);
void (* Window_get_normalSizeAnchor)(C(Window) w, C(SizeAnchor) * value);

C(Property) * PROPERTY(Window, active);
C(bool) (* Window_get_active)(C(Window) w);

C(Property) * PROPERTY(Window, created);
C(bool) (* Window_get_created)(C(Window) w);

C(Property) * PROPERTY(Window, destroyed);
C(bool) (* Window_get_destroyed)(C(Window) w);

C(Property) * PROPERTY(Window, firstSlave);
C(Window) (* Window_get_firstSlave)(C(Window) w);

C(Property) * PROPERTY(Window, firstChild);
C(Window) (* Window_get_firstChild)(C(Window) w);

C(Property) * PROPERTY(Window, lastChild);
C(Window) (* Window_get_lastChild)(C(Window) w);

C(Property) * PROPERTY(Window, activeClient);
C(Window) (* Window_get_activeClient)(C(Window) w);

C(Property) * PROPERTY(Window, activeChild);
C(Window) (* Window_get_activeChild)(C(Window) w);

C(Property) * PROPERTY(Window, display);
C(Display) (* Window_get_display)(C(Window) w);

C(Property) * PROPERTY(Window, displaySystem);
C(DisplaySystem) (* Window_get_displaySystem)(C(Window) w);

C(Property) * PROPERTY(Window, horzScroll);
C(ScrollBar) (* Window_get_horzScroll)(C(Window) w);

C(Property) * PROPERTY(Window, vertScroll);
C(ScrollBar) (* Window_get_vertScroll)(C(Window) w);

C(Property) * PROPERTY(Window, statusBar);
C(StatusBar) (* Window_get_statusBar)(C(Window) w);

C(Property) * PROPERTY(Window, rootWindow);
C(Window) (* Window_get_rootWindow)(C(Window) w);

C(Property) * PROPERTY(Window, closing);
void (* Window_set_closing)(C(Window) w, C(bool) value);
C(bool) (* Window_get_closing)(C(Window) w);

C(Property) * PROPERTY(Window, documentID);
int (* Window_get_documentID)(C(Window) w);

C(Property) * PROPERTY(Window, previous);
C(Window) (* Window_get_previous)(C(Window) w);

C(Property) * PROPERTY(Window, next);
C(Window) (* Window_get_next)(C(Window) w);

C(Property) * PROPERTY(Window, nextSlave);
C(Window) (* Window_get_nextSlave)(C(Window) w);

C(Property) * PROPERTY(Window, menuBar);
C(PopupMenu) (* Window_get_menuBar)(C(Window) w);

C(Property) * PROPERTY(Window, sbv);
C(ScrollBar) (* Window_get_sbv)(C(Window) w);

C(Property) * PROPERTY(Window, sbh);
C(ScrollBar) (* Window_get_sbh)(C(Window) w);

C(Property) * PROPERTY(Window, fullRender);
void (* Window_set_fullRender)(C(Window) w, C(bool) value);
C(bool) (* Window_get_fullRender)(C(Window) w);

C(Property) * PROPERTY(Window, systemHandle);
void * (* Window_get_systemHandle)(C(Window) w);

C(Property) * PROPERTY(Window, minimizeButton);
C(Button) (* Window_get_minimizeButton)(C(Window) w);

C(Property) * PROPERTY(Window, maximizeButton);
C(Button) (* Window_get_maximizeButton)(C(Window) w);

C(Property) * PROPERTY(Window, closeButton);
C(Button) (* Window_get_closeButton)(C(Window) w);

C(Property) * PROPERTY(Window, icon);
void (* Window_set_icon)(C(Window) w, C(BitmapResource) value);
C(BitmapResource) (* Window_get_icon)(C(Window) w);

C(Property) * PROPERTY(Window, moveable);
void (* Window_set_moveable)(C(Window) w, C(bool) value);
C(bool) (* Window_get_moveable)(C(Window) w);

C(Property) * PROPERTY(Window, alphaBlend);
void (* Window_set_alphaBlend)(C(Window) w, C(bool) value);
C(bool) (* Window_get_alphaBlend)(C(Window) w);

C(Property) * PROPERTY(Window, useSharedMemory);
void (* Window_set_useSharedMemory)(C(Window) w, C(bool) value);
C(bool) (* Window_get_useSharedMemory)(C(Window) w);

C(Property) * PROPERTY(Window, glCapabilities);
void (* Window_set_glCapabilities)(C(Window) w, C(GLCapabilities) value);
C(GLCapabilities) (* Window_get_glCapabilities)(C(Window) w);

C(Property) * PROPERTY(Window, creationActivation);
void (* Window_set_creationActivation)(C(Window) w, C(CreationActivationOption) value);
C(CreationActivationOption) (* Window_get_creationActivation)(C(Window) w);

C(Property) * PROPERTY(Window, nativeDecorations);
void (* Window_set_nativeDecorations)(C(Window) w, C(bool) value);
C(bool) (* Window_get_nativeDecorations)(C(Window) w);
bool (* Window_isSet_nativeDecorations)(C(Window) w);

C(Property) * PROPERTY(Window, manageDisplay);
void (* Window_set_manageDisplay)(C(Window) w, C(bool) value);
C(bool) (* Window_get_manageDisplay)(C(Window) w);

C(Property) * PROPERTY(Window, text);
void (* Window_set_text)(C(Window) w, const char * value);
const char * (* Window_get_text)(C(Window) w);

C(Property) * PROPERTY(Window, controller);
void (* Window_set_controller)(C(Window) w, C(WindowController) value);
C(WindowController) (* Window_get_controller)(C(Window) w);

C(Property) * PROPERTY(Window, noConsequential);
void (* Window_set_noConsequential)(C(Window) w, C(bool) value);
C(bool) (* Window_get_noConsequential)(C(Window) w);

C(Property) * PROPERTY(WindowController, window);
C(Window) (* WindowController_get_window)(C(WindowController) w);

C(Property) * PROPERTY(WindowController, controlled);
void (* WindowController_set_controlled)(C(WindowController) w, TP(WindowController, V) value);
TP(WindowController, V) (* WindowController_get_controlled)(C(WindowController) w);

C(Property) * PROPERTY(Button, opacity);
void (* Button_set_opacity)(C(Button) b, C(Percentage) value);
C(Percentage) (* Button_get_opacity)(C(Button) b);
bool (* Button_isSet_opacity)(C(Button) b);

C(Property) * PROPERTY(Button, drawBehind);
void (* Button_set_drawBehind)(C(Button) b, C(bool) value);
C(bool) (* Button_get_drawBehind)(C(Button) b);
bool (* Button_isSet_drawBehind)(C(Button) b);

C(Property) * PROPERTY(Button, isRadio);
void (* Button_set_isRadio)(C(Button) b, C(bool) value);
C(bool) (* Button_get_isRadio)(C(Button) b);

C(Property) * PROPERTY(Button, isCheckbox);
void (* Button_set_isCheckbox)(C(Button) b, C(bool) value);
C(bool) (* Button_get_isCheckbox)(C(Button) b);

C(Property) * PROPERTY(Button, bevel);
void (* Button_set_bevel)(C(Button) b, C(bool) value);
C(bool) (* Button_get_bevel)(C(Button) b);

C(Property) * PROPERTY(Button, bevelOver);
void (* Button_set_bevelOver)(C(Button) b, C(bool) value);
C(bool) (* Button_get_bevelOver)(C(Button) b);

C(Property) * PROPERTY(Button, toggle);
void (* Button_set_toggle)(C(Button) b, C(bool) value);
C(bool) (* Button_get_toggle)(C(Button) b);

C(Property) * PROPERTY(Button, checked);
void (* Button_set_checked)(C(Button) b, C(bool) value);
C(bool) (* Button_get_checked)(C(Button) b);

C(Property) * PROPERTY(Button, alignment);
void (* Button_set_alignment)(C(Button) b, C(Alignment) value);
C(Alignment) (* Button_get_alignment)(C(Button) b);

C(Property) * PROPERTY(Button, bitmap);
void (* Button_set_bitmap)(C(Button) b, C(BitmapResource) value);
C(BitmapResource) (* Button_get_bitmap)(C(Button) b);

C(Property) * PROPERTY(Button, stayUp);
void (* Button_set_stayUp)(C(Button) b, C(bool) value);
C(bool) (* Button_get_stayUp)(C(Button) b);

C(Property) * PROPERTY(Button, scaleBitmap);
void (* Button_set_scaleBitmap)(C(Button) b, C(bool) value);
C(bool) (* Button_get_scaleBitmap)(C(Button) b);

C(Property) * PROPERTY(Button, keyRepeat);
void (* Button_set_keyRepeat)(C(Button) b, C(bool) value);
C(bool) (* Button_get_keyRepeat)(C(Button) b);

C(Property) * PROPERTY(Button, symbol);
void (* Button_set_symbol)(C(Button) b, unichar value);
unichar (* Button_get_symbol)(C(Button) b);

C(Property) * PROPERTY(Button, ellipsis);
void (* Button_set_ellipsis)(C(Button) b, C(bool) value);
C(bool) (* Button_get_ellipsis)(C(Button) b);

C(Property) * PROPERTY(Button, stayDown);
void (* Button_set_stayDown)(C(Button) b, C(bool) value);
C(bool) (* Button_get_stayDown)(C(Button) b);

C(Property) * PROPERTY(Button, offset);
void (* Button_set_offset)(C(Button) b, C(bool) value);
C(bool) (* Button_get_offset)(C(Button) b);

C(Property) * PROPERTY(Button, buttonState);
void (* Button_set_buttonState)(C(Button) b, C(ButtonState) value);
C(ButtonState) (* Button_get_buttonState)(C(Button) b);

C(Property) * PROPERTY(Button, bitmapAlignment);
void (* Button_set_bitmapAlignment)(C(Button) b, C(BoxAlignment) value);
C(BoxAlignment) (* Button_get_bitmapAlignment)(C(Button) b);

C(Property) * PROPERTY(DataField, dataType);
void (* DataField_set_dataType)(C(DataField) d, C(Class) * value);
C(Class) * (* DataField_get_dataType)(C(DataField) d);

C(Property) * PROPERTY(DataField, editable);
void (* DataField_set_editable)(C(DataField) d, C(bool) value);

C(Property) * PROPERTY(DataField, fixed);
void (* DataField_set_fixed)(C(DataField) d, C(bool) value);
C(bool) (* DataField_get_fixed)(C(DataField) d);

C(Property) * PROPERTY(DataField, alignment);
void (* DataField_set_alignment)(C(DataField) d, C(Alignment) value);
C(Alignment) (* DataField_get_alignment)(C(DataField) d);

C(Property) * PROPERTY(DataField, width);
void (* DataField_set_width)(C(DataField) d, int value);
int (* DataField_get_width)(C(DataField) d);

C(Property) * PROPERTY(DataField, index);
int (* DataField_get_index)(C(DataField) d);

C(Property) * PROPERTY(DataField, position);
void (* DataField_set_position)(C(DataField) d, int value);
int (* DataField_get_position)(C(DataField) d);

C(Property) * PROPERTY(DataField, sortOrder);
int (* DataField_get_sortOrder)(C(DataField) d);

C(Property) * PROPERTY(DataField, header);
void (* DataField_set_header)(C(DataField) d, const char * value);

C(Property) * PROPERTY(DataField, userData);
void (* DataField_set_userData)(C(DataField) d, void * value);
void * (* DataField_get_userData)(C(DataField) d);

C(Property) * PROPERTY(DataField, freeData);
void (* DataField_set_freeData)(C(DataField) d, C(bool) value);
C(bool) (* DataField_get_freeData)(C(DataField) d);

C(Property) * PROPERTY(DataField, prev);
C(DataField) (* DataField_get_prev)(C(DataField) d);

C(Property) * PROPERTY(DataField, next);
C(DataField) (* DataField_get_next)(C(DataField) d);

C(Property) * PROPERTY(DataRow, tag);
void (* DataRow_set_tag)(C(DataRow) d, int64 value);
int64 (* DataRow_get_tag)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, previous);
C(DataRow) (* DataRow_get_previous)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, next);
C(DataRow) (* DataRow_get_next)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, index);
int (* DataRow_get_index)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, string);
void (* DataRow_set_string)(C(DataRow) d, const char * value);
const char * (* DataRow_get_string)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, isHeader);
void (* DataRow_set_isHeader)(C(DataRow) d, C(bool) value);
C(bool) (* DataRow_get_isHeader)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, icon);
void (* DataRow_set_icon)(C(DataRow) d, C(BitmapResource) value);
C(BitmapResource) (* DataRow_get_icon)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, collapsed);
void (* DataRow_set_collapsed)(C(DataRow) d, C(bool) value);
C(bool) (* DataRow_get_collapsed)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, selected);
void (* DataRow_set_selected)(C(DataRow) d, C(bool) value);
C(bool) (* DataRow_get_selected)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, parent);
void (* DataRow_set_parent)(C(DataRow) d, C(DataRow) value);
C(DataRow) (* DataRow_get_parent)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, lastRow);
C(DataRow) (* DataRow_get_lastRow)(C(DataRow) d);

C(Property) * PROPERTY(DataRow, firstRow);
C(DataRow) (* DataRow_get_firstRow)(C(DataRow) d);

C(Property) * PROPERTY(DirectoriesBox, strings);
void (* DirectoriesBox_set_strings)(C(DirectoriesBox) d, C(Array) value);
C(Array) (* DirectoriesBox_get_strings)(C(DirectoriesBox) d);

C(Property) * PROPERTY(DirectoriesBox, browseDialog);
void (* DirectoriesBox_set_browseDialog)(C(DirectoriesBox) d, C(FileDialog) value);
C(FileDialog) (* DirectoriesBox_get_browseDialog)(C(DirectoriesBox) d);

C(Property) * PROPERTY(DirectoriesBox, baseBrowsePath);
void (* DirectoriesBox_set_baseBrowsePath)(C(DirectoriesBox) d, C(String) value);
C(String) (* DirectoriesBox_get_baseBrowsePath)(C(DirectoriesBox) d);

C(Property) * PROPERTY(DropBox, activeStipple);
void (* DropBox_set_activeStipple)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_activeStipple)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, showButton);
void (* DropBox_set_showButton)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_showButton)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, alignment);
void (* DropBox_set_alignment)(C(DropBox) d, C(Alignment) value);
C(Alignment) (* DropBox_get_alignment)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, noHighlight);
void (* DropBox_set_noHighlight)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_noHighlight)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, activeColor);
void (* DropBox_set_activeColor)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_activeColor)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, currentRow);
void (* DropBox_set_currentRow)(C(DropBox) d, C(DataRow) value);
C(DataRow) (* DropBox_get_currentRow)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, firstRow);
C(DataRow) (* DropBox_get_firstRow)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, lastRow);
C(DataRow) (* DropBox_get_lastRow)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, contents);
void (* DropBox_set_contents)(C(DropBox) d, const char * value);
const char * (* DropBox_get_contents)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, editText);
void (* DropBox_set_editText)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_editText)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, editBox);
C(EditBox) (* DropBox_get_editBox)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, typingTimeout);
void (* DropBox_set_typingTimeout)(C(DropBox) d, C(Time) value);
C(Time) (* DropBox_get_typingTimeout)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, rowHeight);
void (* DropBox_set_rowHeight)(C(DropBox) d, int value);
int (* DropBox_get_rowHeight)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, maxShown);
void (* DropBox_set_maxShown)(C(DropBox) d, int value);
int (* DropBox_get_maxShown)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, pullDown);
C(Window) (* DropBox_get_pullDown)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, showNone);
void (* DropBox_set_showNone)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_showNone)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, selectionColor);
void (* DropBox_set_selectionColor)(C(DropBox) d, C(Color) value);
C(Color) (* DropBox_get_selectionColor)(C(DropBox) d);
bool (* DropBox_isSet_selectionColor)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, selectionText);
void (* DropBox_set_selectionText)(C(DropBox) d, C(Color) value);
C(Color) (* DropBox_get_selectionText)(C(DropBox) d);
bool (* DropBox_isSet_selectionText)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, changeContents);
void (* DropBox_set_changeContents)(C(DropBox) d, C(bool) value);
C(bool) (* DropBox_get_changeContents)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, listBox);
C(ListBox) (* DropBox_get_listBox)(C(DropBox) d);

C(Property) * PROPERTY(DropBox, rowCount);
int (* DropBox_get_rowCount)(C(DropBox) d);

C(Property) * PROPERTY(EditBox, textHorzScroll);
void (* EditBox_set_textHorzScroll)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_textHorzScroll)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, textVertScroll);
void (* EditBox_set_textVertScroll)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_textVertScroll)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, readOnly);
void (* EditBox_set_readOnly)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_readOnly)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, multiLine);
void (* EditBox_set_multiLine)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_multiLine)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, freeCaret);
void (* EditBox_set_freeCaret)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_freeCaret)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, tabKey);
void (* EditBox_set_tabKey)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_tabKey)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, tabSize);
void (* EditBox_set_tabSize)(C(EditBox) e, int value);
int (* EditBox_get_tabSize)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, tabSelection);
void (* EditBox_set_tabSelection)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_tabSelection)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, smartHome);
void (* EditBox_set_smartHome)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_smartHome)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, autoEmpty);
void (* EditBox_set_autoEmpty)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_autoEmpty)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, noCaret);
void (* EditBox_set_noCaret)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_noCaret)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, maxLineSize);
void (* EditBox_set_maxLineSize)(C(EditBox) e, int value);
int (* EditBox_get_maxLineSize)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, maxNumLines);
void (* EditBox_set_maxNumLines)(C(EditBox) e, int value);
int (* EditBox_get_maxNumLines)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, useTab);
void (* EditBox_set_useTab)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_useTab)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, syntaxHighlighting);
void (* EditBox_set_syntaxHighlighting)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_syntaxHighlighting)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, noSelect);
void (* EditBox_set_noSelect)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_noSelect)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, allCaps);
void (* EditBox_set_allCaps)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_allCaps)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, autoSize);
void (* EditBox_set_autoSize)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_autoSize)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, wrap);
void (* EditBox_set_wrap)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_wrap)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, numLines);
int (* EditBox_get_numLines)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, lineNumber);
int (* EditBox_get_lineNumber)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, column);
int (* EditBox_get_column)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, charPos);
int (* EditBox_get_charPos)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, firstLine);
C(EditLine) * (* EditBox_get_firstLine)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, lastLine);
C(EditLine) * (* EditBox_get_lastLine)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, line);
C(EditLine) * (* EditBox_get_line)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, contents);
void (* EditBox_set_contents)(C(EditBox) e, const char * value);
const char * (* EditBox_get_contents)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, overwrite);
C(bool) (* EditBox_get_overwrite)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, caretFollowsScrolling);
void (* EditBox_set_caretFollowsScrolling)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_caretFollowsScrolling)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, multiLineContents);
char * (* EditBox_get_multiLineContents)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, selectionColor);
void (* EditBox_set_selectionColor)(C(EditBox) e, C(Color) value);
C(Color) (* EditBox_get_selectionColor)(C(EditBox) e);
bool (* EditBox_isSet_selectionColor)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, selectionText);
void (* EditBox_set_selectionText)(C(EditBox) e, C(Color) value);
C(Color) (* EditBox_get_selectionText)(C(EditBox) e);
bool (* EditBox_isSet_selectionText)(C(EditBox) e);

C(Property) * PROPERTY(EditBox, syntaxColorScheme);
void (* EditBox_set_syntaxColorScheme)(C(EditBox) e, C(SyntaxColorScheme) value);

C(Property) * PROPERTY(EditBox, recordUndoEvent);
void (* EditBox_set_recordUndoEvent)(C(EditBox) e, C(bool) value);
C(bool) (* EditBox_get_recordUndoEvent)(C(EditBox) e);

C(Property) * PROPERTY(EditBoxStream, editBox);
void (* EditBoxStream_set_editBox)(C(EditBoxStream) e, C(EditBox) value);
C(EditBox) (* EditBoxStream_get_editBox)(C(EditBoxStream) e);

C(Property) * PROPERTY(EditLine, text);
void (* EditLine_set_text)(C(EditLine) * e, const char * value);
const char * (* EditLine_get_text)(C(EditLine) * e);

C(Property) * PROPERTY(EditLine, prev);
C(EditLine) * (* EditLine_get_prev)(C(EditLine) * e);

C(Property) * PROPERTY(EditLine, next);
C(EditLine) * (* EditLine_get_next)(C(EditLine) * e);

C(Property) * PROPERTY(EditLine, count);
int (* EditLine_get_count)(C(EditLine) * e);

C(Property) * PROPERTY(EditableSelectorButton, renameable);
void (* EditableSelectorButton_set_renameable)(C(EditableSelectorButton) e, C(bool) value);
C(bool) (* EditableSelectorButton_get_renameable)(C(EditableSelectorButton) e);

C(Property) * PROPERTY(EditableSelectorButton, editBox);
C(EditBox) (* EditableSelectorButton_get_editBox)(C(EditableSelectorButton) e);

C(Property) * PROPERTY(Label, labeledWindow);
void (* Label_set_labeledWindow)(C(Label) l, C(Window) value);
C(Window) (* Label_get_labeledWindow)(C(Label) l);

C(Property) * PROPERTY(Label, isGroupBox);
void (* Label_set_isGroupBox)(C(Label) l, C(bool) value);
C(bool) (* Label_get_isGroupBox)(C(Label) l);

C(Property) * PROPERTY(ListBox, freeSelect);
void (* ListBox_set_freeSelect)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_freeSelect)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, currentRow);
void (* ListBox_set_currentRow)(C(ListBox) l, C(DataRow) value);
C(DataRow) (* ListBox_get_currentRow)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, currentField);
void (* ListBox_set_currentField)(C(ListBox) l, C(DataField) value);
C(DataField) (* ListBox_get_currentField)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, rowHeight);
void (* ListBox_set_rowHeight)(C(ListBox) l, int value);
int (* ListBox_get_rowHeight)(C(ListBox) l);
bool (* ListBox_isSet_rowHeight)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, typingTimeout);
void (* ListBox_set_typingTimeout)(C(ListBox) l, C(Time) value);
C(Time) (* ListBox_get_typingTimeout)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, moveRows);
void (* ListBox_set_moveRows)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_moveRows)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, moveFields);
void (* ListBox_set_moveFields)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_moveFields)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, resizable);
void (* ListBox_set_resizable)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_resizable)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, autoScroll);
void (* ListBox_set_autoScroll)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_autoScroll)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, alwaysHighLight);
void (* ListBox_set_alwaysHighLight)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_alwaysHighLight)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, hasClearHeader);
void (* ListBox_set_hasClearHeader)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_hasClearHeader)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, hasHeader);
void (* ListBox_set_hasHeader)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_hasHeader)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, multiSelect);
void (* ListBox_set_multiSelect)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_multiSelect)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, alwaysEdit);
void (* ListBox_set_alwaysEdit)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_alwaysEdit)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, fullRowSelect);
void (* ListBox_set_fullRowSelect)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_fullRowSelect)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, collapseControl);
void (* ListBox_set_collapseControl)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_collapseControl)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, treeBranches);
void (* ListBox_set_treeBranches)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_treeBranches)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, rootCollapseButton);
void (* ListBox_set_rootCollapseButton)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_rootCollapseButton)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, sortable);
void (* ListBox_set_sortable)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_sortable)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, noDragging);
void (* ListBox_set_noDragging)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_noDragging)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, fillLastField);
void (* ListBox_set_fillLastField)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_fillLastField)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, numSelections);
int (* ListBox_get_numSelections)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, currentIndex);
int (* ListBox_get_currentIndex)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, lastRow);
C(DataRow) (* ListBox_get_lastRow)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, firstRow);
C(DataRow) (* ListBox_get_firstRow)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, rowCount);
int (* ListBox_get_rowCount)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, firstField);
C(DataField) (* ListBox_get_firstField)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, selectionColor);
void (* ListBox_set_selectionColor)(C(ListBox) l, C(Color) value);
C(Color) (* ListBox_get_selectionColor)(C(ListBox) l);
bool (* ListBox_isSet_selectionColor)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, selectionText);
void (* ListBox_set_selectionText)(C(ListBox) l, C(Color) value);
C(Color) (* ListBox_get_selectionText)(C(ListBox) l);
bool (* ListBox_isSet_selectionText)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, stippleColor);
void (* ListBox_set_stippleColor)(C(ListBox) l, C(Color) value);
C(Color) (* ListBox_get_stippleColor)(C(ListBox) l);

C(Property) * PROPERTY(ListBox, expandOnAdd);
void (* ListBox_set_expandOnAdd)(C(ListBox) l, C(bool) value);
C(bool) (* ListBox_get_expandOnAdd)(C(ListBox) l);

C(Property) * PROPERTY(Menu, parent);
void (* Menu_set_parent)(C(Menu) m, C(Menu) value);

C(Property) * PROPERTY(Menu, text);
void (* Menu_set_text)(C(Menu) m, const char * value);

C(Property) * PROPERTY(Menu, hotKey);
void (* Menu_set_hotKey)(C(Menu) m, C(Key) value);

C(Property) * PROPERTY(Menu, hasMargin);
void (* Menu_set_hasMargin)(C(Menu) m, C(bool) value);

C(Property) * PROPERTY(Menu, copyText);
void (* Menu_set_copyText)(C(Menu) m, C(bool) value);

C(Property) * PROPERTY(MenuItem, parent);
void (* MenuItem_set_parent)(C(MenuItem) m, C(Menu) value);

C(Property) * PROPERTY(MenuItem, text);
void (* MenuItem_set_text)(C(MenuItem) m, const char * value);

C(Property) * PROPERTY(MenuItem, hotKey);
void (* MenuItem_set_hotKey)(C(MenuItem) m, C(Key) value);

C(Property) * PROPERTY(MenuItem, accelerator);
void (* MenuItem_set_accelerator)(C(MenuItem) m, C(Key) value);

C(Property) * PROPERTY(MenuItem, checked);
void (* MenuItem_set_checked)(C(MenuItem) m, C(bool) value);
C(bool) (* MenuItem_get_checked)(C(MenuItem) m);

C(Property) * PROPERTY(MenuItem, disabled);
void (* MenuItem_set_disabled)(C(MenuItem) m, C(bool) value);

C(Property) * PROPERTY(MenuItem, checkable);
void (* MenuItem_set_checkable)(C(MenuItem) m, C(bool) value);

C(Property) * PROPERTY(MenuItem, isRadio);
void (* MenuItem_set_isRadio)(C(MenuItem) m, C(bool) value);

C(Property) * PROPERTY(MenuItem, id);
void (* MenuItem_set_id)(C(MenuItem) m, uint64 value);
uint64 (* MenuItem_get_id)(C(MenuItem) m);

C(Property) * PROPERTY(MenuItem, bitmap);
void (* MenuItem_set_bitmap)(C(MenuItem) m, C(BitmapResource) value);
C(BitmapResource) (* MenuItem_get_bitmap)(C(MenuItem) m);

C(Property) * PROPERTY(MenuItem, copyText);
void (* MenuItem_set_copyText)(C(MenuItem) m, C(bool) value);

C(Property) * PROPERTY(MenuItem, bold);
void (* MenuItem_set_bold)(C(MenuItem) m, C(bool) value);
C(bool) (* MenuItem_get_bold)(C(MenuItem) m);

C(Property) * PROPERTY(OldArray, size);
void (* OldArray_set_size)(C(OldArray) o, uint value);
uint (* OldArray_get_size)(C(OldArray) o);

C(Property) * PROPERTY(OldArray, data);
void (* OldArray_set_data)(C(OldArray) o, void * value);

C(Property) * PROPERTY(PaneSplitter, toolSize);
void (* PaneSplitter_set_toolSize)(C(PaneSplitter) p, int value);
int (* PaneSplitter_get_toolSize)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, toolGap);
void (* PaneSplitter_set_toolGap)(C(PaneSplitter) p, int value);
int (* PaneSplitter_get_toolGap)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, leftPane);
void (* PaneSplitter_set_leftPane)(C(PaneSplitter) p, C(Window) value);
C(Window) (* PaneSplitter_get_leftPane)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, rightPane);
void (* PaneSplitter_set_rightPane)(C(PaneSplitter) p, C(Window) value);
C(Window) (* PaneSplitter_get_rightPane)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, topPane);
void (* PaneSplitter_set_topPane)(C(PaneSplitter) p, C(Window) value);
C(Window) (* PaneSplitter_get_topPane)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, bottomPane);
void (* PaneSplitter_set_bottomPane)(C(PaneSplitter) p, C(Window) value);
C(Window) (* PaneSplitter_get_bottomPane)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, scaleSplit);
void (* PaneSplitter_set_scaleSplit)(C(PaneSplitter) p, double value);
double (* PaneSplitter_get_scaleSplit)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, orientation);
void (* PaneSplitter_set_orientation)(C(PaneSplitter) p, C(ScrollDirection) value);
C(ScrollDirection) (* PaneSplitter_get_orientation)(C(PaneSplitter) p);

C(Property) * PROPERTY(PaneSplitter, split);
void (* PaneSplitter_set_split)(C(PaneSplitter) p, int value);
int (* PaneSplitter_get_split)(C(PaneSplitter) p);

C(Property) * PROPERTY(PathBox, editBox);
C(EditBox) (* PathBox_get_editBox)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, typeExpected);
void (* PathBox_set_typeExpected)(C(PathBox) p, C(PathTypeExpected) value);

C(Property) * PROPERTY(PathBox, browseDialog);
void (* PathBox_set_browseDialog)(C(PathBox) p, C(FileDialog) value);
C(FileDialog) (* PathBox_get_browseDialog)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, path);
void (* PathBox_set_path)(C(PathBox) p, constString value);
constString (* PathBox_get_path)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, slashPath);
C(String) (* PathBox_get_slashPath)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, systemPath);
C(String) (* PathBox_get_systemPath)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, selectionColor);
void (* PathBox_set_selectionColor)(C(PathBox) p, C(Color) value);
C(Color) (* PathBox_get_selectionColor)(C(PathBox) p);

C(Property) * PROPERTY(PathBox, selectionText);
void (* PathBox_set_selectionText)(C(PathBox) p, C(Color) value);
C(Color) (* PathBox_get_selectionText)(C(PathBox) p);

C(Property) * PROPERTY(Picture, tint);
void (* Picture_set_tint)(C(Picture) p, C(Color) value);

C(Property) * PROPERTY(Picture, image);
void (* Picture_set_image)(C(Picture) p, C(BitmapResource) value);
C(BitmapResource) (* Picture_get_image)(C(Picture) p);

C(Property) * PROPERTY(Picture, filter);
void (* Picture_set_filter)(C(Picture) p, C(bool) value);
C(bool) (* Picture_get_filter)(C(Picture) p);

C(Property) * PROPERTY(Picture, bitmapImage);
void (* Picture_set_bitmapImage)(C(Picture) p, C(Bitmap) value);

C(Property) * PROPERTY(PopupMenu, menu);
void (* PopupMenu_set_menu)(C(PopupMenu) p, C(Menu) value);
C(Menu) (* PopupMenu_get_menu)(C(PopupMenu) p);

C(Property) * PROPERTY(PopupMenu, isMenuBar);
void (* PopupMenu_set_isMenuBar)(C(PopupMenu) p, C(bool) value);

C(Property) * PROPERTY(PopupMenu, focus);
C(bool) (* PopupMenu_get_focus)(C(PopupMenu) p);

C(Property) * PROPERTY(ProgressBar, progress);
void (* ProgressBar_set_progress)(C(ProgressBar) p, uint value);
uint (* ProgressBar_get_progress)(C(ProgressBar) p);

C(Property) * PROPERTY(ProgressBar, range);
void (* ProgressBar_set_range)(C(ProgressBar) p, uint value);
uint (* ProgressBar_get_range)(C(ProgressBar) p);

C(Property) * PROPERTY(ScrollBar, direction);
void (* ScrollBar_set_direction)(C(ScrollBar) s, C(ScrollDirection) value);
C(ScrollDirection) (* ScrollBar_get_direction)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, windowOwned);
void (* ScrollBar_set_windowOwned)(C(ScrollBar) s, C(bool) value);

C(Property) * PROPERTY(ScrollBar, snap);
void (* ScrollBar_set_snap)(C(ScrollBar) s, C(bool) value);
C(bool) (* ScrollBar_get_snap)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, range);
void (* ScrollBar_set_range)(C(ScrollBar) s, int value);
int (* ScrollBar_get_range)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, seen);
void (* ScrollBar_set_seen)(C(ScrollBar) s, int value);
int (* ScrollBar_get_seen)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, total);
void (* ScrollBar_set_total)(C(ScrollBar) s, int value);
int (* ScrollBar_get_total)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, lineStep);
void (* ScrollBar_set_lineStep)(C(ScrollBar) s, int value);
int (* ScrollBar_get_lineStep)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, pageStep);
void (* ScrollBar_set_pageStep)(C(ScrollBar) s, int value);
int (* ScrollBar_get_pageStep)(C(ScrollBar) s);

C(Property) * PROPERTY(ScrollBar, thumbPosition);
void (* ScrollBar_set_thumbPosition)(C(ScrollBar) s, int value);
int (* ScrollBar_get_thumbPosition)(C(ScrollBar) s);

C(Property) * PROPERTY(SelectorBar, selectedButton);
C(SelectorButton) (* SelectorBar_get_selectedButton)(C(SelectorBar) s);

C(Property) * PROPERTY(Stacker, direction);
void (* Stacker_set_direction)(C(Stacker) s, C(ScrollDirection) value);
C(ScrollDirection) (* Stacker_get_direction)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, gap);
void (* Stacker_set_gap)(C(Stacker) s, int value);
int (* Stacker_get_gap)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, reverse);
void (* Stacker_set_reverse)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_reverse)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, scrollable);
void (* Stacker_set_scrollable)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_scrollable)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, controls);
C(Array) (* Stacker_get_controls)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, flipper);
void (* Stacker_set_flipper)(C(Stacker) s, C(Window) value);
C(Window) (* Stacker_get_flipper)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, flipSpring);
void (* Stacker_set_flipSpring)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_flipSpring)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, autoSize);
void (* Stacker_set_autoSize)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_autoSize)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, margin);
void (* Stacker_set_margin)(C(Stacker) s, int value);
int (* Stacker_get_margin)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, endButtons);
void (* Stacker_set_endButtons)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_endButtons)(C(Stacker) s);

C(Property) * PROPERTY(Stacker, hoverScroll);
void (* Stacker_set_hoverScroll)(C(Stacker) s, C(bool) value);
C(bool) (* Stacker_get_hoverScroll)(C(Stacker) s);

C(Property) * PROPERTY(StatusBar, minInfoWidth);
void (* StatusBar_set_minInfoWidth)(C(StatusBar) s, int value);
int (* StatusBar_get_minInfoWidth)(C(StatusBar) s);

C(Property) * PROPERTY(StatusField, statusBar);
void (* StatusField_set_statusBar)(C(StatusField) s, C(StatusBar) value);

C(Property) * PROPERTY(StatusField, color);
void (* StatusField_set_color)(C(StatusField) s, C(Color) value);

C(Property) * PROPERTY(StatusField, backColor);
void (* StatusField_set_backColor)(C(StatusField) s, C(ColorAlpha) value);

C(Property) * PROPERTY(StatusField, bold);
void (* StatusField_set_bold)(C(StatusField) s, C(bool) value);

C(Property) * PROPERTY(StatusField, text);
void (* StatusField_set_text)(C(StatusField) s, const char * value);

C(Property) * PROPERTY(StatusField, width);
void (* StatusField_set_width)(C(StatusField) s, int value);

C(Property) * PROPERTY(SyntaxColorScheme, keywordColors);
void (* SyntaxColorScheme_set_keywordColors)(C(SyntaxColorScheme) s, C(Container) value);
C(Container) (* SyntaxColorScheme_get_keywordColors)(C(SyntaxColorScheme) s);

C(Property) * PROPERTY(Tab, tabControl);
void (* Tab_set_tabControl)(C(Tab) t, C(TabControl) value);
C(TabControl) (* Tab_get_tabControl)(C(Tab) t);

C(Property) * PROPERTY(Tab, isAdded);
C(bool) (* Tab_get_isAdded)(C(Tab) t);

C(Property) * PROPERTY(TabControl, placement);
void (* TabControl_set_placement)(C(TabControl) t, C(TabsPlacement) value);
C(TabsPlacement) (* TabControl_get_placement)(C(TabControl) t);

C(Property) * PROPERTY(TabControl, buttonsOffset);
void (* TabControl_set_buttonsOffset)(C(TabControl) t, int value);
int (* TabControl_get_buttonsOffset)(C(TabControl) t);

C(Property) * PROPERTY(TabControl, curTab);
void (* TabControl_set_curTab)(C(TabControl) t, C(Tab) value);
C(Tab) (* TabControl_get_curTab)(C(TabControl) t);

C(Property) * PROPERTY(ToolButton, menuItemPtr);
void (* ToolButton_set_menuItemPtr)(C(ToolButton) t, C(MenuItem) * value);

C(Property) * PROPERTY(ToolButton, menuItem);
C(MenuItem) (* ToolButton_get_menuItem)(C(ToolButton) t);

C(Property) * PROPERTY(ToolTip, tip);
void (* ToolTip_set_tip)(C(ToolTip) t, constString value);
constString (* ToolTip_get_tip)(C(ToolTip) t);

C(Property) * PROPERTY(ColorPicker, color);
void (* ColorPicker_set_color)(C(ColorPicker) c, C(Color) value);
C(Color) (* ColorPicker_get_color)(C(ColorPicker) c);

C(Property) * PROPERTY(ColorPicker, hasAlpha);
void (* ColorPicker_set_hasAlpha)(C(ColorPicker) c, C(bool) value);
C(bool) (* ColorPicker_get_hasAlpha)(C(ColorPicker) c);

C(Property) * PROPERTY(CreateDirectoryDialog, currentDirectory);
void (* CreateDirectoryDialog_set_currentDirectory)(C(CreateDirectoryDialog) c, const char * value);
const char * (* CreateDirectoryDialog_get_currentDirectory)(C(CreateDirectoryDialog) c);

C(Property) * PROPERTY(FileDialog, type);
void (* FileDialog_set_type)(C(FileDialog) f, C(FileDialogType) value);
C(FileDialogType) (* FileDialog_get_type)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, filePath);
void (* FileDialog_set_filePath)(C(FileDialog) f, const char * value);
const char * (* FileDialog_get_filePath)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, currentDirectory);
void (* FileDialog_set_currentDirectory)(C(FileDialog) f, const char * value);
const char * (* FileDialog_get_currentDirectory)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, filters);
void (* FileDialog_set_filters)(C(FileDialog) f, C(FileFilter) * value);
C(FileFilter) * (* FileDialog_get_filters)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, types);
void (* FileDialog_set_types)(C(FileDialog) f, C(FileType) * value);
C(FileType) * (* FileDialog_get_types)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, sizeFilters);
void (* FileDialog_set_sizeFilters)(C(FileDialog) f, int value);
int (* FileDialog_get_sizeFilters)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, sizeTypes);
void (* FileDialog_set_sizeTypes)(C(FileDialog) f, int value);
int (* FileDialog_get_sizeTypes)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, filter);
void (* FileDialog_set_filter)(C(FileDialog) f, int value);
int (* FileDialog_get_filter)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, fileType);
void (* FileDialog_set_fileType)(C(FileDialog) f, int value);
int (* FileDialog_get_fileType)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, mayNotExist);
void (* FileDialog_set_mayNotExist)(C(FileDialog) f, C(bool) value);
C(bool) (* FileDialog_get_mayNotExist)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, numSelections);
int (* FileDialog_get_numSelections)(C(FileDialog) f);

C(Property) * PROPERTY(FileDialog, multiFilePaths);
const char ** (* FileDialog_get_multiFilePaths)(C(FileDialog) f);

C(Property) * PROPERTY(FileNameType, isFolderType);
C(bool) (* FileNameType_get_isFolderType)(C(FileNameType) f);

C(Property) * PROPERTY(FileNameType, isFileType);
C(bool) (* FileNameType_get_isFileType)(C(FileNameType) f);

C(Property) * PROPERTY(FindDialog, editBox);
void (* FindDialog_set_editBox)(C(FindDialog) f, C(EditBox) value);

C(Property) * PROPERTY(FindDialog, searchString);
void (* FindDialog_set_searchString)(C(FindDialog) f, const char * value);
const char * (* FindDialog_get_searchString)(C(FindDialog) f);

C(Property) * PROPERTY(FindDialog, wholeWord);
void (* FindDialog_set_wholeWord)(C(FindDialog) f, C(bool) value);
C(bool) (* FindDialog_get_wholeWord)(C(FindDialog) f);

C(Property) * PROPERTY(FindDialog, matchCase);
void (* FindDialog_set_matchCase)(C(FindDialog) f, C(bool) value);
C(bool) (* FindDialog_get_matchCase)(C(FindDialog) f);

C(Property) * PROPERTY(FindDialog, searchUp);
void (* FindDialog_set_searchUp)(C(FindDialog) f, C(bool) value);
C(bool) (* FindDialog_get_searchUp)(C(FindDialog) f);

C(Property) * PROPERTY(GoToDialog, line);
void (* GoToDialog_set_line)(C(GoToDialog) g, int value);
int (* GoToDialog_get_line)(C(GoToDialog) g);

C(Property) * PROPERTY(GoToDialog, editBox);
void (* GoToDialog_set_editBox)(C(GoToDialog) g, C(EditBox) value);
C(EditBox) (* GoToDialog_get_editBox)(C(GoToDialog) g);

C(Property) * PROPERTY(MessageBox, type);
void (* MessageBox_set_type)(C(MessageBox) m, C(MessageBoxType) value);

C(Property) * PROPERTY(MessageBox, contents);
void (* MessageBox_set_contents)(C(MessageBox) m, const char * value);

C(Property) * PROPERTY(ReplaceDialog, editBox);
void (* ReplaceDialog_set_editBox)(C(ReplaceDialog) r, C(EditBox) value);

C(Property) * PROPERTY(ReplaceDialog, searchString);
void (* ReplaceDialog_set_searchString)(C(ReplaceDialog) r, const char * value);
const char * (* ReplaceDialog_get_searchString)(C(ReplaceDialog) r);

C(Property) * PROPERTY(ReplaceDialog, replaceString);
void (* ReplaceDialog_set_replaceString)(C(ReplaceDialog) r, const char * value);
const char * (* ReplaceDialog_get_replaceString)(C(ReplaceDialog) r);

C(Property) * PROPERTY(ReplaceDialog, wholeWord);
void (* ReplaceDialog_set_wholeWord)(C(ReplaceDialog) r, C(bool) value);
C(bool) (* ReplaceDialog_get_wholeWord)(C(ReplaceDialog) r);

C(Property) * PROPERTY(ReplaceDialog, matchCase);
void (* ReplaceDialog_set_matchCase)(C(ReplaceDialog) r, C(bool) value);
C(bool) (* ReplaceDialog_get_matchCase)(C(ReplaceDialog) r);

C(Property) * PROPERTY(HTTPFile, reuseConnection);
void (* HTTPFile_set_reuseConnection)(C(HTTPFile) h, C(bool) value);
C(bool) (* HTTPFile_get_reuseConnection)(C(HTTPFile) h);

C(Property) * PROPERTY(HTTPFile, contentType);
C(String) (* HTTPFile_get_contentType)(C(HTTPFile) h);

C(Property) * PROPERTY(HTTPFile, contentDisposition);
C(String) (* HTTPFile_get_contentDisposition)(C(HTTPFile) h);

C(Property) * PROPERTY(SSLSocket, autoEstablish);
void (* SSLSocket_set_autoEstablish)(C(SSLSocket) s, C(bool) value);
C(bool) (* SSLSocket_get_autoEstablish)(C(SSLSocket) s);

C(Property) * PROPERTY(Service, port);
void (* Service_set_port)(C(Service) s, int value);
int (* Service_get_port)(C(Service) s);

C(Property) * PROPERTY(Service, firstClient);
C(Socket) (* Service_get_firstClient)(C(Service) s);

C(Property) * PROPERTY(Service, processAlone);
void (* Service_set_processAlone)(C(Service) s, C(bool) value);
C(bool) (* Service_get_processAlone)(C(Service) s);

C(Property) * PROPERTY(Socket, service);
void (* Socket_set_service)(C(Socket) s, C(Service) value);
C(Service) (* Socket_get_service)(C(Socket) s);

C(Property) * PROPERTY(Socket, inetAddress);
const char * (* Socket_get_inetAddress)(C(Socket) s);

C(Property) * PROPERTY(Socket, inetPort);
int (* Socket_get_inetPort)(C(Socket) s);

C(Property) * PROPERTY(Socket, next);
C(Socket) (* Socket_get_next)(C(Socket) s);

C(Property) * PROPERTY(Socket, connected);
C(bool) (* Socket_get_connected)(C(Socket) s);

C(Property) * PROPERTY(Socket, processAlone);
void (* Socket_set_processAlone)(C(Socket) s, C(bool) value);
C(bool) (* Socket_get_processAlone)(C(Socket) s);

C(Property) * PROPERTY(Archive, totalSize);
void (* Archive_set_totalSize)(C(Archive) a, C(FileSize) value);
C(FileSize) (* Archive_get_totalSize)(C(Archive) a);

C(Property) * PROPERTY(Archive, bufferSize);
void (* Archive_set_bufferSize)(C(Archive) a, uint value);

C(Property) * PROPERTY(Archive, bufferRead);
void (* Archive_set_bufferRead)(C(Archive) a, uint value);

C(Property) * PROPERTY(Box, width);
void (* Box_set_width)(C(Box) b, int value);
int (* Box_get_width)(C(Box) b);

C(Property) * PROPERTY(Box, height);
void (* Box_set_height)(C(Box) b, int value);
int (* Box_get_height)(C(Box) b);

C(Property) * PROPERTY(BufferedFile, handle);
void (* BufferedFile_set_handle)(C(BufferedFile) b, C(File) value);
C(File) (* BufferedFile_get_handle)(C(BufferedFile) b);

C(Property) * PROPERTY(BufferedFile, bufferSize);
void (* BufferedFile_set_bufferSize)(C(BufferedFile) b, uint value);
uint (* BufferedFile_get_bufferSize)(C(BufferedFile) b);

C(Property) * PROPERTY(BufferedFile, bufferRead);
void (* BufferedFile_set_bufferRead)(C(BufferedFile) b, uint value);
uint (* BufferedFile_get_bufferRead)(C(BufferedFile) b);

C(Property) * PROPERTY(Centimeters, Meters);
double (* Centimeters_from_Meters)(C(Distance) meters);
C(Distance) (* Centimeters_to_Meters)(double centimeters);

C(Property) * PROPERTY(Condition, name);
void (* Condition_set_name)(C(Condition) * c, const char * value);
const char * (* Condition_get_name)(C(Condition) * c);

C(Property) * PROPERTY(Date, dayOfTheWeek);
C(DayOfTheWeek) (* Date_get_dayOfTheWeek)(C(Date) d);

C(Property) * PROPERTY(DateTime, global);
void (* DateTime_set_global)(C(DateTime) d, const C(DateTime) * value);
void (* DateTime_get_global)(C(DateTime) d, C(DateTime) * value);

C(Property) * PROPERTY(DateTime, local);
void (* DateTime_set_local)(C(DateTime) d, const C(DateTime) * value);
void (* DateTime_get_local)(C(DateTime) d, C(DateTime) * value);

C(Property) * PROPERTY(DateTime, daysSince1970);
int64 (* DateTime_get_daysSince1970)(C(DateTime) d);

C(Property) * PROPERTY(DateTime, SecSince1970);
void (* DateTime_from_SecSince1970)(C(DateTime) d, C(SecSince1970) value);
C(SecSince1970) (* DateTime_to_SecSince1970)(C(DateTime) d);

C(Property) * PROPERTY(DateTime, Date);
void (* DateTime_from_Date)(C(DateTime) d, const C(Date) * value);
void (* DateTime_to_Date)(C(DateTime) d, C(Date) * value);

C(Property) * PROPERTY(Degrees, Radians);
double (* Degrees_from_Radians)(C(Angle) radians);
C(Angle) (* Degrees_to_Radians)(double degrees);

C(Property) * PROPERTY(Feet, Meters);
double (* Feet_from_Meters)(C(Distance) meters);
C(Distance) (* Feet_to_Meters)(double feet);

C(Property) * PROPERTY(File, input);
void (* File_set_input)(C(File) f, void * value);
void * (* File_get_input)(C(File) f);

C(Property) * PROPERTY(File, output);
void (* File_set_output)(C(File) f, void * value);
void * (* File_get_output)(C(File) f);

C(Property) * PROPERTY(File, buffered);
void (* File_set_buffered)(C(File) f, C(bool) value);

C(Property) * PROPERTY(File, eof);
C(bool) (* File_get_eof)(C(File) f);

C(Property) * PROPERTY(FileListing, name);
const char * (* FileListing_get_name)(C(FileListing) f);

C(Property) * PROPERTY(FileListing, path);
const char * (* FileListing_get_path)(C(FileListing) f);

C(Property) * PROPERTY(FileListing, stats);
void (* FileListing_get_stats)(C(FileListing) f, C(FileStats) * value);

C(Property) * PROPERTY(FileMonitor, userData);
void (* FileMonitor_set_userData)(C(FileMonitor) f, void * value);

C(Property) * PROPERTY(FileMonitor, fileChange);
void (* FileMonitor_set_fileChange)(C(FileMonitor) f, C(FileChange) value);

C(Property) * PROPERTY(FileMonitor, fileName);
void (* FileMonitor_set_fileName)(C(FileMonitor) f, const char * value);
const char * (* FileMonitor_get_fileName)(C(FileMonitor) f);

C(Property) * PROPERTY(FileMonitor, directoryName);
void (* FileMonitor_set_directoryName)(C(FileMonitor) f, const char * value);
const char * (* FileMonitor_get_directoryName)(C(FileMonitor) f);

C(Property) * PROPERTY(GlobalSettings, settingsName);
void (* GlobalSettings_set_settingsName)(C(GlobalSettings) g, const char * value);
const char * (* GlobalSettings_get_settingsName)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, settingsExtension);
void (* GlobalSettings_set_settingsExtension)(C(GlobalSettings) g, const char * value);
const char * (* GlobalSettings_get_settingsExtension)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, settingsDirectory);
void (* GlobalSettings_set_settingsDirectory)(C(GlobalSettings) g, const char * value);
const char * (* GlobalSettings_get_settingsDirectory)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, settingsLocation);
void (* GlobalSettings_set_settingsLocation)(C(GlobalSettings) g, const char * value);
const char * (* GlobalSettings_get_settingsLocation)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, settingsFilePath);
void (* GlobalSettings_set_settingsFilePath)(C(GlobalSettings) g, const char * value);
const char * (* GlobalSettings_get_settingsFilePath)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, allowDefaultLocations);
void (* GlobalSettings_set_allowDefaultLocations)(C(GlobalSettings) g, C(bool) value);
C(bool) (* GlobalSettings_get_allowDefaultLocations)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, allUsers);
void (* GlobalSettings_set_allUsers)(C(GlobalSettings) g, C(bool) value);
C(bool) (* GlobalSettings_get_allUsers)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, portable);
void (* GlobalSettings_set_portable)(C(GlobalSettings) g, C(bool) value);
C(bool) (* GlobalSettings_get_portable)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, driver);
void (* GlobalSettings_set_driver)(C(GlobalSettings) g, constString value);
constString (* GlobalSettings_get_driver)(C(GlobalSettings) g);

C(Property) * PROPERTY(GlobalSettings, isGlobalPath);
C(bool) (* GlobalSettings_get_isGlobalPath)(C(GlobalSettings) g);



C(Property) * PROPERTY(RepButton, delay);
void (* RepButton_set_delay)(C(RepButton) r, C(Time) value);

C(Property) * PROPERTY(RepButton, delay0);
void (* RepButton_set_delay0)(C(RepButton) r, C(Time) value);

C(Property) * PROPERTY(SecSince1970, global);
C(SecSince1970) (* SecSince1970_get_global)(int64 s);

C(Property) * PROPERTY(SecSince1970, local);
C(SecSince1970) (* SecSince1970_get_local)(int64 s);


C(Property) * PROPERTY(Semaphore, initCount);
void (* Semaphore_set_initCount)(C(Semaphore) * s, int value);
int (* Semaphore_get_initCount)(C(Semaphore) * s);

C(Property) * PROPERTY(Semaphore, maxCount);
void (* Semaphore_set_maxCount)(C(Semaphore) * s, int value);
int (* Semaphore_get_maxCount)(C(Semaphore) * s);

C(Property) * PROPERTY(TempFile, openMode);
void (* TempFile_set_openMode)(C(TempFile) t, C(FileOpenMode) value);
C(FileOpenMode) (* TempFile_get_openMode)(C(TempFile) t);

C(Property) * PROPERTY(TempFile, buffer);
byte * (* TempFile_get_buffer)(C(TempFile) t);

C(Property) * PROPERTY(Thread, created);
C(bool) (* Thread_get_created)(C(Thread) t);



// Properties




// Classes

// bitClass
C(Class) * CO(Color);
C(Class) * CO(Color444);
C(Class) * CO(Color555);
C(Class) * CO(Color565);
C(Class) * CO(ColorAlpha);
C(Class) * CO(ColorRGBA);
C(Class) * CO(DisplayFlags);
C(Class) * CO(FMTextAlignment);
C(Class) * CO(FontFlags);
C(Class) * CO(GLCapabilities);
C(Class) * CO(LightFlags);
C(Class) * CO(DefaultShaderBits);
C(Class) * CO(FrameTrackBits);
C(Class) * CO(MaterialFlags);
C(Class) * CO(MeshFeatures);
C(Class) * CO(ObjectFlags);
C(Class) * CO(PrimitiveGroupType);
C(Class) * CO(BorderBits);
C(Class) * CO(Key);
C(Class) * CO(Modifiers);
C(Class) * CO(MouseButtons);
C(Class) * CO(SmartKey);
C(Class) * CO(DataDisplayFlags);
C(Class) * CO(ArchiveOpenFlags);
C(Class) * CO(CharCategories);
C(Class) * CO(ErrorCode);
C(Class) * CO(FileAttribs);
C(Class) * CO(FileChange);
C(Class) * CO(MoveFileOptions);
C(Class) * CO(PipeOpenMode);
// enumClass
C(Class) * CO(AlphaWriteMode);
C(Class) * CO(ClearType);
C(Class) * CO(DefinedColor);
C(Class) * CO(FMVerticalAlignment);
C(Class) * CO(FillModeValue);
C(Class) * CO(GradientDirection);
C(Class) * CO(PixelFormat);
C(Class) * CO(RenderState);
C(Class) * CO(Resolution);
C(Class) * CO(SystemColor);
C(Class) * CO(GLBufferContents);
C(Class) * CO(GLBufferUsage);
C(Class) * CO(GLIMTKMode);
C(Class) * CO(GLMSWhatToGet);
C(Class) * CO(LightMode);
C(Class) * CO(MatrixMode);
C(Class) * CO(SwizzleMode);
C(Class) * CO(CameraType);
C(Class) * CO(ClippingPlane);
C(Class) * CO(FovDirection);
C(Class) * CO(FrameTrackType);
C(Class) * CO(FrustumPlacement);
C(Class) * CO(RenderPrimitiveType);
C(Class) * CO(AnchorValueType);
C(Class) * CO(BorderStyle);
C(Class) * CO(CreationActivationOption);
C(Class) * CO(DialogResult);
C(Class) * CO(KeyCode);
C(Class) * CO(PredefinedKey);
C(Class) * CO(SkinBitmap);
C(Class) * CO(SystemCursor);
C(Class) * CO(TouchPointerEvent);
C(Class) * CO(WindowState);
C(Class) * CO(BoxAlignment);
C(Class) * CO(ButtonState);
C(Class) * CO(EditBoxFindResult);
C(Class) * CO(PathTypeExpected);
C(Class) * CO(ScrollBarAction);
C(Class) * CO(ScrollDirection);
C(Class) * CO(TabsPlacement);
C(Class) * CO(FileDialogType);
C(Class) * CO(FileForceExtension);
C(Class) * CO(FileNameType);
C(Class) * CO(MessageBoxType);
C(Class) * CO(DisconnectCode);
C(Class) * CO(SocketType);
C(Class) * CO(ArchiveAddMode);
C(Class) * CO(CharCategory);
C(Class) * CO(DayOfTheWeek);
C(Class) * CO(ErrorLevel);
C(Class) * CO(FileLock);
C(Class) * CO(FileOpenMode);
C(Class) * CO(FileSeekMode);
C(Class) * CO(GlobalSettingType);
C(Class) * CO(GuiErrorCode);
C(Class) * CO(JSONResult);
C(Class) * CO(LoggingMode);
C(Class) * CO(Month);
C(Class) * CO(PredefinedCharCategories);
C(Class) * CO(SetBool);
C(Class) * CO(SettingsIOResult);
C(Class) * CO(SysErrorCode);
C(Class) * CO(ThreadPriority);
// unitClass
C(Class) * CO(Percentage);
C(Class) * CO(Centimeters);
C(Class) * CO(Degrees);
C(Class) * CO(Distance);
C(Class) * CO(Feet);
C(Class) * CO(FileSize);
C(Class) * CO(FileSize64);
C(Class) * CO(Meters);
C(Class) * CO(MinMaxValue);
C(Class) * CO(Radians);
C(Class) * CO(SecSince1970);
C(Class) * CO(Seconds);
C(Class) * CO(Time);
C(Class) * CO(TimeStamp);
C(Class) * CO(TimeStamp32);
// systemClass
// structClass
C(Class) * CO(ColorCMYK);
C(Class) * CO(ColorHSV);
C(Class) * CO(ColorKey);
C(Class) * CO(ColorLab);
C(Class) * CO(ColorRGB);
C(Class) * CO(ColorRGBAf);
C(Class) * CO(FMPathDraw);
C(Class) * CO(FontInfo);
C(Class) * CO(Light);
C(Class) * CO(RenderStateFloat);
C(Class) * CO(GLAB);
C(Class) * CO(GLEAB);
C(Class) * CO(Euler);
C(Class) * CO(FrameKey);
C(Class) * CO(Line);
C(Class) * CO(Matrix);
C(Class) * CO(Plane);
C(Class) * CO(PrimitiveSingle);
C(Class) * CO(Quaternion);
C(Class) * CO(Transform);
C(Class) * CO(Vector3D);
C(Class) * CO(Vector3Df);
C(Class) * CO(Anchor);
C(Class) * CO(AnchorValue);
C(Class) * CO(Extent);
C(Class) * CO(Joystick);
C(Class) * CO(MiddleAnchorValue);
C(Class) * CO(SizeAnchor);
C(Class) * CO(TouchPointerInfo);
C(Class) * CO(BufferLocation);
C(Class) * CO(FileFilter);
C(Class) * CO(FileName);
C(Class) * CO(FileType);
C(Class) * CO(Box);
C(Class) * CO(Date);
C(Class) * CO(DateTime);
C(Class) * CO(FileListing);
C(Class) * CO(FileStats);
C(Class) * CO(Point);
C(Class) * CO(Pointf);
C(Class) * CO(Size);
// noHeadClass
C(Class) * CO(DisplaySystemResPtr);
C(Class) * CO(FMFont);
C(Class) * CO(FaceInfo);
C(Class) * CO(Font);
C(Class) * CO(HitRecord);
C(Class) * CO(CompiledDefaultShader);
C(Class) * CO(CompiledShader);
C(Class) * CO(LFBDisplay);
C(Class) * CO(LFBSurface);
C(Class) * CO(LFBSystem);
C(Class) * CO(FrameTrack);
C(Class) * CO(Material);
C(Class) * CO(Mesh);
C(Class) * CO(Object);
C(Class) * CO(PrimitiveGroup);
C(Class) * CO(Cube);
C(Class) * CO(SkyBox);
C(Class) * CO(Sphere);
C(Class) * CO(ClipBoard);
C(Class) * CO(EditLine);
C(Class) * CO(UndoAction);
C(Class) * CO(Packet);
C(Class) * CO(Condition);
C(Class) * CO(Semaphore);
// normalClass
C(Class) * CO(Bitmap);
C(Class) * CO(BitmapFormat);
C(Class) * CO(BitmapResource);
C(Class) * CO(CubeMap);
C(Class) * CO(Display);
C(Class) * CO(DisplayDriver);
C(Class) * CO(DisplaySystem);
C(Class) * CO(DrawManager);
C(Class) * CO(FontManager);
C(Class) * CO(FontManagerRenderer);
C(Class) * CO(FontRenderer);
C(Class) * CO(FontResource);
C(Class) * CO(Resource);
C(Class) * CO(Surface);
C(Class) * CO(DefaultShader);
C(Class) * CO(LFBDisplayDriver);
C(Class) * CO(Shader);
C(Class) * CO(Camera);
C(Class) * CO(ObjectFormat);
C(Class) * CO(CommonControl);
C(Class) * CO(ControllableWindow);
C(Class) * CO(Cursor);
C(Class) * CO(GuiApplication);
C(Class) * CO(Interface);
C(Class) * CO(MultiLineString);
C(Class) * CO(Skin);
C(Class) * CO(Timer);
C(Class) * CO(Window);
C(Class) * CO(WindowController);
C(Class) * CO(Button);
C(Class) * CO(CalendarControl);
C(Class) * CO(DataBox);
C(Class) * CO(DataField);
C(Class) * CO(DataRow);
C(Class) * CO(DirPath);
C(Class) * CO(DirectoriesBox);
C(Class) * CO(DropBox);
C(Class) * CO(EditBox);
C(Class) * CO(EditBoxStream);
C(Class) * CO(EditableSelectorButton);
C(Class) * CO(FilePath);
C(Class) * CO(Label);
C(Class) * CO(ListBox);
C(Class) * CO(Menu);
C(Class) * CO(MenuDivider);
C(Class) * CO(MenuItem);
C(Class) * CO(MenuPlacement);
C(Class) * CO(OldArray);
C(Class) * CO(PaneSplitter);
C(Class) * CO(PathBox);
C(Class) * CO(Picture);
C(Class) * CO(PopupMenu);
C(Class) * CO(ProgressBar);
C(Class) * CO(SavingDataBox);
C(Class) * CO(ScrollBar);
C(Class) * CO(SelectorBar);
C(Class) * CO(SelectorButton);
C(Class) * CO(Stacker);
C(Class) * CO(StatusBar);
C(Class) * CO(StatusField);
C(Class) * CO(SyntaxColorScheme);
C(Class) * CO(Tab);
C(Class) * CO(TabControl);
C(Class) * CO(ToolBar);
C(Class) * CO(ToolButton);
C(Class) * CO(ToolSeparator);
C(Class) * CO(ToolTip);
C(Class) * CO(UndoBuffer);
C(Class) * CO(ColorPicker);
C(Class) * CO(CreateDirectoryDialog);
C(Class) * CO(FileDialog);
C(Class) * CO(FindDialog);
C(Class) * CO(GoToDialog);
C(Class) * CO(MessageBox);
C(Class) * CO(ReplaceDialog);
C(Class) * CO(WindowList);
C(Class) * CO(TVisionSkin_Window);
C(Class) * CO(WindowsSkin_Button);
C(Class) * CO(WindowsSkin_Window);
C(Class) * CO(DCOMClientObject);
C(Class) * CO(DCOMSendControl);
C(Class) * CO(DCOMServerObject);
C(Class) * CO(DCOMServerSocket);
C(Class) * CO(DCOMService);
C(Class) * CO(FileServerConnection);
C(Class) * CO(HTTPFile);
C(Class) * CO(NetworkClientFile);
C(Class) * CO(SSLSocket);
C(Class) * CO(Service);
C(Class) * CO(Socket);
C(Class) * CO(Archive);
C(Class) * CO(ArchiveDir);
C(Class) * CO(BufferedFile);
C(Class) * CO(ConsoleFile);
C(Class) * CO(DualPipe);
C(Class) * CO(ECONGlobalSettings);
C(Class) * CO(ECONParser);
C(Class) * CO(File);
C(Class) * CO(FileMonitor);
C(Class) * CO(GlobalAppSettings);
C(Class) * CO(GlobalSettings);
C(Class) * CO(GlobalSettingsData);
C(Class) * CO(GlobalSettingsDriver);
C(Class) * CO(JSONGlobalSettings);
C(Class) * CO(JSONParser);
C(Class) * CO(RepButton);
C(Class) * CO(TempFile);
C(Class) * CO(Thread);



// Virtual Method IDs

int M_VTBLID(DisplayDriver, allocateBitmap);
int M_VTBLID(DisplayDriver, allocateIndices);
int M_VTBLID(DisplayDriver, allocateMesh);
int M_VTBLID(DisplayDriver, applyMaterial);
int M_VTBLID(DisplayDriver, area);
int M_VTBLID(DisplayDriver, blit);
int M_VTBLID(DisplayDriver, blitDI);
int M_VTBLID(DisplayDriver, clear);
int M_VTBLID(DisplayDriver, clip);
int M_VTBLID(DisplayDriver, convertBitmap);
int M_VTBLID(DisplayDriver, createDisplay);
int M_VTBLID(DisplayDriver, createDisplaySystem);
int M_VTBLID(DisplayDriver, destroyDisplay);
int M_VTBLID(DisplayDriver, destroyDisplaySystem);
int M_VTBLID(DisplayDriver, displayPosition);
int M_VTBLID(DisplayDriver, displaySize);
int M_VTBLID(DisplayDriver, drawLine);
int M_VTBLID(DisplayDriver, drawPrimitives);
int M_VTBLID(DisplayDriver, drawingChar);
int M_VTBLID(DisplayDriver, endUpdate);
int M_VTBLID(DisplayDriver, filter);
int M_VTBLID(DisplayDriver, filterDI);
int M_VTBLID(DisplayDriver, fontExtent);
int M_VTBLID(DisplayDriver, freeBitmap);
int M_VTBLID(DisplayDriver, freeIndices);
int M_VTBLID(DisplayDriver, freeMesh);
int M_VTBLID(DisplayDriver, getBitmapSurface);
int M_VTBLID(DisplayDriver, getPixel);
int M_VTBLID(DisplayDriver, getSurface);
int M_VTBLID(DisplayDriver, grabScreen);
int M_VTBLID(DisplayDriver, lineStipple);
int M_VTBLID(DisplayDriver, loadFont);
int M_VTBLID(DisplayDriver, lock);
int M_VTBLID(DisplayDriver, lockIndices);
int M_VTBLID(DisplayDriver, lockMesh);
int M_VTBLID(DisplayDriver, lockSystem);
int M_VTBLID(DisplayDriver, makeDDBitmap);
int M_VTBLID(DisplayDriver, nextPage);
int M_VTBLID(DisplayDriver, popMatrix);
int M_VTBLID(DisplayDriver, pushMatrix);
int M_VTBLID(DisplayDriver, putPixel);
int M_VTBLID(DisplayDriver, rectangle);
int M_VTBLID(DisplayDriver, releaseSurface);
int M_VTBLID(DisplayDriver, restorePalette);
int M_VTBLID(DisplayDriver, scroll);
int M_VTBLID(DisplayDriver, selectMesh);
int M_VTBLID(DisplayDriver, setBackground);
int M_VTBLID(DisplayDriver, setBlitTint);
int M_VTBLID(DisplayDriver, setCamera);
int M_VTBLID(DisplayDriver, setForeground);
int M_VTBLID(DisplayDriver, setLight);
int M_VTBLID(DisplayDriver, setPalette);
int M_VTBLID(DisplayDriver, setRenderState);
int M_VTBLID(DisplayDriver, setTransform);
int M_VTBLID(DisplayDriver, startUpdate);
int M_VTBLID(DisplayDriver, stretch);
int M_VTBLID(DisplayDriver, stretchDI);
int M_VTBLID(DisplayDriver, textExtent);
int M_VTBLID(DisplayDriver, textFont);
int M_VTBLID(DisplayDriver, textOpacity);
int M_VTBLID(DisplayDriver, unloadFont);
int M_VTBLID(DisplayDriver, unlock);
int M_VTBLID(DisplayDriver, unlockIndices);
int M_VTBLID(DisplayDriver, unlockMesh);
int M_VTBLID(DisplayDriver, unlockSystem);
int M_VTBLID(DisplayDriver, update);
int M_VTBLID(DisplayDriver, writeText);

int M_VTBLID(DrawManager, flush);

int M_VTBLID(FontManager, onAtlasFull);

int M_VTBLID(FontManagerRenderer, createTexture);
int M_VTBLID(FontManagerRenderer, drawImage);
int M_VTBLID(FontManagerRenderer, drawImageAlt);
int M_VTBLID(FontManagerRenderer, drawImageCursor);
int M_VTBLID(FontManagerRenderer, drawImageFloat);
int M_VTBLID(FontManagerRenderer, flush);
int M_VTBLID(FontManagerRenderer, init);
int M_VTBLID(FontManagerRenderer, registerImage);
int M_VTBLID(FontManagerRenderer, resetImages);
int M_VTBLID(FontManagerRenderer, resizeTexture);
int M_VTBLID(FontManagerRenderer, setLayer);
int M_VTBLID(FontManagerRenderer, updateTexture);

int M_VTBLID(Shader, bindAttribs);
int M_VTBLID(Shader, getDefinitions);
int M_VTBLID(Shader, registerShader);
int M_VTBLID(Shader, setMaterial);
int M_VTBLID(Shader, updateMatrix);
int M_VTBLID(Shader, uploadUniforms);

int M_VTBLID(GuiApplication, cycle);
int M_VTBLID(GuiApplication, init);
int M_VTBLID(GuiApplication, terminate);

int M_VTBLID(Interface, acquireInput);
int M_VTBLID(Interface, activateRootWindow);
int M_VTBLID(Interface, allocateClipboard);
int M_VTBLID(Interface, clearClipboard);
int M_VTBLID(Interface, createRootWindow);
int M_VTBLID(Interface, destroyRootWindow);
int M_VTBLID(Interface, ensureFullScreen);
int M_VTBLID(Interface, flashRootWindow);
int M_VTBLID(Interface, getCurrentMode);
int M_VTBLID(Interface, getJoystickState);
int M_VTBLID(Interface, getKeyState);
int M_VTBLID(Interface, getMousePosition);
int M_VTBLID(Interface, getMouseState);
int M_VTBLID(Interface, getScreenArea);
int M_VTBLID(Interface, graphicsDrivers);
int M_VTBLID(Interface, initialize);
int M_VTBLID(Interface, loadClipboard);
int M_VTBLID(Interface, lock);
int M_VTBLID(Interface, offsetWindow);
int M_VTBLID(Interface, orderRootWindow);
int M_VTBLID(Interface, positionRootWindow);
int M_VTBLID(Interface, processInput);
int M_VTBLID(Interface, saveClipboard);
int M_VTBLID(Interface, screenMode);
int M_VTBLID(Interface, setCaret);
int M_VTBLID(Interface, setIcon);
int M_VTBLID(Interface, setMouseCapture);
int M_VTBLID(Interface, setMouseCursor);
int M_VTBLID(Interface, setMousePosition);
int M_VTBLID(Interface, setMouseRange);
int M_VTBLID(Interface, setRootWindowCaption);
int M_VTBLID(Interface, setRootWindowColor);
int M_VTBLID(Interface, setRootWindowState);
int M_VTBLID(Interface, setTimerResolution);
int M_VTBLID(Interface, startMoving);
int M_VTBLID(Interface, stopMoving);
int M_VTBLID(Interface, terminate);
int M_VTBLID(Interface, unloadClipboard);
int M_VTBLID(Interface, unlock);
int M_VTBLID(Interface, updateRootWindow);
int M_VTBLID(Interface, wait);

int M_VTBLID(Skin, captionFont);
int M_VTBLID(Skin, cursorsBitmaps);
int M_VTBLID(Skin, getBitmap);
int M_VTBLID(Skin, getDecorationsSize);
int M_VTBLID(Skin, horizontalSBH);
int M_VTBLID(Skin, isMouseMoving);
int M_VTBLID(Skin, isMouseResizing);
int M_VTBLID(Skin, setWindowArea);
int M_VTBLID(Skin, setWindowMinimum);
int M_VTBLID(Skin, showDecorations);
int M_VTBLID(Skin, systemFont);
int M_VTBLID(Skin, updateNonClient);
int M_VTBLID(Skin, verticalSBW);

int M_VTBLID(Timer, delayExpired);

int M_VTBLID(Window, getDecorationsSize);
int M_VTBLID(Window, isInside);
int M_VTBLID(Window, isMouseMoving);
int M_VTBLID(Window, isMouseResizing);
int M_VTBLID(Window, isOpaque);
int M_VTBLID(Window, notifyActivate);
int M_VTBLID(Window, notifyDestroyed);
int M_VTBLID(Window, notifySaved);
int M_VTBLID(Window, onActivate);
int M_VTBLID(Window, onActivateClient);
int M_VTBLID(Window, onApplyGraphics);
int M_VTBLID(Window, onChildAddedOrRemoved);
int M_VTBLID(Window, onChildResized);
int M_VTBLID(Window, onChildVisibilityToggled);
int M_VTBLID(Window, onClose);
int M_VTBLID(Window, onCreate);
int M_VTBLID(Window, onDestroy);
int M_VTBLID(Window, onDestroyed);
int M_VTBLID(Window, onDrawOverChildren);
int M_VTBLID(Window, onFileModified);
int M_VTBLID(Window, onHScroll);
int M_VTBLID(Window, onKeyDown);
int M_VTBLID(Window, onKeyHit);
int M_VTBLID(Window, onKeyUp);
int M_VTBLID(Window, onLeftButtonDown);
int M_VTBLID(Window, onLeftButtonUp);
int M_VTBLID(Window, onLeftDoubleClick);
int M_VTBLID(Window, onLoadGraphics);
int M_VTBLID(Window, onMiddleButtonDown);
int M_VTBLID(Window, onMiddleButtonUp);
int M_VTBLID(Window, onMiddleDoubleClick);
int M_VTBLID(Window, onMouseCaptureLost);
int M_VTBLID(Window, onMouseLeave);
int M_VTBLID(Window, onMouseMove);
int M_VTBLID(Window, onMouseOver);
int M_VTBLID(Window, onMoving);
int M_VTBLID(Window, onMultiTouch);
int M_VTBLID(Window, onPosition);
int M_VTBLID(Window, onPostCreate);
int M_VTBLID(Window, onRedraw);
int M_VTBLID(Window, onResize);
int M_VTBLID(Window, onResizing);
int M_VTBLID(Window, onRightButtonDown);
int M_VTBLID(Window, onRightButtonUp);
int M_VTBLID(Window, onRightDoubleClick);
int M_VTBLID(Window, onSaveFile);
int M_VTBLID(Window, onStateChange);
int M_VTBLID(Window, onSysKeyDown);
int M_VTBLID(Window, onSysKeyHit);
int M_VTBLID(Window, onSysKeyUp);
int M_VTBLID(Window, onUnloadGraphics);
int M_VTBLID(Window, onVScroll);
int M_VTBLID(Window, preShowDecorations);
int M_VTBLID(Window, setBox);
int M_VTBLID(Window, setWindowArea);
int M_VTBLID(Window, setWindowMinimum);
int M_VTBLID(Window, showDecorations);
int M_VTBLID(Window, updateNonClient);

int M_VTBLID(WindowController, onCreate);
int M_VTBLID(WindowController, onKeyDown);
int M_VTBLID(WindowController, onKeyHit);
int M_VTBLID(WindowController, onKeyUp);
int M_VTBLID(WindowController, onLeftButtonDown);
int M_VTBLID(WindowController, onLeftButtonUp);
int M_VTBLID(WindowController, onLeftDoubleClick);
int M_VTBLID(WindowController, onLoadGraphics);
int M_VTBLID(WindowController, onMiddleButtonDown);
int M_VTBLID(WindowController, onMiddleButtonUp);
int M_VTBLID(WindowController, onMiddleDoubleClick);
int M_VTBLID(WindowController, onMouseMove);
int M_VTBLID(WindowController, onMultiTouch);
int M_VTBLID(WindowController, onRedraw);
int M_VTBLID(WindowController, onResize);
int M_VTBLID(WindowController, onRightButtonDown);
int M_VTBLID(WindowController, onRightButtonUp);
int M_VTBLID(WindowController, onRightDoubleClick);
int M_VTBLID(WindowController, onUnloadGraphics);

int M_VTBLID(Button, notifyClicked);
int M_VTBLID(Button, notifyDoubleClick);
int M_VTBLID(Button, notifyMouseLeave);
int M_VTBLID(Button, notifyMouseMove);
int M_VTBLID(Button, notifyMouseOver);
int M_VTBLID(Button, notifyPushed);
int M_VTBLID(Button, notifyReleased);

int M_VTBLID(CalendarControl, notifyChanged);

int M_VTBLID(DataBox, notifyChanged);
int M_VTBLID(DataBox, notifyModified);
int M_VTBLID(DataBox, onConfigure);
int M_VTBLID(DataBox, setData);

int M_VTBLID(DirectoriesBox, notifyModified);
int M_VTBLID(DirectoriesBox, notifyPathBoxModified);
int M_VTBLID(DirectoriesBox, onBrowsedDir);
int M_VTBLID(DirectoriesBox, onChangedDir);
int M_VTBLID(DirectoriesBox, onPrepareBrowseDir);

int M_VTBLID(DropBox, notifyClose);
int M_VTBLID(DropBox, notifyHighlight);
int M_VTBLID(DropBox, notifySelect);
int M_VTBLID(DropBox, notifyTextEntry);
int M_VTBLID(DropBox, onCloseDropDown);
int M_VTBLID(DropBox, onDropDown);

int M_VTBLID(EditBox, notifyCaretMove);
int M_VTBLID(EditBox, notifyCharsAdded);
int M_VTBLID(EditBox, notifyCharsDeleted);
int M_VTBLID(EditBox, notifyDoubleClick);
int M_VTBLID(EditBox, notifyDropped);
int M_VTBLID(EditBox, notifyKeyDown);
int M_VTBLID(EditBox, notifyModified);
int M_VTBLID(EditBox, notifyOvrToggle);
int M_VTBLID(EditBox, notifyUnsetModified);
int M_VTBLID(EditBox, notifyUpdate);

int M_VTBLID(EditableSelectorButton, onRename);

int M_VTBLID(ListBox, notifyChanged);
int M_VTBLID(ListBox, notifyCollapse);
int M_VTBLID(ListBox, notifyDoubleClick);
int M_VTBLID(ListBox, notifyEditDone);
int M_VTBLID(ListBox, notifyEdited);
int M_VTBLID(ListBox, notifyEditing);
int M_VTBLID(ListBox, notifyHighlight);
int M_VTBLID(ListBox, notifyKeyDown);
int M_VTBLID(ListBox, notifyKeyHit);
int M_VTBLID(ListBox, notifyModified);
int M_VTBLID(ListBox, notifyMove);
int M_VTBLID(ListBox, notifyMoved);
int M_VTBLID(ListBox, notifyMovedField);
int M_VTBLID(ListBox, notifyReclick);
int M_VTBLID(ListBox, notifyResized);
int M_VTBLID(ListBox, notifyRightClick);
int M_VTBLID(ListBox, notifySelect);
int M_VTBLID(ListBox, notifySort);

int M_VTBLID(MenuItem, notifySelect);

int M_VTBLID(PaneSplitter, notifyResized);

int M_VTBLID(PathBox, notifyModified);

int M_VTBLID(ScrollBar, notifyScrolling);

int M_VTBLID(UndoAction, redo);
int M_VTBLID(UndoAction, undo);

int M_VTBLID(DCOMClientObject, callVirtualMethod);

int M_VTBLID(DCOMServerObject, callMethod);

int M_VTBLID(Service, onAccept);

int M_VTBLID(Socket, onConnect);
int M_VTBLID(Socket, onDisconnect);
int M_VTBLID(Socket, onEstablishConnection);
int M_VTBLID(Socket, onReceive);
int M_VTBLID(Socket, onReceivePacket);
int M_VTBLID(Socket, receiveData);
int M_VTBLID(Socket, sendData);

int M_VTBLID(Archive, clear);
int M_VTBLID(Archive, fileExists);
int M_VTBLID(Archive, fileOpen);
int M_VTBLID(Archive, fileOpenAtPosition);
int M_VTBLID(Archive, openDirectory);
int M_VTBLID(Archive, setBufferRead);
int M_VTBLID(Archive, setBufferSize);

int M_VTBLID(ArchiveDir, addFromFile);
int M_VTBLID(ArchiveDir, addFromFileAtPosition);
int M_VTBLID(ArchiveDir, delete);
int M_VTBLID(ArchiveDir, fileExists);
int M_VTBLID(ArchiveDir, fileOpen);
int M_VTBLID(ArchiveDir, move);
int M_VTBLID(ArchiveDir, openDirectory);
int M_VTBLID(ArchiveDir, rename);

int M_VTBLID(File, close);
int M_VTBLID(File, closeInput);
int M_VTBLID(File, closeOutput);
int M_VTBLID(File, eof);
int M_VTBLID(File, getSize);
int M_VTBLID(File, getc);
int M_VTBLID(File, lock);
int M_VTBLID(File, putc);
int M_VTBLID(File, puts);
int M_VTBLID(File, read);
int M_VTBLID(File, seek);
int M_VTBLID(File, seek64);
int M_VTBLID(File, tell);
int M_VTBLID(File, truncate);
int M_VTBLID(File, unlock);
int M_VTBLID(File, write);

int M_VTBLID(FileMonitor, onDirNotify);
int M_VTBLID(FileMonitor, onFileNotify);

int M_VTBLID(GlobalSettings, load);
int M_VTBLID(GlobalSettings, onAskReloadSettings);
int M_VTBLID(GlobalSettings, save);

int M_VTBLID(GlobalSettingsDriver, load);
int M_VTBLID(GlobalSettingsDriver, save);

int M_VTBLID(Thread, main);




// Global Functions

int (* bestColorMatch)(C(ColorAlpha) * palette, int start, int end, C(Color) rgb);
byte (* getColorDepthShifts)(C(PixelFormat) format);
C(Material) * (* getDefaultMaterial)(void);
C(ColorAlpha) * (* getDefaultPalette)(void);
int (* getDepthBits)(C(PixelFormat) colorDepth);
int (* getResolutionHeight)(C(Resolution) resolution);
int (* getResolutionWidth)(C(Resolution) resolution);
C(Map) (* listAvailableFonts)(void);
C(ColorAlpha) * (* loadPalette)(const char * fileName, const char * type);
void (* paletteGradient)(C(ColorAlpha) * palette, int numColors, C(ColorKey) * keys, int numKeys, float smoothness);
C(FaceInfo) * (* resolveCharFont)(constString faceName, float size, C(FontFlags) flags, constString lang, unichar testChar);
C(Array) (* resolveFont)(constString faceName, float size, C(FontFlags) flags);
void (* setPrintingDocumentName)(constString name);
void (* gLABBindBuffer)(int target, uint buffer);
void (* gLSetupFog)(C(bool) enable);
void (* gLSetupLighting)(C(bool) enable);
void (* gLSetupTexturing)(C(bool) enable);
void (* useSingleGLContext)(C(bool) useSingle);
void (* glimtkBegin)(C(GLIMTKMode) mode);
void (* glimtkColor3f)(float r, float g, float b);
void (* glimtkColor4f)(float r, float g, float b, float a);
void (* glimtkColor4fv)(float * a);
void (* glimtkColor4ub)(byte r, byte g, byte b, byte a);
void (* glimtkEnd)(void);
void (* glimtkNormal3d)(double x, double y, double z);
void (* glimtkNormal3f)(float x, float y, float z);
void (* glimtkNormal3fd)(double * coords);
void (* glimtkNormal3fv)(float * coords);
void (* glimtkRecti)(int a, int b, int c, int d);
void (* glimtkTexCoord2d)(double x, double y);
void (* glimtkTexCoord2f)(float x, float y);
void (* glimtkTexCoord2fv)(float * a);
void (* glimtkTexCoord2i)(int x, int y);
void (* glimtkVertex2d)(double x, double y);
void (* glimtkVertex2f)(float x, float y);
void (* glimtkVertex2i)(int x, int y);
void (* glimtkVertex3d)(double x, double y, double z);
void (* glimtkVertex3dv)(double * coords);
void (* glimtkVertex3f)(float x, float y, float z);
void (* glimtkVertex3fv)(float * coords);
void (* glmsFlushMatrices)(void);
void (* glmsFrustum)(double l, double r, double b, double t, double n, double f);
void (* glmsGetDoublev)(C(GLMSWhatToGet) what, double * i);
double (* glmsGetNearPlane)(void);
void (* glmsLoadIdentity)(void);
void (* glmsLoadMatrix)(C(Matrix) * matrix);
void (* glmsLoadMatrixd)(double * i);
void (* glmsLoadMatrixf)(float * i);
void (* glmsMatrixMode)(C(MatrixMode) mode);
void (* glmsMultMatrixd)(double * i);
void (* glmsOrtho)(double l, double r, double b, double t, double n, double f);
void (* glmsPopMatrix)(void);
void (* glmsPushMatrix)(void);
void (* glmsRotated)(double angle, double x, double y, double z);
void (* glmsScaled)(double a, double b, double c);
void (* glmsSetNearPlane)(double value);
void (* glmsTranslated)(double a, double b, double c);
void (* glsupLightModeli)(uint pname, int param);
void (* glsupLineStipple)(int i, uint16 j);
float (* fastInvSqrt)(float x);
double (* fastInvSqrtDouble)(double x);
void (* applySkin)(C(Class) * c, const char * name, void ** vTbl);
C(bool) (* desktop3DFullScreen)(C(Window) window);
void (* desktop3DGetClipBox)(C(Box) * box);
C(Window) (* desktop3DGetClippedWindow)(void);
void * (* desktop3DGetWindowHandle)(C(Window) window);
void (* desktop3DInitialize)(C(Window) window, void (* setup)(C(Window) window, int w, int h), void (* update)(C(Window) window, C(Box) * box));
C(bool) (* desktop3DMouseMessage)(C(Window) window, uint method, int x, int y, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);
void (* desktop3DSetDesktopDirty)(void);
C(bool) (* desktop3DTitleBarClicked)(C(Window) clickedWindow, int x, int y);
C(bool) (* desktop3DUpdateDisplay)(void);
void (* unapplySkin)(C(Class) * c);
C(FileServerConnection) (* connectToFileServer)(const char * hostName, int port);
C(HTTPFile) (* fileOpenURL)(const char * name);
C(bool) (* getAddressFromName)(const char * hostName, char * inetAddress);
C(bool) (* getHostName)(char * hostName, int size);
C(bool) (* getNameFromAddress)(const char * inetAddress, char * hostName);
C(Archive) (* archiveOpen)(const char * fileName, C(ArchiveOpenFlags) flags);
C(bool) (* archiveQuerySize)(const char * fileName, C(FileSize) * size);
C(bool) (* changeWorkingDir)(const char * buf);
C(bool) (* charMatchCategories)(unichar ch, C(CharCategories) categories);
void (* copyBytes)(void * dest, const void * source, uint count);
void (* copyBytesBy2)(void * dest, const void * source, uint count);
void (* copyBytesBy4)(void * dest, const void * source, uint count);
char * (* copySystemPath)(const char * p);
char * (* copyUnixPath)(const char * p);
void (* createTemporaryDir)(char * tempFileName, const char * _template);
C(File) (* createTemporaryFile)(char * tempFileName, const char * _template);
C(bool) (* deleteFile)(const char * fileName);
C(DualPipe) (* dualPipeOpen)(C(PipeOpenMode) mode, const char * commandLine);
C(DualPipe) (* dualPipeOpenEnv)(C(PipeOpenMode) mode, const char * env, const char * commandLine);
C(DualPipe) (* dualPipeOpenEnvf)(C(PipeOpenMode) mode, const char * env, const char * command, ...);
C(DualPipe) (* dualPipeOpenf)(C(PipeOpenMode) mode, const char * command, ...);
void (* dumpErrors)(C(bool) display);
C(bool) (* execute)(const char * command, ...);
C(bool) (* executeEnv)(const char * env, const char * command, ...);
C(bool) (* executeWait)(const char * command, ...);
C(FileAttribs) (* fileExists)(const char * fileName);
void (* fileFixCase)(char * file);
C(bool) (* fileGetSize)(const char * fileName, C(FileSize) * size);
C(bool) (* fileGetStats)(const char * fileName, C(FileStats) * stats);
C(File) (* fileOpen)(const char * fileName, C(FileOpenMode) mode);
C(BufferedFile) (* fileOpenBuffered)(const char * fileName, C(FileOpenMode) mode);
C(bool) (* fileSetAttribs)(const char * fileName, C(FileAttribs) attribs);
C(bool) (* fileSetTime)(const char * fileName, C(SecSince1970) created, C(SecSince1970) accessed, C(SecSince1970) modified);
C(bool) (* fileTruncate)(const char * fileName, C(FileSize) size);
void (* fillBytes)(void * area, byte value, uint count);
void (* fillBytesBy2)(void * area, uint16 value, uint count);
void (* fillBytesBy4)(void * area, uint value, uint count);
C(bool) (* getAlNum)(const char ** input, char * string, int max);
C(CharCategory) (* getCharCategory)(unichar ch);
char * (* getEnvironment)(const char * envName, char * envValue, int max);
void (* getFreeSpace)(const char * path, C(FileSize64) * size);
uint (* getLastErrorCode)(void);
int (* getRandom)(int lo, int hi);
char * (* getSlashPathBuffer)(char * d, const char * p);
char * (* getSystemPathBuffer)(char * d, const char * p);
C(Time) (* getTime)(void);
char * (* getWorkingDir)(char * buf, int size);
void (* __log)(const char * text);
void (* logErrorCode)(C(ErrorCode) errorCode, const char * details);
void (* __logf)(const char * format, ...);
C(bool) (* makeDir)(const char * path);
void (* makeSlashPath)(char * p);
void (* makeSystemPath)(char * p);
void (* moveBytes)(void * dest, const void * source, uint count);
C(bool) (* moveFile)(const char * source, const char * dest);
C(bool) (* moveFileEx)(const char * source, const char * dest, C(MoveFileOptions) options);
void (* randomSeed)(uint seed);
C(bool) (* removeDir)(const char * path);
C(bool) (* renameFile)(const char * oldName, const char * newName);
void (* resetError)(void);
void (* setEnvironment)(const char * envName, const char * envValue);
void (* setErrorLevel)(C(ErrorLevel) level);
void (* setLoggingMode)(C(LoggingMode) mode, void * where);
C(bool) (* shellOpen)(const char * fileName, ...);
void (* __sleep)(C(Time) seconds);
int (* uTF16BEtoUTF8Buffer)(const uint16 * source, byte * dest, int max);
int (* uTF8toISO8859_1)(const char * source, char * dest, int max);
int (* uTF8toUTF16BufferLen)(const char * source, uint16 * dest, int max, int len);
uint16 * (* uTF8toUTF16Len)(const char * source, int byteCount, int * wordCount);
void (* unsetEnvironment)(const char * envName);
C(bool) (* writeColorAlpha)(C(File) f, C(Class) * type, C(DataValue) * value, int indent, C(bool) eCON);
C(bool) (* writeECONObject)(C(File) f, C(Class) * objectType, void * object, int indent);
C(bool) (* writeJSONObject)(C(File) f, C(Class) * objectType, void * object, int indent);


C(Module) ecere_init(Module fromModule)
{
   C(Module) module = fromModule;
   if(module)
   {
      // Set up all the CO(x) *, property, method, ...


      CO(AlphaWriteMode) = eC_findClass(module, "AlphaWriteMode");
      CO(Bitmap) = eC_findClass(module, "Bitmap");
      if(CO(Bitmap))
      {
         METHOD(Bitmap, allocate) = Class_findMethod(CO(Bitmap), "Allocate", module);
         if(METHOD(Bitmap, allocate))
            Bitmap_allocate = (C(bool) (*)(C(Bitmap), const char *, int, int, int, C(PixelFormat), C(bool)))METHOD(Bitmap, allocate)->function;

         METHOD(Bitmap, allocateDD) = Class_findMethod(CO(Bitmap), "AllocateDD", module);
         if(METHOD(Bitmap, allocateDD))
            Bitmap_allocateDD = (C(bool) (*)(C(Bitmap), C(DisplaySystem), int, int))METHOD(Bitmap, allocateDD)->function;

         METHOD(Bitmap, convert) = Class_findMethod(CO(Bitmap), "Convert", module);
         if(METHOD(Bitmap, convert))
            Bitmap_convert = (C(bool) (*)(C(Bitmap), C(DisplaySystem), C(PixelFormat), C(ColorAlpha) *))METHOD(Bitmap, convert)->function;

         METHOD(Bitmap, copy) = Class_findMethod(CO(Bitmap), "Copy", module);
         if(METHOD(Bitmap, copy))
            Bitmap_copy = (C(bool) (*)(C(Bitmap), C(Bitmap)))METHOD(Bitmap, copy)->function;

         METHOD(Bitmap, free) = Class_findMethod(CO(Bitmap), "Free", module);
         if(METHOD(Bitmap, free))
            Bitmap_free = (void (*)(C(Bitmap)))METHOD(Bitmap, free)->function;

         METHOD(Bitmap, getSurface) = Class_findMethod(CO(Bitmap), "GetSurface", module);
         if(METHOD(Bitmap, getSurface))
            Bitmap_getSurface = (C(Surface) (*)(C(Bitmap), int, int, C(Box) *))METHOD(Bitmap, getSurface)->function;

         METHOD(Bitmap, grab) = Class_findMethod(CO(Bitmap), "Grab", module);
         if(METHOD(Bitmap, grab))
            Bitmap_grab = (void (*)(C(Bitmap), C(Bitmap), int, int))METHOD(Bitmap, grab)->function;

         METHOD(Bitmap, load) = Class_findMethod(CO(Bitmap), "Load", module);
         if(METHOD(Bitmap, load))
            Bitmap_load = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, load)->function;

         METHOD(Bitmap, loadFromFile) = Class_findMethod(CO(Bitmap), "LoadFromFile", module);
         if(METHOD(Bitmap, loadFromFile))
            Bitmap_loadFromFile = (C(bool) (*)(C(Bitmap), C(File), const char *, C(DisplaySystem)))METHOD(Bitmap, loadFromFile)->function;

         METHOD(Bitmap, loadGrayed) = Class_findMethod(CO(Bitmap), "LoadGrayed", module);
         if(METHOD(Bitmap, loadGrayed))
            Bitmap_loadGrayed = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, loadGrayed)->function;

         METHOD(Bitmap, loadMipMaps) = Class_findMethod(CO(Bitmap), "LoadMipMaps", module);
         if(METHOD(Bitmap, loadMipMaps))
            Bitmap_loadMipMaps = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, loadMipMaps)->function;

         METHOD(Bitmap, loadMonochrome) = Class_findMethod(CO(Bitmap), "LoadMonochrome", module);
         if(METHOD(Bitmap, loadMonochrome))
            Bitmap_loadMonochrome = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, loadMonochrome)->function;

         METHOD(Bitmap, loadT) = Class_findMethod(CO(Bitmap), "LoadT", module);
         if(METHOD(Bitmap, loadT))
            Bitmap_loadT = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, loadT)->function;

         METHOD(Bitmap, loadTMipMaps) = Class_findMethod(CO(Bitmap), "LoadTMipMaps", module);
         if(METHOD(Bitmap, loadTMipMaps))
            Bitmap_loadTMipMaps = (C(bool) (*)(C(Bitmap), const char *, const char *, C(DisplaySystem)))METHOD(Bitmap, loadTMipMaps)->function;

         METHOD(Bitmap, makeDD) = Class_findMethod(CO(Bitmap), "MakeDD", module);
         if(METHOD(Bitmap, makeDD))
            Bitmap_makeDD = (C(bool) (*)(C(Bitmap), C(DisplaySystem)))METHOD(Bitmap, makeDD)->function;

         METHOD(Bitmap, makeMipMaps) = Class_findMethod(CO(Bitmap), "MakeMipMaps", module);
         if(METHOD(Bitmap, makeMipMaps))
            Bitmap_makeMipMaps = (C(bool) (*)(C(Bitmap), C(DisplaySystem)))METHOD(Bitmap, makeMipMaps)->function;

         METHOD(Bitmap, quantize) = Class_findMethod(CO(Bitmap), "Quantize", module);
         if(METHOD(Bitmap, quantize))
            Bitmap_quantize = (C(ColorAlpha) * (*)(C(Bitmap), uint, uint))METHOD(Bitmap, quantize)->function;

         METHOD(Bitmap, save) = Class_findMethod(CO(Bitmap), "Save", module);
         if(METHOD(Bitmap, save))
            Bitmap_save = (C(bool) (*)(C(Bitmap), const char *, const char *, void *))METHOD(Bitmap, save)->function;

         METHOD(Bitmap, smoothEdges) = Class_findMethod(CO(Bitmap), "SmoothEdges", module);
         if(METHOD(Bitmap, smoothEdges))
            Bitmap_smoothEdges = (void (*)(C(Bitmap), int))METHOD(Bitmap, smoothEdges)->function;
      }
      CO(BitmapFormat) = eC_findClass(module, "BitmapFormat");
      CO(BitmapResource) = eC_findClass(module, "BitmapResource");
      if(CO(BitmapResource))
      {
         PROPERTY(BitmapResource, fileName) = Class_findProperty(CO(BitmapResource), "fileName", module);
         if(PROPERTY(BitmapResource, fileName))
         {
            BitmapResource_set_fileName = (void *)PROPERTY(BitmapResource, fileName)->Set;
            BitmapResource_get_fileName = (void *)PROPERTY(BitmapResource, fileName)->Get;
         }

         PROPERTY(BitmapResource, grayed) = Class_findProperty(CO(BitmapResource), "grayed", module);
         if(PROPERTY(BitmapResource, grayed))
         {
            BitmapResource_set_grayed = (void *)PROPERTY(BitmapResource, grayed)->Set;
            BitmapResource_get_grayed = (void *)PROPERTY(BitmapResource, grayed)->Get;
         }

         PROPERTY(BitmapResource, monochrome) = Class_findProperty(CO(BitmapResource), "monochrome", module);
         if(PROPERTY(BitmapResource, monochrome))
         {
            BitmapResource_set_monochrome = (void *)PROPERTY(BitmapResource, monochrome)->Set;
            BitmapResource_get_monochrome = (void *)PROPERTY(BitmapResource, monochrome)->Get;
         }

         PROPERTY(BitmapResource, transparent) = Class_findProperty(CO(BitmapResource), "transparent", module);
         if(PROPERTY(BitmapResource, transparent))
         {
            BitmapResource_set_transparent = (void *)PROPERTY(BitmapResource, transparent)->Set;
            BitmapResource_get_transparent = (void *)PROPERTY(BitmapResource, transparent)->Get;
            BitmapResource_isSet_transparent = (void *)PROPERTY(BitmapResource, transparent)->IsSet;
         }

         PROPERTY(BitmapResource, alphaBlend) = Class_findProperty(CO(BitmapResource), "alphaBlend", module);
         if(PROPERTY(BitmapResource, alphaBlend))
         {
            BitmapResource_set_alphaBlend = (void *)PROPERTY(BitmapResource, alphaBlend)->Set;
            BitmapResource_get_alphaBlend = (void *)PROPERTY(BitmapResource, alphaBlend)->Get;
            BitmapResource_isSet_alphaBlend = (void *)PROPERTY(BitmapResource, alphaBlend)->IsSet;
         }

         PROPERTY(BitmapResource, mipMaps) = Class_findProperty(CO(BitmapResource), "mipMaps", module);
         if(PROPERTY(BitmapResource, mipMaps))
         {
            BitmapResource_set_mipMaps = (void *)PROPERTY(BitmapResource, mipMaps)->Set;
            BitmapResource_get_mipMaps = (void *)PROPERTY(BitmapResource, mipMaps)->Get;
            BitmapResource_isSet_mipMaps = (void *)PROPERTY(BitmapResource, mipMaps)->IsSet;
         }

         PROPERTY(BitmapResource, keepData) = Class_findProperty(CO(BitmapResource), "keepData", module);
         if(PROPERTY(BitmapResource, keepData))
         {
            BitmapResource_set_keepData = (void *)PROPERTY(BitmapResource, keepData)->Set;
            BitmapResource_get_keepData = (void *)PROPERTY(BitmapResource, keepData)->Get;
         }

         PROPERTY(BitmapResource, bitmap) = Class_findProperty(CO(BitmapResource), "bitmap", module);
         if(PROPERTY(BitmapResource, bitmap))
         {
            BitmapResource_set_bitmap = (void *)PROPERTY(BitmapResource, bitmap)->Set;
            BitmapResource_get_bitmap = (void *)PROPERTY(BitmapResource, bitmap)->Get;
         }

         PROPERTY(BitmapResource, window) = Class_findProperty(CO(BitmapResource), "window", module);
         if(PROPERTY(BitmapResource, window))
            BitmapResource_set_window = (void *)PROPERTY(BitmapResource, window)->Set;
      }
      CO(ClearType) = eC_findClass(module, "ClearType");
      CO(Color) = eC_findClass(module, "Color");
      if(CO(Color))
      {
         PROPERTY(Color, ColorRGB) = Class_findProperty(CO(Color), "ecere::gfx::ColorRGB", module);
         if(PROPERTY(Color, ColorRGB))
         {
            Color_from_ColorRGB = (void *)PROPERTY(Color, ColorRGB)->Set;
            Color_to_ColorRGB = (void *)PROPERTY(Color, ColorRGB)->Get;
         }
      }
      CO(Color444) = eC_findClass(module, "Color444");
      if(CO(Color444))
      {
         PROPERTY(Color444, Color) = Class_findProperty(CO(Color444), "ecere::gfx::Color", module);
         if(PROPERTY(Color444, Color))
         {
            Color444_from_Color = (void *)PROPERTY(Color444, Color)->Set;
            Color444_to_Color = (void *)PROPERTY(Color444, Color)->Get;
         }
      }
      CO(Color555) = eC_findClass(module, "Color555");
      if(CO(Color555))
      {
         PROPERTY(Color555, Color) = Class_findProperty(CO(Color555), "ecere::gfx::Color", module);
         if(PROPERTY(Color555, Color))
         {
            Color555_from_Color = (void *)PROPERTY(Color555, Color)->Set;
            Color555_to_Color = (void *)PROPERTY(Color555, Color)->Get;
         }
      }
      CO(Color565) = eC_findClass(module, "Color565");
      if(CO(Color565))
      {
         PROPERTY(Color565, Color) = Class_findProperty(CO(Color565), "ecere::gfx::Color", module);
         if(PROPERTY(Color565, Color))
         {
            Color565_from_Color = (void *)PROPERTY(Color565, Color)->Set;
            Color565_to_Color = (void *)PROPERTY(Color565, Color)->Get;
         }
      }
      CO(ColorAlpha) = eC_findClass(module, "ColorAlpha");
      if(CO(ColorAlpha))
      {
         PROPERTY(ColorAlpha, Color) = Class_findProperty(CO(ColorAlpha), "ecere::gfx::Color", module);
         if(PROPERTY(ColorAlpha, Color))
         {
            ColorAlpha_from_Color = (void *)PROPERTY(ColorAlpha, Color)->Set;
            ColorAlpha_to_Color = (void *)PROPERTY(ColorAlpha, Color)->Get;
         }
      }
      CO(ColorCMYK) = eC_findClass(module, "ColorCMYK");
      if(CO(ColorCMYK))
      {
         PROPERTY(ColorCMYK, ColorRGB) = Class_findProperty(CO(ColorCMYK), "ecere::gfx::ColorRGB", module);
         if(PROPERTY(ColorCMYK, ColorRGB))
         {
            ColorCMYK_from_ColorRGB = (void *)PROPERTY(ColorCMYK, ColorRGB)->Set;
            ColorCMYK_to_ColorRGB = (void *)PROPERTY(ColorCMYK, ColorRGB)->Get;
         }
      }
      CO(ColorHSV) = eC_findClass(module, "ColorHSV");
      if(CO(ColorHSV))
      {
         PROPERTY(ColorHSV, ColorRGB) = Class_findProperty(CO(ColorHSV), "ecere::gfx::ColorRGB", module);
         if(PROPERTY(ColorHSV, ColorRGB))
         {
            ColorHSV_from_ColorRGB = (void *)PROPERTY(ColorHSV, ColorRGB)->Set;
            ColorHSV_to_ColorRGB = (void *)PROPERTY(ColorHSV, ColorRGB)->Get;
         }
      }
      CO(ColorKey) = eC_findClass(module, "ColorKey");
      CO(ColorLab) = eC_findClass(module, "ColorLab");
      if(CO(ColorLab))
      {
         PROPERTY(ColorLab, ColorRGB) = Class_findProperty(CO(ColorLab), "ecere::gfx::ColorRGB", module);
         if(PROPERTY(ColorLab, ColorRGB))
         {
            ColorLab_from_ColorRGB = (void *)PROPERTY(ColorLab, ColorRGB)->Set;
            ColorLab_to_ColorRGB = (void *)PROPERTY(ColorLab, ColorRGB)->Get;
         }
      }
      CO(ColorRGB) = eC_findClass(module, "ColorRGB");
      CO(ColorRGBA) = eC_findClass(module, "ColorRGBA");
      if(CO(ColorRGBA))
      {
         PROPERTY(ColorRGBA, ColorAlpha) = Class_findProperty(CO(ColorRGBA), "ecere::gfx::ColorAlpha", module);
         if(PROPERTY(ColorRGBA, ColorAlpha))
         {
            ColorRGBA_from_ColorAlpha = (void *)PROPERTY(ColorRGBA, ColorAlpha)->Set;
            ColorRGBA_to_ColorAlpha = (void *)PROPERTY(ColorRGBA, ColorAlpha)->Get;
         }

         PROPERTY(ColorRGBA, Color) = Class_findProperty(CO(ColorRGBA), "ecere::gfx::Color", module);
         if(PROPERTY(ColorRGBA, Color))
         {
            ColorRGBA_from_Color = (void *)PROPERTY(ColorRGBA, Color)->Set;
            ColorRGBA_to_Color = (void *)PROPERTY(ColorRGBA, Color)->Get;
         }
      }
      CO(ColorRGBAf) = eC_findClass(module, "ColorRGBAf");
      if(CO(ColorRGBAf))
      {
         PROPERTY(ColorRGBAf, ColorAlpha) = Class_findProperty(CO(ColorRGBAf), "ecere::gfx::ColorAlpha", module);
         if(PROPERTY(ColorRGBAf, ColorAlpha))
         {
            ColorRGBAf_from_ColorAlpha = (void *)PROPERTY(ColorRGBAf, ColorAlpha)->Set;
            ColorRGBAf_to_ColorAlpha = (void *)PROPERTY(ColorRGBAf, ColorAlpha)->Get;
         }

         PROPERTY(ColorRGBAf, Color) = Class_findProperty(CO(ColorRGBAf), "ecere::gfx::Color", module);
         if(PROPERTY(ColorRGBAf, Color))
         {
            ColorRGBAf_from_Color = (void *)PROPERTY(ColorRGBAf, Color)->Set;
            ColorRGBAf_to_Color = (void *)PROPERTY(ColorRGBAf, Color)->Get;
         }
      }
      CO(CubeMap) = eC_findClass(module, "CubeMap");
      if(CO(CubeMap))
      {
         METHOD(CubeMap, load) = Class_findMethod(CO(CubeMap), "Load", module);
         if(METHOD(CubeMap, load))
            CubeMap_load = (C(bool) (*)(C(CubeMap), C(DisplaySystem), constString *, constString, C(bool)))METHOD(CubeMap, load)->function;
      }
      CO(DefinedColor) = eC_findClass(module, "DefinedColor");
      CO(Display) = eC_findClass(module, "Display");
      if(CO(Display))
      {
         METHOD(Display, applyMaterial) = Class_findMethod(CO(Display), "ApplyMaterial", module);
         if(METHOD(Display, applyMaterial))
            Display_applyMaterial = (void (*)(C(Display), C(Material) *, C(Mesh) *))METHOD(Display, applyMaterial)->function;

         METHOD(Display, collectHits) = Class_findMethod(CO(Display), "CollectHits", module);
         if(METHOD(Display, collectHits))
            Display_collectHits = (void (*)(C(Display)))METHOD(Display, collectHits)->function;

         METHOD(Display, create) = Class_findMethod(CO(Display), "Create", module);
         if(METHOD(Display, create))
            Display_create = (C(bool) (*)(C(Display), C(DisplaySystem), void *))METHOD(Display, create)->function;

         METHOD(Display, drawMesh) = Class_findMethod(CO(Display), "DrawMesh", module);
         if(METHOD(Display, drawMesh))
            Display_drawMesh = (C(bool) (*)(C(Display), C(Object) *))METHOD(Display, drawMesh)->function;

         METHOD(Display, drawObject) = Class_findMethod(CO(Display), "DrawObject", module);
         if(METHOD(Display, drawObject))
            Display_drawObject = (C(bool) (*)(C(Display), C(Object) *))METHOD(Display, drawObject)->function;

         METHOD(Display, drawPrimitives) = Class_findMethod(CO(Display), "DrawPrimitives", module);
         if(METHOD(Display, drawPrimitives))
            Display_drawPrimitives = (void (*)(C(Display), C(PrimitiveSingle) *, C(Mesh) *))METHOD(Display, drawPrimitives)->function;

         METHOD(Display, drawTranslucency) = Class_findMethod(CO(Display), "DrawTranslucency", module);
         if(METHOD(Display, drawTranslucency))
            Display_drawTranslucency = (void (*)(C(Display)))METHOD(Display, drawTranslucency)->function;

         METHOD(Display, endUpdate) = Class_findMethod(CO(Display), "EndUpdate", module);
         if(METHOD(Display, endUpdate))
            Display_endUpdate = (void (*)(C(Display)))METHOD(Display, endUpdate)->function;

         METHOD(Display, fontExtent) = Class_findMethod(CO(Display), "FontExtent", module);
         if(METHOD(Display, fontExtent))
            Display_fontExtent = (void (*)(C(Display), C(Font) *, const char *, int, int *, int *))METHOD(Display, fontExtent)->function;

         METHOD(Display, fontExtent2) = Class_findMethod(CO(Display), "FontExtent2", module);
         if(METHOD(Display, fontExtent2))
            Display_fontExtent2 = (void (*)(C(Display), C(Font) *, const char *, int, int *, int *, int, int *, int *))METHOD(Display, fontExtent2)->function;

         METHOD(Display, getHits) = Class_findMethod(CO(Display), "GetHits", module);
         if(METHOD(Display, getHits))
            Display_getHits = (int (*)(C(Display), C(OldList) *))METHOD(Display, getHits)->function;

         METHOD(Display, getIntersect) = Class_findMethod(CO(Display), "GetIntersect", module);
         if(METHOD(Display, getIntersect))
            Display_getIntersect = (C(bool) (*)(C(Display), C(Vector3D) *))METHOD(Display, getIntersect)->function;

         METHOD(Display, getSurface) = Class_findMethod(CO(Display), "GetSurface", module);
         if(METHOD(Display, getSurface))
            Display_getSurface = (C(Surface) (*)(C(Display), int, int, C(Box) *))METHOD(Display, getSurface)->function;

         METHOD(Display, grab) = Class_findMethod(CO(Display), "Grab", module);
         if(METHOD(Display, grab))
            Display_grab = (C(bool) (*)(C(Display), C(Bitmap), int, int, int, int))METHOD(Display, grab)->function;

         METHOD(Display, intersectPolygons) = Class_findMethod(CO(Display), "IntersectPolygons", module);
         if(METHOD(Display, intersectPolygons))
            Display_intersectPolygons = (void (*)(C(Display)))METHOD(Display, intersectPolygons)->function;

         METHOD(Display, isObjectVisible) = Class_findMethod(CO(Display), "IsObjectVisible", module);
         if(METHOD(Display, isObjectVisible))
            Display_isObjectVisible = (C(bool) (*)(C(Display), C(Object) *))METHOD(Display, isObjectVisible)->function;

         METHOD(Display, lock) = Class_findMethod(CO(Display), "Lock", module);
         if(METHOD(Display, lock))
            Display_lock = (C(bool) (*)(C(Display), C(bool)))METHOD(Display, lock)->function;

         METHOD(Display, nextPage) = Class_findMethod(CO(Display), "NextPage", module);
         if(METHOD(Display, nextPage))
            Display_nextPage = (void (*)(C(Display)))METHOD(Display, nextPage)->function;

         METHOD(Display, popMatrix) = Class_findMethod(CO(Display), "PopMatrix", module);
         if(METHOD(Display, popMatrix))
            Display_popMatrix = (void (*)(C(Display)))METHOD(Display, popMatrix)->function;

         METHOD(Display, position) = Class_findMethod(CO(Display), "Position", module);
         if(METHOD(Display, position))
            Display_position = (void (*)(C(Display), int, int))METHOD(Display, position)->function;

         METHOD(Display, pushMatrix) = Class_findMethod(CO(Display), "PushMatrix", module);
         if(METHOD(Display, pushMatrix))
            Display_pushMatrix = (void (*)(C(Display)))METHOD(Display, pushMatrix)->function;

         METHOD(Display, resize) = Class_findMethod(CO(Display), "Resize", module);
         if(METHOD(Display, resize))
            Display_resize = (C(bool) (*)(C(Display), int, int))METHOD(Display, resize)->function;

         METHOD(Display, restorePalette) = Class_findMethod(CO(Display), "RestorePalette", module);
         if(METHOD(Display, restorePalette))
            Display_restorePalette = (void (*)(C(Display)))METHOD(Display, restorePalette)->function;

         METHOD(Display, scroll) = Class_findMethod(CO(Display), "Scroll", module);
         if(METHOD(Display, scroll))
            Display_scroll = (void (*)(C(Display), C(Box) *, int, int, C(Extent) *))METHOD(Display, scroll)->function;

         METHOD(Display, selectMesh) = Class_findMethod(CO(Display), "SelectMesh", module);
         if(METHOD(Display, selectMesh))
            Display_selectMesh = (void (*)(C(Display), C(Mesh) *))METHOD(Display, selectMesh)->function;

         METHOD(Display, setCamera) = Class_findMethod(CO(Display), "SetCamera", module);
         if(METHOD(Display, setCamera))
            Display_setCamera = (void (*)(C(Display), C(Surface), C(Camera)))METHOD(Display, setCamera)->function;

         METHOD(Display, setLight) = Class_findMethod(CO(Display), "SetLight", module);
         if(METHOD(Display, setLight))
            Display_setLight = (void (*)(C(Display), int, C(Light) *))METHOD(Display, setLight)->function;

         METHOD(Display, setLights) = Class_findMethod(CO(Display), "SetLights", module);
         if(METHOD(Display, setLights))
            Display_setLights = (void (*)(C(Display), C(Object) *))METHOD(Display, setLights)->function;

         METHOD(Display, setPalette) = Class_findMethod(CO(Display), "SetPalette", module);
         if(METHOD(Display, setPalette))
            Display_setPalette = (void (*)(C(Display), C(ColorAlpha) *, C(bool)))METHOD(Display, setPalette)->function;

         METHOD(Display, setTransform) = Class_findMethod(CO(Display), "SetTransform", module);
         if(METHOD(Display, setTransform))
            Display_setTransform = (void (*)(C(Display), C(Matrix) *, C(bool)))METHOD(Display, setTransform)->function;

         METHOD(Display, startSelection) = Class_findMethod(CO(Display), "StartSelection", module);
         if(METHOD(Display, startSelection))
            Display_startSelection = (void (*)(C(Display), int, int, int, int))METHOD(Display, startSelection)->function;

         METHOD(Display, startUpdate) = Class_findMethod(CO(Display), "StartUpdate", module);
         if(METHOD(Display, startUpdate))
            Display_startUpdate = (void (*)(C(Display)))METHOD(Display, startUpdate)->function;

         METHOD(Display, stopSelection) = Class_findMethod(CO(Display), "StopSelection", module);
         if(METHOD(Display, stopSelection))
            Display_stopSelection = (void (*)(C(Display)))METHOD(Display, stopSelection)->function;

         METHOD(Display, unlock) = Class_findMethod(CO(Display), "Unlock", module);
         if(METHOD(Display, unlock))
            Display_unlock = (void (*)(C(Display)))METHOD(Display, unlock)->function;

         METHOD(Display, update) = Class_findMethod(CO(Display), "Update", module);
         if(METHOD(Display, update))
            Display_update = (void (*)(C(Display), C(Box) *))METHOD(Display, update)->function;

         PROPERTY(Display, fillMode) = Class_findProperty(CO(Display), "fillMode", module);
         if(PROPERTY(Display, fillMode))
            Display_set_fillMode = (void *)PROPERTY(Display, fillMode)->Set;

         PROPERTY(Display, depthTest) = Class_findProperty(CO(Display), "depthTest", module);
         if(PROPERTY(Display, depthTest))
            Display_set_depthTest = (void *)PROPERTY(Display, depthTest)->Set;

         PROPERTY(Display, depthWrite) = Class_findProperty(CO(Display), "depthWrite", module);
         if(PROPERTY(Display, depthWrite))
            Display_set_depthWrite = (void *)PROPERTY(Display, depthWrite)->Set;

         PROPERTY(Display, fogDensity) = Class_findProperty(CO(Display), "fogDensity", module);
         if(PROPERTY(Display, fogDensity))
            Display_set_fogDensity = (void *)PROPERTY(Display, fogDensity)->Set;

         PROPERTY(Display, fogColor) = Class_findProperty(CO(Display), "fogColor", module);
         if(PROPERTY(Display, fogColor))
            Display_set_fogColor = (void *)PROPERTY(Display, fogColor)->Set;

         PROPERTY(Display, blend) = Class_findProperty(CO(Display), "blend", module);
         if(PROPERTY(Display, blend))
            Display_set_blend = (void *)PROPERTY(Display, blend)->Set;

         PROPERTY(Display, ambient) = Class_findProperty(CO(Display), "ambient", module);
         if(PROPERTY(Display, ambient))
            Display_set_ambient = (void *)PROPERTY(Display, ambient)->Set;

         PROPERTY(Display, alphaWrite) = Class_findProperty(CO(Display), "alphaWrite", module);
         if(PROPERTY(Display, alphaWrite))
            Display_set_alphaWrite = (void *)PROPERTY(Display, alphaWrite)->Set;

         PROPERTY(Display, antiAlias) = Class_findProperty(CO(Display), "antiAlias", module);
         if(PROPERTY(Display, antiAlias))
            Display_set_antiAlias = (void *)PROPERTY(Display, antiAlias)->Set;

         PROPERTY(Display, vSync) = Class_findProperty(CO(Display), "vSync", module);
         if(PROPERTY(Display, vSync))
            Display_set_vSync = (void *)PROPERTY(Display, vSync)->Set;

         PROPERTY(Display, pickingPlanes) = Class_findProperty(CO(Display), "pickingPlanes", module);
         if(PROPERTY(Display, pickingPlanes))
            Display_set_pickingPlanes = (void *)PROPERTY(Display, pickingPlanes)->Set;

         PROPERTY(Display, flags) = Class_findProperty(CO(Display), "flags", module);
         if(PROPERTY(Display, flags))
            Display_get_flags = (void *)PROPERTY(Display, flags)->Get;

         PROPERTY(Display, pixelFormat) = Class_findProperty(CO(Display), "pixelFormat", module);
         if(PROPERTY(Display, pixelFormat))
            Display_get_pixelFormat = (void *)PROPERTY(Display, pixelFormat)->Get;

         PROPERTY(Display, alphaBlend) = Class_findProperty(CO(Display), "alphaBlend", module);
         if(PROPERTY(Display, alphaBlend))
         {
            Display_set_alphaBlend = (void *)PROPERTY(Display, alphaBlend)->Set;
            Display_get_alphaBlend = (void *)PROPERTY(Display, alphaBlend)->Get;
         }

         PROPERTY(Display, useSharedMemory) = Class_findProperty(CO(Display), "useSharedMemory", module);
         if(PROPERTY(Display, useSharedMemory))
         {
            Display_set_useSharedMemory = (void *)PROPERTY(Display, useSharedMemory)->Set;
            Display_get_useSharedMemory = (void *)PROPERTY(Display, useSharedMemory)->Get;
         }

         PROPERTY(Display, systemWindow) = Class_findProperty(CO(Display), "systemWindow", module);
         if(PROPERTY(Display, systemWindow))
            Display_get_systemWindow = (void *)PROPERTY(Display, systemWindow)->Get;

         PROPERTY(Display, displaySystem) = Class_findProperty(CO(Display), "displaySystem", module);
         if(PROPERTY(Display, displaySystem))
            Display_get_displaySystem = (void *)PROPERTY(Display, displaySystem)->Get;

         PROPERTY(Display, glCapabilities) = Class_findProperty(CO(Display), "glCapabilities", module);
         if(PROPERTY(Display, glCapabilities))
         {
            Display_set_glCapabilities = (void *)PROPERTY(Display, glCapabilities)->Set;
            Display_get_glCapabilities = (void *)PROPERTY(Display, glCapabilities)->Get;
         }
      }
      CO(DisplayDriver) = eC_findClass(module, "DisplayDriver");
      if(CO(DisplayDriver))
      {
         METHOD(DisplayDriver, allocateBitmap) = Class_findMethod(CO(DisplayDriver), "AllocateBitmap", module);
         if(METHOD(DisplayDriver, allocateBitmap))
            M_VTBLID(DisplayDriver, allocateBitmap) = METHOD(DisplayDriver, allocateBitmap)->vid;

         METHOD(DisplayDriver, allocateIndices) = Class_findMethod(CO(DisplayDriver), "AllocateIndices", module);
         if(METHOD(DisplayDriver, allocateIndices))
            M_VTBLID(DisplayDriver, allocateIndices) = METHOD(DisplayDriver, allocateIndices)->vid;

         METHOD(DisplayDriver, allocateMesh) = Class_findMethod(CO(DisplayDriver), "AllocateMesh", module);
         if(METHOD(DisplayDriver, allocateMesh))
            M_VTBLID(DisplayDriver, allocateMesh) = METHOD(DisplayDriver, allocateMesh)->vid;

         METHOD(DisplayDriver, applyMaterial) = Class_findMethod(CO(DisplayDriver), "ApplyMaterial", module);
         if(METHOD(DisplayDriver, applyMaterial))
            M_VTBLID(DisplayDriver, applyMaterial) = METHOD(DisplayDriver, applyMaterial)->vid;

         METHOD(DisplayDriver, area) = Class_findMethod(CO(DisplayDriver), "Area", module);
         if(METHOD(DisplayDriver, area))
            M_VTBLID(DisplayDriver, area) = METHOD(DisplayDriver, area)->vid;

         METHOD(DisplayDriver, blit) = Class_findMethod(CO(DisplayDriver), "Blit", module);
         if(METHOD(DisplayDriver, blit))
            M_VTBLID(DisplayDriver, blit) = METHOD(DisplayDriver, blit)->vid;

         METHOD(DisplayDriver, blitDI) = Class_findMethod(CO(DisplayDriver), "BlitDI", module);
         if(METHOD(DisplayDriver, blitDI))
            M_VTBLID(DisplayDriver, blitDI) = METHOD(DisplayDriver, blitDI)->vid;

         METHOD(DisplayDriver, clear) = Class_findMethod(CO(DisplayDriver), "Clear", module);
         if(METHOD(DisplayDriver, clear))
            M_VTBLID(DisplayDriver, clear) = METHOD(DisplayDriver, clear)->vid;

         METHOD(DisplayDriver, clip) = Class_findMethod(CO(DisplayDriver), "Clip", module);
         if(METHOD(DisplayDriver, clip))
            M_VTBLID(DisplayDriver, clip) = METHOD(DisplayDriver, clip)->vid;

         METHOD(DisplayDriver, convertBitmap) = Class_findMethod(CO(DisplayDriver), "ConvertBitmap", module);
         if(METHOD(DisplayDriver, convertBitmap))
            M_VTBLID(DisplayDriver, convertBitmap) = METHOD(DisplayDriver, convertBitmap)->vid;

         METHOD(DisplayDriver, createDisplay) = Class_findMethod(CO(DisplayDriver), "CreateDisplay", module);
         if(METHOD(DisplayDriver, createDisplay))
            M_VTBLID(DisplayDriver, createDisplay) = METHOD(DisplayDriver, createDisplay)->vid;

         METHOD(DisplayDriver, createDisplaySystem) = Class_findMethod(CO(DisplayDriver), "CreateDisplaySystem", module);
         if(METHOD(DisplayDriver, createDisplaySystem))
            M_VTBLID(DisplayDriver, createDisplaySystem) = METHOD(DisplayDriver, createDisplaySystem)->vid;

         METHOD(DisplayDriver, destroyDisplay) = Class_findMethod(CO(DisplayDriver), "DestroyDisplay", module);
         if(METHOD(DisplayDriver, destroyDisplay))
            M_VTBLID(DisplayDriver, destroyDisplay) = METHOD(DisplayDriver, destroyDisplay)->vid;

         METHOD(DisplayDriver, destroyDisplaySystem) = Class_findMethod(CO(DisplayDriver), "DestroyDisplaySystem", module);
         if(METHOD(DisplayDriver, destroyDisplaySystem))
            M_VTBLID(DisplayDriver, destroyDisplaySystem) = METHOD(DisplayDriver, destroyDisplaySystem)->vid;

         METHOD(DisplayDriver, displayPosition) = Class_findMethod(CO(DisplayDriver), "DisplayPosition", module);
         if(METHOD(DisplayDriver, displayPosition))
            M_VTBLID(DisplayDriver, displayPosition) = METHOD(DisplayDriver, displayPosition)->vid;

         METHOD(DisplayDriver, displaySize) = Class_findMethod(CO(DisplayDriver), "DisplaySize", module);
         if(METHOD(DisplayDriver, displaySize))
            M_VTBLID(DisplayDriver, displaySize) = METHOD(DisplayDriver, displaySize)->vid;

         METHOD(DisplayDriver, drawLine) = Class_findMethod(CO(DisplayDriver), "DrawLine", module);
         if(METHOD(DisplayDriver, drawLine))
            M_VTBLID(DisplayDriver, drawLine) = METHOD(DisplayDriver, drawLine)->vid;

         METHOD(DisplayDriver, drawPrimitives) = Class_findMethod(CO(DisplayDriver), "DrawPrimitives", module);
         if(METHOD(DisplayDriver, drawPrimitives))
            M_VTBLID(DisplayDriver, drawPrimitives) = METHOD(DisplayDriver, drawPrimitives)->vid;

         METHOD(DisplayDriver, drawingChar) = Class_findMethod(CO(DisplayDriver), "DrawingChar", module);
         if(METHOD(DisplayDriver, drawingChar))
            M_VTBLID(DisplayDriver, drawingChar) = METHOD(DisplayDriver, drawingChar)->vid;

         METHOD(DisplayDriver, endUpdate) = Class_findMethod(CO(DisplayDriver), "EndUpdate", module);
         if(METHOD(DisplayDriver, endUpdate))
            M_VTBLID(DisplayDriver, endUpdate) = METHOD(DisplayDriver, endUpdate)->vid;

         METHOD(DisplayDriver, filter) = Class_findMethod(CO(DisplayDriver), "Filter", module);
         if(METHOD(DisplayDriver, filter))
            M_VTBLID(DisplayDriver, filter) = METHOD(DisplayDriver, filter)->vid;

         METHOD(DisplayDriver, filterDI) = Class_findMethod(CO(DisplayDriver), "FilterDI", module);
         if(METHOD(DisplayDriver, filterDI))
            M_VTBLID(DisplayDriver, filterDI) = METHOD(DisplayDriver, filterDI)->vid;

         METHOD(DisplayDriver, fontExtent) = Class_findMethod(CO(DisplayDriver), "FontExtent", module);
         if(METHOD(DisplayDriver, fontExtent))
            M_VTBLID(DisplayDriver, fontExtent) = METHOD(DisplayDriver, fontExtent)->vid;

         METHOD(DisplayDriver, freeBitmap) = Class_findMethod(CO(DisplayDriver), "FreeBitmap", module);
         if(METHOD(DisplayDriver, freeBitmap))
            M_VTBLID(DisplayDriver, freeBitmap) = METHOD(DisplayDriver, freeBitmap)->vid;

         METHOD(DisplayDriver, freeIndices) = Class_findMethod(CO(DisplayDriver), "FreeIndices", module);
         if(METHOD(DisplayDriver, freeIndices))
            M_VTBLID(DisplayDriver, freeIndices) = METHOD(DisplayDriver, freeIndices)->vid;

         METHOD(DisplayDriver, freeMesh) = Class_findMethod(CO(DisplayDriver), "FreeMesh", module);
         if(METHOD(DisplayDriver, freeMesh))
            M_VTBLID(DisplayDriver, freeMesh) = METHOD(DisplayDriver, freeMesh)->vid;

         METHOD(DisplayDriver, getBitmapSurface) = Class_findMethod(CO(DisplayDriver), "GetBitmapSurface", module);
         if(METHOD(DisplayDriver, getBitmapSurface))
            M_VTBLID(DisplayDriver, getBitmapSurface) = METHOD(DisplayDriver, getBitmapSurface)->vid;

         METHOD(DisplayDriver, getPixel) = Class_findMethod(CO(DisplayDriver), "GetPixel", module);
         if(METHOD(DisplayDriver, getPixel))
            M_VTBLID(DisplayDriver, getPixel) = METHOD(DisplayDriver, getPixel)->vid;

         METHOD(DisplayDriver, getSurface) = Class_findMethod(CO(DisplayDriver), "GetSurface", module);
         if(METHOD(DisplayDriver, getSurface))
            M_VTBLID(DisplayDriver, getSurface) = METHOD(DisplayDriver, getSurface)->vid;

         METHOD(DisplayDriver, grabScreen) = Class_findMethod(CO(DisplayDriver), "GrabScreen", module);
         if(METHOD(DisplayDriver, grabScreen))
            M_VTBLID(DisplayDriver, grabScreen) = METHOD(DisplayDriver, grabScreen)->vid;

         METHOD(DisplayDriver, lineStipple) = Class_findMethod(CO(DisplayDriver), "LineStipple", module);
         if(METHOD(DisplayDriver, lineStipple))
            M_VTBLID(DisplayDriver, lineStipple) = METHOD(DisplayDriver, lineStipple)->vid;

         METHOD(DisplayDriver, loadFont) = Class_findMethod(CO(DisplayDriver), "LoadFont", module);
         if(METHOD(DisplayDriver, loadFont))
            M_VTBLID(DisplayDriver, loadFont) = METHOD(DisplayDriver, loadFont)->vid;

         METHOD(DisplayDriver, lock) = Class_findMethod(CO(DisplayDriver), "Lock", module);
         if(METHOD(DisplayDriver, lock))
            M_VTBLID(DisplayDriver, lock) = METHOD(DisplayDriver, lock)->vid;

         METHOD(DisplayDriver, lockIndices) = Class_findMethod(CO(DisplayDriver), "LockIndices", module);
         if(METHOD(DisplayDriver, lockIndices))
            M_VTBLID(DisplayDriver, lockIndices) = METHOD(DisplayDriver, lockIndices)->vid;

         METHOD(DisplayDriver, lockMesh) = Class_findMethod(CO(DisplayDriver), "LockMesh", module);
         if(METHOD(DisplayDriver, lockMesh))
            M_VTBLID(DisplayDriver, lockMesh) = METHOD(DisplayDriver, lockMesh)->vid;

         METHOD(DisplayDriver, lockSystem) = Class_findMethod(CO(DisplayDriver), "LockSystem", module);
         if(METHOD(DisplayDriver, lockSystem))
            M_VTBLID(DisplayDriver, lockSystem) = METHOD(DisplayDriver, lockSystem)->vid;

         METHOD(DisplayDriver, makeDDBitmap) = Class_findMethod(CO(DisplayDriver), "MakeDDBitmap", module);
         if(METHOD(DisplayDriver, makeDDBitmap))
            M_VTBLID(DisplayDriver, makeDDBitmap) = METHOD(DisplayDriver, makeDDBitmap)->vid;

         METHOD(DisplayDriver, nextPage) = Class_findMethod(CO(DisplayDriver), "NextPage", module);
         if(METHOD(DisplayDriver, nextPage))
            M_VTBLID(DisplayDriver, nextPage) = METHOD(DisplayDriver, nextPage)->vid;

         METHOD(DisplayDriver, popMatrix) = Class_findMethod(CO(DisplayDriver), "PopMatrix", module);
         if(METHOD(DisplayDriver, popMatrix))
            M_VTBLID(DisplayDriver, popMatrix) = METHOD(DisplayDriver, popMatrix)->vid;

         METHOD(DisplayDriver, pushMatrix) = Class_findMethod(CO(DisplayDriver), "PushMatrix", module);
         if(METHOD(DisplayDriver, pushMatrix))
            M_VTBLID(DisplayDriver, pushMatrix) = METHOD(DisplayDriver, pushMatrix)->vid;

         METHOD(DisplayDriver, putPixel) = Class_findMethod(CO(DisplayDriver), "PutPixel", module);
         if(METHOD(DisplayDriver, putPixel))
            M_VTBLID(DisplayDriver, putPixel) = METHOD(DisplayDriver, putPixel)->vid;

         METHOD(DisplayDriver, rectangle) = Class_findMethod(CO(DisplayDriver), "Rectangle", module);
         if(METHOD(DisplayDriver, rectangle))
            M_VTBLID(DisplayDriver, rectangle) = METHOD(DisplayDriver, rectangle)->vid;

         METHOD(DisplayDriver, releaseSurface) = Class_findMethod(CO(DisplayDriver), "ReleaseSurface", module);
         if(METHOD(DisplayDriver, releaseSurface))
            M_VTBLID(DisplayDriver, releaseSurface) = METHOD(DisplayDriver, releaseSurface)->vid;

         METHOD(DisplayDriver, restorePalette) = Class_findMethod(CO(DisplayDriver), "RestorePalette", module);
         if(METHOD(DisplayDriver, restorePalette))
            M_VTBLID(DisplayDriver, restorePalette) = METHOD(DisplayDriver, restorePalette)->vid;

         METHOD(DisplayDriver, scroll) = Class_findMethod(CO(DisplayDriver), "Scroll", module);
         if(METHOD(DisplayDriver, scroll))
            M_VTBLID(DisplayDriver, scroll) = METHOD(DisplayDriver, scroll)->vid;

         METHOD(DisplayDriver, selectMesh) = Class_findMethod(CO(DisplayDriver), "SelectMesh", module);
         if(METHOD(DisplayDriver, selectMesh))
            M_VTBLID(DisplayDriver, selectMesh) = METHOD(DisplayDriver, selectMesh)->vid;

         METHOD(DisplayDriver, setBackground) = Class_findMethod(CO(DisplayDriver), "SetBackground", module);
         if(METHOD(DisplayDriver, setBackground))
            M_VTBLID(DisplayDriver, setBackground) = METHOD(DisplayDriver, setBackground)->vid;

         METHOD(DisplayDriver, setBlitTint) = Class_findMethod(CO(DisplayDriver), "SetBlitTint", module);
         if(METHOD(DisplayDriver, setBlitTint))
            M_VTBLID(DisplayDriver, setBlitTint) = METHOD(DisplayDriver, setBlitTint)->vid;

         METHOD(DisplayDriver, setCamera) = Class_findMethod(CO(DisplayDriver), "SetCamera", module);
         if(METHOD(DisplayDriver, setCamera))
            M_VTBLID(DisplayDriver, setCamera) = METHOD(DisplayDriver, setCamera)->vid;

         METHOD(DisplayDriver, setForeground) = Class_findMethod(CO(DisplayDriver), "SetForeground", module);
         if(METHOD(DisplayDriver, setForeground))
            M_VTBLID(DisplayDriver, setForeground) = METHOD(DisplayDriver, setForeground)->vid;

         METHOD(DisplayDriver, setLight) = Class_findMethod(CO(DisplayDriver), "SetLight", module);
         if(METHOD(DisplayDriver, setLight))
            M_VTBLID(DisplayDriver, setLight) = METHOD(DisplayDriver, setLight)->vid;

         METHOD(DisplayDriver, setPalette) = Class_findMethod(CO(DisplayDriver), "SetPalette", module);
         if(METHOD(DisplayDriver, setPalette))
            M_VTBLID(DisplayDriver, setPalette) = METHOD(DisplayDriver, setPalette)->vid;

         METHOD(DisplayDriver, setRenderState) = Class_findMethod(CO(DisplayDriver), "SetRenderState", module);
         if(METHOD(DisplayDriver, setRenderState))
            M_VTBLID(DisplayDriver, setRenderState) = METHOD(DisplayDriver, setRenderState)->vid;

         METHOD(DisplayDriver, setTransform) = Class_findMethod(CO(DisplayDriver), "SetTransform", module);
         if(METHOD(DisplayDriver, setTransform))
            M_VTBLID(DisplayDriver, setTransform) = METHOD(DisplayDriver, setTransform)->vid;

         METHOD(DisplayDriver, startUpdate) = Class_findMethod(CO(DisplayDriver), "StartUpdate", module);
         if(METHOD(DisplayDriver, startUpdate))
            M_VTBLID(DisplayDriver, startUpdate) = METHOD(DisplayDriver, startUpdate)->vid;

         METHOD(DisplayDriver, stretch) = Class_findMethod(CO(DisplayDriver), "Stretch", module);
         if(METHOD(DisplayDriver, stretch))
            M_VTBLID(DisplayDriver, stretch) = METHOD(DisplayDriver, stretch)->vid;

         METHOD(DisplayDriver, stretchDI) = Class_findMethod(CO(DisplayDriver), "StretchDI", module);
         if(METHOD(DisplayDriver, stretchDI))
            M_VTBLID(DisplayDriver, stretchDI) = METHOD(DisplayDriver, stretchDI)->vid;

         METHOD(DisplayDriver, textExtent) = Class_findMethod(CO(DisplayDriver), "TextExtent", module);
         if(METHOD(DisplayDriver, textExtent))
            M_VTBLID(DisplayDriver, textExtent) = METHOD(DisplayDriver, textExtent)->vid;

         METHOD(DisplayDriver, textFont) = Class_findMethod(CO(DisplayDriver), "TextFont", module);
         if(METHOD(DisplayDriver, textFont))
            M_VTBLID(DisplayDriver, textFont) = METHOD(DisplayDriver, textFont)->vid;

         METHOD(DisplayDriver, textOpacity) = Class_findMethod(CO(DisplayDriver), "TextOpacity", module);
         if(METHOD(DisplayDriver, textOpacity))
            M_VTBLID(DisplayDriver, textOpacity) = METHOD(DisplayDriver, textOpacity)->vid;

         METHOD(DisplayDriver, unloadFont) = Class_findMethod(CO(DisplayDriver), "UnloadFont", module);
         if(METHOD(DisplayDriver, unloadFont))
            M_VTBLID(DisplayDriver, unloadFont) = METHOD(DisplayDriver, unloadFont)->vid;

         METHOD(DisplayDriver, unlock) = Class_findMethod(CO(DisplayDriver), "Unlock", module);
         if(METHOD(DisplayDriver, unlock))
            M_VTBLID(DisplayDriver, unlock) = METHOD(DisplayDriver, unlock)->vid;

         METHOD(DisplayDriver, unlockIndices) = Class_findMethod(CO(DisplayDriver), "UnlockIndices", module);
         if(METHOD(DisplayDriver, unlockIndices))
            M_VTBLID(DisplayDriver, unlockIndices) = METHOD(DisplayDriver, unlockIndices)->vid;

         METHOD(DisplayDriver, unlockMesh) = Class_findMethod(CO(DisplayDriver), "UnlockMesh", module);
         if(METHOD(DisplayDriver, unlockMesh))
            M_VTBLID(DisplayDriver, unlockMesh) = METHOD(DisplayDriver, unlockMesh)->vid;

         METHOD(DisplayDriver, unlockSystem) = Class_findMethod(CO(DisplayDriver), "UnlockSystem", module);
         if(METHOD(DisplayDriver, unlockSystem))
            M_VTBLID(DisplayDriver, unlockSystem) = METHOD(DisplayDriver, unlockSystem)->vid;

         METHOD(DisplayDriver, update) = Class_findMethod(CO(DisplayDriver), "Update", module);
         if(METHOD(DisplayDriver, update))
            M_VTBLID(DisplayDriver, update) = METHOD(DisplayDriver, update)->vid;

         METHOD(DisplayDriver, writeText) = Class_findMethod(CO(DisplayDriver), "WriteText", module);
         if(METHOD(DisplayDriver, writeText))
            M_VTBLID(DisplayDriver, writeText) = METHOD(DisplayDriver, writeText)->vid;
      }
      CO(DisplayFlags) = eC_findClass(module, "DisplayFlags");
      CO(DisplaySystem) = eC_findClass(module, "DisplaySystem");
      if(CO(DisplaySystem))
      {
         METHOD(DisplaySystem, addMaterial) = Class_findMethod(CO(DisplaySystem), "AddMaterial", module);
         if(METHOD(DisplaySystem, addMaterial))
            DisplaySystem_addMaterial = (C(bool) (*)(C(DisplaySystem), C(Material) *))METHOD(DisplaySystem, addMaterial)->function;

         METHOD(DisplaySystem, addMesh) = Class_findMethod(CO(DisplaySystem), "AddMesh", module);
         if(METHOD(DisplaySystem, addMesh))
            DisplaySystem_addMesh = (C(OldLink) * (*)(C(DisplaySystem), C(Mesh) *))METHOD(DisplaySystem, addMesh)->function;

         METHOD(DisplaySystem, addNamedMaterial) = Class_findMethod(CO(DisplaySystem), "AddNamedMaterial", module);
         if(METHOD(DisplaySystem, addNamedMaterial))
            DisplaySystem_addNamedMaterial = (C(Material) * (*)(C(DisplaySystem), const char *))METHOD(DisplaySystem, addNamedMaterial)->function;

         METHOD(DisplaySystem, addTexture) = Class_findMethod(CO(DisplaySystem), "AddTexture", module);
         if(METHOD(DisplaySystem, addTexture))
            DisplaySystem_addTexture = (C(NamedLink) * (*)(C(DisplaySystem), const char *, C(Bitmap)))METHOD(DisplaySystem, addTexture)->function;

         METHOD(DisplaySystem, clearMaterials) = Class_findMethod(CO(DisplaySystem), "ClearMaterials", module);
         if(METHOD(DisplaySystem, clearMaterials))
            DisplaySystem_clearMaterials = (void (*)(C(DisplaySystem)))METHOD(DisplaySystem, clearMaterials)->function;

         METHOD(DisplaySystem, clearMeshes) = Class_findMethod(CO(DisplaySystem), "ClearMeshes", module);
         if(METHOD(DisplaySystem, clearMeshes))
            DisplaySystem_clearMeshes = (void (*)(C(DisplaySystem)))METHOD(DisplaySystem, clearMeshes)->function;

         METHOD(DisplaySystem, clearTextures) = Class_findMethod(CO(DisplaySystem), "ClearTextures", module);
         if(METHOD(DisplaySystem, clearTextures))
            DisplaySystem_clearTextures = (void (*)(C(DisplaySystem)))METHOD(DisplaySystem, clearTextures)->function;

         METHOD(DisplaySystem, create) = Class_findMethod(CO(DisplaySystem), "Create", module);
         if(METHOD(DisplaySystem, create))
            DisplaySystem_create = (C(bool) (*)(C(DisplaySystem), const char *, void *, C(bool)))METHOD(DisplaySystem, create)->function;

         METHOD(DisplaySystem, fontExtent) = Class_findMethod(CO(DisplaySystem), "FontExtent", module);
         if(METHOD(DisplaySystem, fontExtent))
            DisplaySystem_fontExtent = (void (*)(C(DisplaySystem), C(Font) *, const char *, int, int *, int *))METHOD(DisplaySystem, fontExtent)->function;

         METHOD(DisplaySystem, fontExtent2) = Class_findMethod(CO(DisplaySystem), "FontExtent2", module);
         if(METHOD(DisplaySystem, fontExtent2))
            DisplaySystem_fontExtent2 = (void (*)(C(DisplaySystem), C(Font) *, const char *, int, int *, int *, int, int *, int *))METHOD(DisplaySystem, fontExtent2)->function;

         METHOD(DisplaySystem, getMaterial) = Class_findMethod(CO(DisplaySystem), "GetMaterial", module);
         if(METHOD(DisplaySystem, getMaterial))
            DisplaySystem_getMaterial = (C(Material) * (*)(C(DisplaySystem), const char *))METHOD(DisplaySystem, getMaterial)->function;

         METHOD(DisplaySystem, getTexture) = Class_findMethod(CO(DisplaySystem), "GetTexture", module);
         if(METHOD(DisplaySystem, getTexture))
            DisplaySystem_getTexture = (C(Bitmap) (*)(C(DisplaySystem), const char *))METHOD(DisplaySystem, getTexture)->function;

         METHOD(DisplaySystem, loadFont) = Class_findMethod(CO(DisplaySystem), "LoadFont", module);
         if(METHOD(DisplaySystem, loadFont))
            DisplaySystem_loadFont = (C(Font) * (*)(C(DisplaySystem), const char *, float, C(FontFlags)))METHOD(DisplaySystem, loadFont)->function;

         METHOD(DisplaySystem, loadOutlineFont) = Class_findMethod(CO(DisplaySystem), "LoadOutlineFont", module);
         if(METHOD(DisplaySystem, loadOutlineFont))
            DisplaySystem_loadOutlineFont = (C(Font) * (*)(C(DisplaySystem), const char *, float, C(FontFlags), float, float))METHOD(DisplaySystem, loadOutlineFont)->function;

         METHOD(DisplaySystem, loadResource) = Class_findMethod(CO(DisplaySystem), "LoadResource", module);
         if(METHOD(DisplaySystem, loadResource))
            DisplaySystem_loadResource = (void * (*)(C(DisplaySystem), C(Resource)))METHOD(DisplaySystem, loadResource)->function;

         METHOD(DisplaySystem, loadResourceFM) = Class_findMethod(CO(DisplaySystem), "LoadResourceFM", module);
         if(METHOD(DisplaySystem, loadResourceFM))
            DisplaySystem_loadResourceFM = (void * (*)(C(DisplaySystem), C(Resource), C(FontManager)))METHOD(DisplaySystem, loadResourceFM)->function;

         METHOD(DisplaySystem, lock) = Class_findMethod(CO(DisplaySystem), "Lock", module);
         if(METHOD(DisplaySystem, lock))
            DisplaySystem_lock = (C(bool) (*)(C(DisplaySystem)))METHOD(DisplaySystem, lock)->function;

         METHOD(DisplaySystem, removeMaterial) = Class_findMethod(CO(DisplaySystem), "RemoveMaterial", module);
         if(METHOD(DisplaySystem, removeMaterial))
            DisplaySystem_removeMaterial = (C(bool) (*)(C(DisplaySystem), C(Material) *))METHOD(DisplaySystem, removeMaterial)->function;

         METHOD(DisplaySystem, removeMesh) = Class_findMethod(CO(DisplaySystem), "RemoveMesh", module);
         if(METHOD(DisplaySystem, removeMesh))
            DisplaySystem_removeMesh = (C(bool) (*)(C(DisplaySystem), C(Mesh) *))METHOD(DisplaySystem, removeMesh)->function;

         METHOD(DisplaySystem, removeTexture) = Class_findMethod(CO(DisplaySystem), "RemoveTexture", module);
         if(METHOD(DisplaySystem, removeTexture))
            DisplaySystem_removeTexture = (C(bool) (*)(C(DisplaySystem), const char *))METHOD(DisplaySystem, removeTexture)->function;

         METHOD(DisplaySystem, unloadFont) = Class_findMethod(CO(DisplaySystem), "UnloadFont", module);
         if(METHOD(DisplaySystem, unloadFont))
            DisplaySystem_unloadFont = (void (*)(C(DisplaySystem), C(Font) *))METHOD(DisplaySystem, unloadFont)->function;

         METHOD(DisplaySystem, unloadResource) = Class_findMethod(CO(DisplaySystem), "UnloadResource", module);
         if(METHOD(DisplaySystem, unloadResource))
            DisplaySystem_unloadResource = (void (*)(C(DisplaySystem), C(Resource), C(DisplaySystemResPtr) *))METHOD(DisplaySystem, unloadResource)->function;

         METHOD(DisplaySystem, unlock) = Class_findMethod(CO(DisplaySystem), "Unlock", module);
         if(METHOD(DisplaySystem, unlock))
            DisplaySystem_unlock = (void (*)(C(DisplaySystem)))METHOD(DisplaySystem, unlock)->function;

         METHOD(DisplaySystem, _LoadResource) = Class_findMethod(CO(DisplaySystem), "_LoadResource", module);
         if(METHOD(DisplaySystem, _LoadResource))
            DisplaySystem__LoadResource = (void * (*)(C(DisplaySystem), C(Resource), void *))METHOD(DisplaySystem, _LoadResource)->function;
      }
      CO(DisplaySystemResPtr) = eC_findClass(module, "DisplaySystemResPtr");
      CO(DrawManager) = eC_findClass(module, "DrawManager");
      if(CO(DrawManager))
      {
         METHOD(DrawManager, clear) = Class_findMethod(CO(DrawManager), "clear", module);
         if(METHOD(DrawManager, clear))
            DrawManager_clear = (void (*)(C(DrawManager)))METHOD(DrawManager, clear)->function;

         METHOD(DrawManager, drawBarrier) = Class_findMethod(CO(DrawManager), "drawBarrier", module);
         if(METHOD(DrawManager, drawBarrier))
            DrawManager_drawBarrier = (void (*)(C(DrawManager)))METHOD(DrawManager, drawBarrier)->function;

         METHOD(DrawManager, drawImage) = Class_findMethod(CO(DrawManager), "drawImage", module);
         if(METHOD(DrawManager, drawImage))
            DrawManager_drawImage = (void (*)(C(DrawManager), int, float, float, float, float, C(ColorAlpha)))METHOD(DrawManager, drawImage)->function;

         METHOD(DrawManager, end) = Class_findMethod(CO(DrawManager), "end", module);
         if(METHOD(DrawManager, end))
            DrawManager_end = (void (*)(C(DrawManager)))METHOD(DrawManager, end)->function;

         METHOD(DrawManager, finish) = Class_findMethod(CO(DrawManager), "finish", module);
         if(METHOD(DrawManager, finish))
            DrawManager_finish = (void (*)(C(DrawManager)))METHOD(DrawManager, finish)->function;

         METHOD(DrawManager, flush) = Class_findMethod(CO(DrawManager), "flush", module);
         if(METHOD(DrawManager, flush))
            M_VTBLID(DrawManager, flush) = METHOD(DrawManager, flush)->vid;

         METHOD(DrawManager, init) = Class_findMethod(CO(DrawManager), "init", module);
         if(METHOD(DrawManager, init))
            DrawManager_init = (C(bool) (*)(C(DrawManager)))METHOD(DrawManager, init)->function;

         METHOD(DrawManager, ready) = Class_findMethod(CO(DrawManager), "ready", module);
         if(METHOD(DrawManager, ready))
            DrawManager_ready = (void (*)(C(DrawManager), int, int))METHOD(DrawManager, ready)->function;

         PROPERTY(DrawManager, renderingFlipped) = Class_findProperty(CO(DrawManager), "renderingFlipped", module);
         if(PROPERTY(DrawManager, renderingFlipped))
            DrawManager_set_renderingFlipped = (void *)PROPERTY(DrawManager, renderingFlipped)->Set;
      }
      CO(FMFont) = eC_findClass(module, "FMFont");
      if(CO(FMFont))
      {
         METHOD(FMFont, setOutline) = Class_findMethod(CO(FMFont), "setOutline", module);
         if(METHOD(FMFont, setOutline))
            FMFont_setOutline = (void (*)(C(FMFont) *, float, float))METHOD(FMFont, setOutline)->function;
      }
      CO(FMPathDraw) = eC_findClass(module, "FMPathDraw");
      CO(FMTextAlignment) = eC_findClass(module, "FMTextAlignment");
      CO(FMVerticalAlignment) = eC_findClass(module, "FMVerticalAlignment");
      CO(FaceInfo) = eC_findClass(module, "FaceInfo");
      CO(FillModeValue) = eC_findClass(module, "FillModeValue");
      CO(Font) = eC_findClass(module, "Font");
      if(CO(Font))
      {
         PROPERTY(Font, ascent) = Class_findProperty(CO(Font), "ascent", module);
         if(PROPERTY(Font, ascent))
            Font_get_ascent = (void *)PROPERTY(Font, ascent)->Get;

         PROPERTY(Font, descent) = Class_findProperty(CO(Font), "descent", module);
         if(PROPERTY(Font, descent))
            Font_get_descent = (void *)PROPERTY(Font, descent)->Get;
      }
      CO(FontFlags) = eC_findClass(module, "FontFlags");
      CO(FontInfo) = eC_findClass(module, "FontInfo");
      CO(FontManager) = eC_findClass(module, "FontManager");
      if(CO(FontManager))
      {
         METHOD(FontManager, addFont) = Class_findMethod(CO(FontManager), "addFont", module);
         if(METHOD(FontManager, addFont))
            FontManager_addFont = (C(FMFont) * (*)(C(FontManager), constString, int))METHOD(FontManager, addFont)->function;

         METHOD(FontManager, addFontData) = Class_findMethod(CO(FontManager), "addFontData", module);
         if(METHOD(FontManager, addFontData))
            FontManager_addFontData = (C(FMFont) * (*)(C(FontManager), byte *, int, int))METHOD(FontManager, addFontData)->function;

         METHOD(FontManager, clearState) = Class_findMethod(CO(FontManager), "clearState", module);
         if(METHOD(FontManager, clearState))
            FontManager_clearState = (void (*)(C(FontManager)))METHOD(FontManager, clearState)->function;

         METHOD(FontManager, create) = Class_findMethod(CO(FontManager), "create", module);
         if(METHOD(FontManager, create))
            FontManager_create = (C(bool) (*)(C(FontManager), int, int, int, int, C(FontManagerRenderer)))METHOD(FontManager, create)->function;

         METHOD(FontManager, drawText) = Class_findMethod(CO(FontManager), "drawText", module);
         if(METHOD(FontManager, drawText))
            FontManager_drawText = (int (*)(C(FontManager), int, int, const char *, int))METHOD(FontManager, drawText)->function;

         METHOD(FontManager, drawTextTruncate) = Class_findMethod(CO(FontManager), "drawTextTruncate", module);
         if(METHOD(FontManager, drawTextTruncate))
            FontManager_drawTextTruncate = (int (*)(C(FontManager), int, int, int, const char *, int, char *, int))METHOD(FontManager, drawTextTruncate)->function;

         METHOD(FontManager, drawTextWithCursor) = Class_findMethod(CO(FontManager), "drawTextWithCursor", module);
         if(METHOD(FontManager, drawTextWithCursor))
            FontManager_drawTextWithCursor = (int (*)(C(FontManager), int, int, const char *, int, int))METHOD(FontManager, drawTextWithCursor)->function;

         METHOD(FontManager, expandAtlas) = Class_findMethod(CO(FontManager), "expandAtlas", module);
         if(METHOD(FontManager, expandAtlas))
            FontManager_expandAtlas = (C(bool) (*)(C(FontManager), int, int))METHOD(FontManager, expandAtlas)->function;

         METHOD(FontManager, flush) = Class_findMethod(CO(FontManager), "flush", module);
         if(METHOD(FontManager, flush))
            FontManager_flush = (void (*)(C(FontManager), C(bool)))METHOD(FontManager, flush)->function;

         METHOD(FontManager, flushUpdate) = Class_findMethod(CO(FontManager), "flushUpdate", module);
         if(METHOD(FontManager, flushUpdate))
            FontManager_flushUpdate = (void (*)(C(FontManager)))METHOD(FontManager, flushUpdate)->function;

         METHOD(FontManager, freeFont) = Class_findMethod(CO(FontManager), "freeFont", module);
         if(METHOD(FontManager, freeFont))
            FontManager_freeFont = (void (*)(C(FontManager), C(FMFont) *))METHOD(FontManager, freeFont)->function;

         METHOD(FontManager, getAtlasSize) = Class_findMethod(CO(FontManager), "getAtlasSize", module);
         if(METHOD(FontManager, getAtlasSize))
            FontManager_getAtlasSize = (void (*)(C(FontManager), int *, int *))METHOD(FontManager, getAtlasSize)->function;

         METHOD(FontManager, getFont) = Class_findMethod(CO(FontManager), "getFont", module);
         if(METHOD(FontManager, getFont))
            FontManager_getFont = (C(FMFont) * (*)(C(FontManager), C(FontResource)))METHOD(FontManager, getFont)->function;

         METHOD(FontManager, getFontExtent) = Class_findMethod(CO(FontManager), "getFontExtent", module);
         if(METHOD(FontManager, getFontExtent))
            FontManager_getFontExtent = (void (*)(C(FontManager), int *, int *))METHOD(FontManager, getFontExtent)->function;

         METHOD(FontManager, getFontLimits) = Class_findMethod(CO(FontManager), "getFontLimits", module);
         if(METHOD(FontManager, getFontLimits))
            FontManager_getFontLimits = (void (*)(C(FontManager), int *, int *))METHOD(FontManager, getFontLimits)->function;

         METHOD(FontManager, getFontLineHeight) = Class_findMethod(CO(FontManager), "getFontLineHeight", module);
         if(METHOD(FontManager, getFontLineHeight))
            FontManager_getFontLineHeight = (int (*)(C(FontManager)))METHOD(FontManager, getFontLineHeight)->function;

         METHOD(FontManager, getTextBounds) = Class_findMethod(CO(FontManager), "getTextBounds", module);
         if(METHOD(FontManager, getTextBounds))
            FontManager_getTextBounds = (int (*)(C(FontManager), int, int, const char *, int, int *))METHOD(FontManager, getTextBounds)->function;

         METHOD(FontManager, getTextNearestOffset) = Class_findMethod(CO(FontManager), "getTextNearestOffset", module);
         if(METHOD(FontManager, getTextNearestOffset))
            FontManager_getTextNearestOffset = (int (*)(C(FontManager), int, const char *, int))METHOD(FontManager, getTextNearestOffset)->function;

         METHOD(FontManager, getTextTruncateOffset) = Class_findMethod(CO(FontManager), "getTextTruncateOffset", module);
         if(METHOD(FontManager, getTextTruncateOffset))
            FontManager_getTextTruncateOffset = (int (*)(C(FontManager), int, const char *, int, int, int *, int *))METHOD(FontManager, getTextTruncateOffset)->function;

         METHOD(FontManager, getTextWidth) = Class_findMethod(CO(FontManager), "getTextWidth", module);
         if(METHOD(FontManager, getTextWidth))
            FontManager_getTextWidth = (int (*)(C(FontManager), const char *, int))METHOD(FontManager, getTextWidth)->function;

         METHOD(FontManager, getTextWidthTruncate) = Class_findMethod(CO(FontManager), "getTextWidthTruncate", module);
         if(METHOD(FontManager, getTextWidthTruncate))
            FontManager_getTextWidthTruncate = (int (*)(C(FontManager), const char *, int, int))METHOD(FontManager, getTextWidthTruncate)->function;

         METHOD(FontManager, getTextureData) = Class_findMethod(CO(FontManager), "getTextureData", module);
         if(METHOD(FontManager, getTextureData))
            FontManager_getTextureData = (const byte * (*)(C(FontManager), int *, int *))METHOD(FontManager, getTextureData)->function;

         METHOD(FontManager, initPathDraw) = Class_findMethod(CO(FontManager), "initPathDraw", module);
         if(METHOD(FontManager, initPathDraw))
            FontManager_initPathDraw = (C(bool) (*)(C(FontManager), C(FMPathDraw) *))METHOD(FontManager, initPathDraw)->function;

         METHOD(FontManager, onAtlasFull) = Class_findMethod(CO(FontManager), "onAtlasFull", module);
         if(METHOD(FontManager, onAtlasFull))
            M_VTBLID(FontManager, onAtlasFull) = METHOD(FontManager, onAtlasFull)->vid;

         METHOD(FontManager, pathDrawCharacter) = Class_findMethod(CO(FontManager), "pathDrawCharacter", module);
         if(METHOD(FontManager, pathDrawCharacter))
            FontManager_pathDrawCharacter = (float (*)(C(FontManager), C(FMPathDraw) *, float, float, float, float, int))METHOD(FontManager, pathDrawCharacter)->function;

         METHOD(FontManager, pathDrawPredictAdvance) = Class_findMethod(CO(FontManager), "pathDrawPredictAdvance", module);
         if(METHOD(FontManager, pathDrawPredictAdvance))
            FontManager_pathDrawPredictAdvance = (float (*)(C(FontManager), C(FMPathDraw) *, unichar))METHOD(FontManager, pathDrawPredictAdvance)->function;

         METHOD(FontManager, popState) = Class_findMethod(CO(FontManager), "popState", module);
         if(METHOD(FontManager, popState))
            FontManager_popState = (void (*)(C(FontManager)))METHOD(FontManager, popState)->function;

         METHOD(FontManager, pushState) = Class_findMethod(CO(FontManager), "pushState", module);
         if(METHOD(FontManager, pushState))
            FontManager_pushState = (void (*)(C(FontManager)))METHOD(FontManager, pushState)->function;

         METHOD(FontManager, removeFont) = Class_findMethod(CO(FontManager), "removeFont", module);
         if(METHOD(FontManager, removeFont))
            FontManager_removeFont = (void (*)(C(FontManager), C(FMFont) *))METHOD(FontManager, removeFont)->function;

         METHOD(FontManager, resetAtlas) = Class_findMethod(CO(FontManager), "resetAtlas", module);
         if(METHOD(FontManager, resetAtlas))
            FontManager_resetAtlas = (C(bool) (*)(C(FontManager), int, int))METHOD(FontManager, resetAtlas)->function;

         METHOD(FontManager, setAlign) = Class_findMethod(CO(FontManager), "setAlign", module);
         if(METHOD(FontManager, setAlign))
            FontManager_setAlign = (void (*)(C(FontManager), int))METHOD(FontManager, setAlign)->function;

         METHOD(FontManager, setFont) = Class_findMethod(CO(FontManager), "setFont", module);
         if(METHOD(FontManager, setFont))
            FontManager_setFont = (void (*)(C(FontManager), C(FMFont) *))METHOD(FontManager, setFont)->function;

         METHOD(FontManager, setFontImageProcessing) = Class_findMethod(CO(FontManager), "setFontImageProcessing", module);
         if(METHOD(FontManager, setFontImageProcessing))
            FontManager_setFontImageProcessing = (void (*)(C(FontManager), C(FMFont) *, void (*)(byte *, int, int, int, int, int, void *), void *))METHOD(FontManager, setFontImageProcessing)->function;

         METHOD(FontManager, setSize) = Class_findMethod(CO(FontManager), "setSize", module);
         if(METHOD(FontManager, setSize))
            FontManager_setSize = (void (*)(C(FontManager), int))METHOD(FontManager, setSize)->function;

         METHOD(FontManager, setState) = Class_findMethod(CO(FontManager), "setState", module);
         if(METHOD(FontManager, setState))
            FontManager_setState = (void (*)(C(FontManager), C(FMFont) *, int, int))METHOD(FontManager, setState)->function;

         METHOD(FontManager, validateTexture) = Class_findMethod(CO(FontManager), "validateTexture", module);
         if(METHOD(FontManager, validateTexture))
            FontManager_validateTexture = (C(bool) (*)(C(FontManager), int *))METHOD(FontManager, validateTexture)->function;

         PROPERTY(FontManager, renderer) = Class_findProperty(CO(FontManager), "renderer", module);
         if(PROPERTY(FontManager, renderer))
         {
            FontManager_set_renderer = (void *)PROPERTY(FontManager, renderer)->Set;
            FontManager_get_renderer = (void *)PROPERTY(FontManager, renderer)->Get;
         }
      }
      CO(FontManagerRenderer) = eC_findClass(module, "FontManagerRenderer");
      if(CO(FontManagerRenderer))
      {
         METHOD(FontManagerRenderer, createTexture) = Class_findMethod(CO(FontManagerRenderer), "createTexture", module);
         if(METHOD(FontManagerRenderer, createTexture))
            M_VTBLID(FontManagerRenderer, createTexture) = METHOD(FontManagerRenderer, createTexture)->vid;

         METHOD(FontManagerRenderer, drawImage) = Class_findMethod(CO(FontManagerRenderer), "drawImage", module);
         if(METHOD(FontManagerRenderer, drawImage))
            M_VTBLID(FontManagerRenderer, drawImage) = METHOD(FontManagerRenderer, drawImage)->vid;

         METHOD(FontManagerRenderer, drawImageAlt) = Class_findMethod(CO(FontManagerRenderer), "drawImageAlt", module);
         if(METHOD(FontManagerRenderer, drawImageAlt))
            M_VTBLID(FontManagerRenderer, drawImageAlt) = METHOD(FontManagerRenderer, drawImageAlt)->vid;

         METHOD(FontManagerRenderer, drawImageCursor) = Class_findMethod(CO(FontManagerRenderer), "drawImageCursor", module);
         if(METHOD(FontManagerRenderer, drawImageCursor))
            M_VTBLID(FontManagerRenderer, drawImageCursor) = METHOD(FontManagerRenderer, drawImageCursor)->vid;

         METHOD(FontManagerRenderer, drawImageFloat) = Class_findMethod(CO(FontManagerRenderer), "drawImageFloat", module);
         if(METHOD(FontManagerRenderer, drawImageFloat))
            M_VTBLID(FontManagerRenderer, drawImageFloat) = METHOD(FontManagerRenderer, drawImageFloat)->vid;

         METHOD(FontManagerRenderer, flush) = Class_findMethod(CO(FontManagerRenderer), "flush", module);
         if(METHOD(FontManagerRenderer, flush))
            M_VTBLID(FontManagerRenderer, flush) = METHOD(FontManagerRenderer, flush)->vid;

         METHOD(FontManagerRenderer, init) = Class_findMethod(CO(FontManagerRenderer), "init", module);
         if(METHOD(FontManagerRenderer, init))
            M_VTBLID(FontManagerRenderer, init) = METHOD(FontManagerRenderer, init)->vid;

         METHOD(FontManagerRenderer, registerImage) = Class_findMethod(CO(FontManagerRenderer), "registerImage", module);
         if(METHOD(FontManagerRenderer, registerImage))
            M_VTBLID(FontManagerRenderer, registerImage) = METHOD(FontManagerRenderer, registerImage)->vid;

         METHOD(FontManagerRenderer, resetImages) = Class_findMethod(CO(FontManagerRenderer), "resetImages", module);
         if(METHOD(FontManagerRenderer, resetImages))
            M_VTBLID(FontManagerRenderer, resetImages) = METHOD(FontManagerRenderer, resetImages)->vid;

         METHOD(FontManagerRenderer, resizeTexture) = Class_findMethod(CO(FontManagerRenderer), "resizeTexture", module);
         if(METHOD(FontManagerRenderer, resizeTexture))
            M_VTBLID(FontManagerRenderer, resizeTexture) = METHOD(FontManagerRenderer, resizeTexture)->vid;

         METHOD(FontManagerRenderer, setLayer) = Class_findMethod(CO(FontManagerRenderer), "setLayer", module);
         if(METHOD(FontManagerRenderer, setLayer))
            M_VTBLID(FontManagerRenderer, setLayer) = METHOD(FontManagerRenderer, setLayer)->vid;

         METHOD(FontManagerRenderer, updateTexture) = Class_findMethod(CO(FontManagerRenderer), "updateTexture", module);
         if(METHOD(FontManagerRenderer, updateTexture))
            M_VTBLID(FontManagerRenderer, updateTexture) = METHOD(FontManagerRenderer, updateTexture)->vid;
      }
      CO(FontRenderer) = eC_findClass(module, "FontRenderer");
      if(CO(FontRenderer))
      {
         METHOD(FontRenderer, setColor) = Class_findMethod(CO(FontRenderer), "setColor", module);
         if(METHOD(FontRenderer, setColor))
            FontRenderer_setColor = (void (*)(C(FontRenderer), C(ColorAlpha)))METHOD(FontRenderer, setColor)->function;

         METHOD(FontRenderer, setCursorColor) = Class_findMethod(CO(FontRenderer), "setCursorColor", module);
         if(METHOD(FontRenderer, setCursorColor))
            FontRenderer_setCursorColor = (void (*)(C(FontRenderer), C(ColorAlpha)))METHOD(FontRenderer, setCursorColor)->function;

         METHOD(FontRenderer, setExtColor) = Class_findMethod(CO(FontRenderer), "setExtColor", module);
         if(METHOD(FontRenderer, setExtColor))
            FontRenderer_setExtColor = (void (*)(C(FontRenderer), C(ColorAlpha)))METHOD(FontRenderer, setExtColor)->function;

         PROPERTY(FontRenderer, drawManager) = Class_findProperty(CO(FontRenderer), "drawManager", module);
         if(PROPERTY(FontRenderer, drawManager))
            FontRenderer_set_drawManager = (void *)PROPERTY(FontRenderer, drawManager)->Set;
      }
      CO(FontResource) = eC_findClass(module, "FontResource");
      if(CO(FontResource))
      {
         PROPERTY(FontResource, faceName) = Class_findProperty(CO(FontResource), "faceName", module);
         if(PROPERTY(FontResource, faceName))
         {
            FontResource_set_faceName = (void *)PROPERTY(FontResource, faceName)->Set;
            FontResource_get_faceName = (void *)PROPERTY(FontResource, faceName)->Get;
         }

         PROPERTY(FontResource, size) = Class_findProperty(CO(FontResource), "size", module);
         if(PROPERTY(FontResource, size))
         {
            FontResource_set_size = (void *)PROPERTY(FontResource, size)->Set;
            FontResource_get_size = (void *)PROPERTY(FontResource, size)->Get;
         }

         PROPERTY(FontResource, bold) = Class_findProperty(CO(FontResource), "bold", module);
         if(PROPERTY(FontResource, bold))
         {
            FontResource_set_bold = (void *)PROPERTY(FontResource, bold)->Set;
            FontResource_get_bold = (void *)PROPERTY(FontResource, bold)->Get;
         }

         PROPERTY(FontResource, italic) = Class_findProperty(CO(FontResource), "italic", module);
         if(PROPERTY(FontResource, italic))
         {
            FontResource_set_italic = (void *)PROPERTY(FontResource, italic)->Set;
            FontResource_get_italic = (void *)PROPERTY(FontResource, italic)->Get;
         }

         PROPERTY(FontResource, underline) = Class_findProperty(CO(FontResource), "underline", module);
         if(PROPERTY(FontResource, underline))
         {
            FontResource_set_underline = (void *)PROPERTY(FontResource, underline)->Set;
            FontResource_get_underline = (void *)PROPERTY(FontResource, underline)->Get;
         }

         PROPERTY(FontResource, font) = Class_findProperty(CO(FontResource), "font", module);
         if(PROPERTY(FontResource, font))
            FontResource_get_font = (void *)PROPERTY(FontResource, font)->Get;

         PROPERTY(FontResource, window) = Class_findProperty(CO(FontResource), "window", module);
         if(PROPERTY(FontResource, window))
            FontResource_set_window = (void *)PROPERTY(FontResource, window)->Set;

         PROPERTY(FontResource, outlineSize) = Class_findProperty(CO(FontResource), "outlineSize", module);
         if(PROPERTY(FontResource, outlineSize))
         {
            FontResource_set_outlineSize = (void *)PROPERTY(FontResource, outlineSize)->Set;
            FontResource_get_outlineSize = (void *)PROPERTY(FontResource, outlineSize)->Get;
         }

         PROPERTY(FontResource, outlineFade) = Class_findProperty(CO(FontResource), "outlineFade", module);
         if(PROPERTY(FontResource, outlineFade))
         {
            FontResource_set_outlineFade = (void *)PROPERTY(FontResource, outlineFade)->Set;
            FontResource_get_outlineFade = (void *)PROPERTY(FontResource, outlineFade)->Get;
         }

         PROPERTY(FontResource, fmFont) = Class_findProperty(CO(FontResource), "fmFont", module);
         if(PROPERTY(FontResource, fmFont))
            FontResource_get_fmFont = (void *)PROPERTY(FontResource, fmFont)->Get;
      }
      CO(GLCapabilities) = eC_findClass(module, "GLCapabilities");
      CO(GradientDirection) = eC_findClass(module, "GradientDirection");
      CO(HitRecord) = eC_findClass(module, "HitRecord");
      if(CO(HitRecord))
      {
         METHOD(HitRecord, compare) = Class_findMethod(CO(HitRecord), "Compare", module);
         if(METHOD(HitRecord, compare))
            HitRecord_compare = (int (*)(C(HitRecord) *, C(HitRecord) *, void *))METHOD(HitRecord, compare)->function;
      }
      CO(Light) = eC_findClass(module, "Light");
      CO(LightFlags) = eC_findClass(module, "LightFlags");
      CO(PixelFormat) = eC_findClass(module, "PixelFormat");
      CO(RenderState) = eC_findClass(module, "RenderState");
      CO(RenderStateFloat) = eC_findClass(module, "RenderStateFloat");
      CO(Resolution) = eC_findClass(module, "Resolution");
      CO(Resource) = eC_findClass(module, "Resource");
      CO(Surface) = eC_findClass(module, "Surface");
      if(CO(Surface))
      {
         METHOD(Surface, area) = Class_findMethod(CO(Surface), "Area", module);
         if(METHOD(Surface, area))
            Surface_area = (void (*)(C(Surface), int, int, int, int))METHOD(Surface, area)->function;

         METHOD(Surface, bevel) = Class_findMethod(CO(Surface), "Bevel", module);
         if(METHOD(Surface, bevel))
            Surface_bevel = (void (*)(C(Surface), C(bool), int, int, int, int))METHOD(Surface, bevel)->function;

         METHOD(Surface, blit) = Class_findMethod(CO(Surface), "Blit", module);
         if(METHOD(Surface, blit))
            Surface_blit = (void (*)(C(Surface), C(Bitmap), int, int, int, int, int, int))METHOD(Surface, blit)->function;

         METHOD(Surface, centerTextf) = Class_findMethod(CO(Surface), "CenterTextf", module);
         if(METHOD(Surface, centerTextf))
            Surface_centerTextf = (void (*)(C(Surface), int, int, const char *, ...))METHOD(Surface, centerTextf)->function;

         METHOD(Surface, clear) = Class_findMethod(CO(Surface), "Clear", module);
         if(METHOD(Surface, clear))
            Surface_clear = (void (*)(C(Surface), C(ClearType)))METHOD(Surface, clear)->function;

         METHOD(Surface, clip) = Class_findMethod(CO(Surface), "Clip", module);
         if(METHOD(Surface, clip))
            Surface_clip = (void (*)(C(Surface), C(Box) *))METHOD(Surface, clip)->function;

         METHOD(Surface, drawLine) = Class_findMethod(CO(Surface), "DrawLine", module);
         if(METHOD(Surface, drawLine))
            Surface_drawLine = (void (*)(C(Surface), int, int, int, int))METHOD(Surface, drawLine)->function;

         METHOD(Surface, drawingChar) = Class_findMethod(CO(Surface), "DrawingChar", module);
         if(METHOD(Surface, drawingChar))
            Surface_drawingChar = (void (*)(C(Surface), char))METHOD(Surface, drawingChar)->function;

         METHOD(Surface, filter) = Class_findMethod(CO(Surface), "Filter", module);
         if(METHOD(Surface, filter))
            Surface_filter = (void (*)(C(Surface), C(Bitmap), int, int, int, int, int, int, int, int))METHOD(Surface, filter)->function;

         METHOD(Surface, filterHTile) = Class_findMethod(CO(Surface), "FilterHTile", module);
         if(METHOD(Surface, filterHTile))
            Surface_filterHTile = (void (*)(C(Surface), C(Bitmap), int, int, int, int))METHOD(Surface, filterHTile)->function;

         METHOD(Surface, filterVTile) = Class_findMethod(CO(Surface), "FilterVTile", module);
         if(METHOD(Surface, filterVTile))
            Surface_filterVTile = (void (*)(C(Surface), C(Bitmap), int, int, int, int))METHOD(Surface, filterVTile)->function;

         METHOD(Surface, getBackground) = Class_findMethod(CO(Surface), "GetBackground", module);
         if(METHOD(Surface, getBackground))
            Surface_getBackground = (C(Color) (*)(C(Surface)))METHOD(Surface, getBackground)->function;

         METHOD(Surface, getBox) = Class_findMethod(CO(Surface), "GetBox", module);
         if(METHOD(Surface, getBox))
            Surface_getBox = (void (*)(C(Surface), C(Box) *))METHOD(Surface, getBox)->function;

         METHOD(Surface, getDisplay) = Class_findMethod(CO(Surface), "GetDisplay", module);
         if(METHOD(Surface, getDisplay))
            Surface_getDisplay = (C(Display) (*)(C(Surface)))METHOD(Surface, getDisplay)->function;

         METHOD(Surface, getFont) = Class_findMethod(CO(Surface), "GetFont", module);
         if(METHOD(Surface, getFont))
            Surface_getFont = (C(Font) * (*)(C(Surface)))METHOD(Surface, getFont)->function;

         METHOD(Surface, getForeground) = Class_findMethod(CO(Surface), "GetForeground", module);
         if(METHOD(Surface, getForeground))
            Surface_getForeground = (C(Color) (*)(C(Surface)))METHOD(Surface, getForeground)->function;

         METHOD(Surface, getPixel) = Class_findMethod(CO(Surface), "GetPixel", module);
         if(METHOD(Surface, getPixel))
            Surface_getPixel = (C(ColorAlpha) (*)(C(Surface), int, int))METHOD(Surface, getPixel)->function;

         METHOD(Surface, getSize) = Class_findMethod(CO(Surface), "GetSize", module);
         if(METHOD(Surface, getSize))
            Surface_getSize = (void (*)(C(Surface), int *, int *))METHOD(Surface, getSize)->function;

         METHOD(Surface, getTextOpacity) = Class_findMethod(CO(Surface), "GetTextOpacity", module);
         if(METHOD(Surface, getTextOpacity))
            Surface_getTextOpacity = (C(bool) (*)(C(Surface)))METHOD(Surface, getTextOpacity)->function;

         METHOD(Surface, gradient) = Class_findMethod(CO(Surface), "Gradient", module);
         if(METHOD(Surface, gradient))
            Surface_gradient = (void (*)(C(Surface), C(ColorKey) *, int, float, C(GradientDirection), int, int, int, int))METHOD(Surface, gradient)->function;

         METHOD(Surface, hLine) = Class_findMethod(CO(Surface), "HLine", module);
         if(METHOD(Surface, hLine))
            Surface_hLine = (void (*)(C(Surface), int, int, int))METHOD(Surface, hLine)->function;

         METHOD(Surface, hTile) = Class_findMethod(CO(Surface), "HTile", module);
         if(METHOD(Surface, hTile))
            Surface_hTile = (void (*)(C(Surface), C(Bitmap), int, int, int, int))METHOD(Surface, hTile)->function;

         METHOD(Surface, lineStipple) = Class_findMethod(CO(Surface), "LineStipple", module);
         if(METHOD(Surface, lineStipple))
            Surface_lineStipple = (void (*)(C(Surface), uint))METHOD(Surface, lineStipple)->function;

         METHOD(Surface, putPixel) = Class_findMethod(CO(Surface), "PutPixel", module);
         if(METHOD(Surface, putPixel))
            Surface_putPixel = (void (*)(C(Surface), int, int))METHOD(Surface, putPixel)->function;

         METHOD(Surface, rectangle) = Class_findMethod(CO(Surface), "Rectangle", module);
         if(METHOD(Surface, rectangle))
            Surface_rectangle = (void (*)(C(Surface), int, int, int, int))METHOD(Surface, rectangle)->function;

         METHOD(Surface, setBackground) = Class_findMethod(CO(Surface), "SetBackground", module);
         if(METHOD(Surface, setBackground))
            Surface_setBackground = (void (*)(C(Surface), C(ColorAlpha)))METHOD(Surface, setBackground)->function;

         METHOD(Surface, setForeground) = Class_findMethod(CO(Surface), "SetForeground", module);
         if(METHOD(Surface, setForeground))
            Surface_setForeground = (void (*)(C(Surface), C(ColorAlpha)))METHOD(Surface, setForeground)->function;

         METHOD(Surface, stretch) = Class_findMethod(CO(Surface), "Stretch", module);
         if(METHOD(Surface, stretch))
            Surface_stretch = (void (*)(C(Surface), C(Bitmap), int, int, int, int, int, int, int, int))METHOD(Surface, stretch)->function;

         METHOD(Surface, textExtent) = Class_findMethod(CO(Surface), "TextExtent", module);
         if(METHOD(Surface, textExtent))
            Surface_textExtent = (void (*)(C(Surface), const char *, int, int *, int *))METHOD(Surface, textExtent)->function;

         METHOD(Surface, textExtent2) = Class_findMethod(CO(Surface), "TextExtent2", module);
         if(METHOD(Surface, textExtent2))
            Surface_textExtent2 = (void (*)(C(Surface), const char *, int, int *, int *, int, int *, int *))METHOD(Surface, textExtent2)->function;

         METHOD(Surface, textFont) = Class_findMethod(CO(Surface), "TextFont", module);
         if(METHOD(Surface, textFont))
            Surface_textFont = (void (*)(C(Surface), C(Font) *))METHOD(Surface, textFont)->function;

         METHOD(Surface, textOpacity) = Class_findMethod(CO(Surface), "TextOpacity", module);
         if(METHOD(Surface, textOpacity))
            Surface_textOpacity = (void (*)(C(Surface), C(bool)))METHOD(Surface, textOpacity)->function;

         METHOD(Surface, thinBevel) = Class_findMethod(CO(Surface), "ThinBevel", module);
         if(METHOD(Surface, thinBevel))
            Surface_thinBevel = (void (*)(C(Surface), C(bool), int, int, int, int))METHOD(Surface, thinBevel)->function;

         METHOD(Surface, tile) = Class_findMethod(CO(Surface), "Tile", module);
         if(METHOD(Surface, tile))
            Surface_tile = (void (*)(C(Surface), C(Bitmap), int, int, int, int))METHOD(Surface, tile)->function;

         METHOD(Surface, vLine) = Class_findMethod(CO(Surface), "VLine", module);
         if(METHOD(Surface, vLine))
            Surface_vLine = (void (*)(C(Surface), int, int, int))METHOD(Surface, vLine)->function;

         METHOD(Surface, vTile) = Class_findMethod(CO(Surface), "VTile", module);
         if(METHOD(Surface, vTile))
            Surface_vTile = (void (*)(C(Surface), C(Bitmap), int, int, int, int))METHOD(Surface, vTile)->function;

         METHOD(Surface, writeText) = Class_findMethod(CO(Surface), "WriteText", module);
         if(METHOD(Surface, writeText))
            Surface_writeText = (void (*)(C(Surface), int, int, const char *, int))METHOD(Surface, writeText)->function;

         METHOD(Surface, writeText2) = Class_findMethod(CO(Surface), "WriteText2", module);
         if(METHOD(Surface, writeText2))
            Surface_writeText2 = (void (*)(C(Surface), int, int, const char *, int, int, int *))METHOD(Surface, writeText2)->function;

         METHOD(Surface, writeTextDots) = Class_findMethod(CO(Surface), "WriteTextDots", module);
         if(METHOD(Surface, writeTextDots))
            Surface_writeTextDots = (void (*)(C(Surface), C(Alignment), int, int, int, const char *, int))METHOD(Surface, writeTextDots)->function;

         METHOD(Surface, writeTextDotsf) = Class_findMethod(CO(Surface), "WriteTextDotsf", module);
         if(METHOD(Surface, writeTextDotsf))
            Surface_writeTextDotsf = (void (*)(C(Surface), C(Alignment), int, int, int, const char *, ...))METHOD(Surface, writeTextDotsf)->function;

         METHOD(Surface, writeTextf) = Class_findMethod(CO(Surface), "WriteTextf", module);
         if(METHOD(Surface, writeTextf))
            Surface_writeTextf = (void (*)(C(Surface), int, int, const char *, ...))METHOD(Surface, writeTextf)->function;

         PROPERTY(Surface, alphaWrite) = Class_findProperty(CO(Surface), "alphaWrite", module);
         if(PROPERTY(Surface, alphaWrite))
         {
            Surface_set_alphaWrite = (void *)PROPERTY(Surface, alphaWrite)->Set;
            Surface_get_alphaWrite = (void *)PROPERTY(Surface, alphaWrite)->Get;
         }

         PROPERTY(Surface, blend) = Class_findProperty(CO(Surface), "blend", module);
         if(PROPERTY(Surface, blend))
         {
            Surface_set_blend = (void *)PROPERTY(Surface, blend)->Set;
            Surface_get_blend = (void *)PROPERTY(Surface, blend)->Get;
         }

         PROPERTY(Surface, bitmap) = Class_findProperty(CO(Surface), "bitmap", module);
         if(PROPERTY(Surface, bitmap))
            Surface_get_bitmap = (void *)PROPERTY(Surface, bitmap)->Get;

         PROPERTY(Surface, outlineColor) = Class_findProperty(CO(Surface), "outlineColor", module);
         if(PROPERTY(Surface, outlineColor))
         {
            Surface_set_outlineColor = (void *)PROPERTY(Surface, outlineColor)->Set;
            Surface_get_outlineColor = (void *)PROPERTY(Surface, outlineColor)->Get;
         }

         PROPERTY(Surface, foreground) = Class_findProperty(CO(Surface), "foreground", module);
         if(PROPERTY(Surface, foreground))
         {
            Surface_set_foreground = (void *)PROPERTY(Surface, foreground)->Set;
            Surface_get_foreground = (void *)PROPERTY(Surface, foreground)->Get;
         }

         PROPERTY(Surface, background) = Class_findProperty(CO(Surface), "background", module);
         if(PROPERTY(Surface, background))
         {
            Surface_set_background = (void *)PROPERTY(Surface, background)->Set;
            Surface_get_background = (void *)PROPERTY(Surface, background)->Get;
         }

         PROPERTY(Surface, blitTint) = Class_findProperty(CO(Surface), "blitTint", module);
         if(PROPERTY(Surface, blitTint))
         {
            Surface_set_blitTint = (void *)PROPERTY(Surface, blitTint)->Set;
            Surface_get_blitTint = (void *)PROPERTY(Surface, blitTint)->Get;
         }

         PROPERTY(Surface, lineStipple) = Class_findProperty(CO(Surface), "lineStipple", module);
         if(PROPERTY(Surface, lineStipple))
            Surface_set_lineStipple = (void *)PROPERTY(Surface, lineStipple)->Set;

         PROPERTY(Surface, size) = Class_findProperty(CO(Surface), "size", module);
         if(PROPERTY(Surface, size))
            Surface_get_size = (void *)PROPERTY(Surface, size)->Get;

         PROPERTY(Surface, display) = Class_findProperty(CO(Surface), "display", module);
         if(PROPERTY(Surface, display))
            Surface_get_display = (void *)PROPERTY(Surface, display)->Get;

         PROPERTY(Surface, font) = Class_findProperty(CO(Surface), "font", module);
         if(PROPERTY(Surface, font))
         {
            Surface_set_font = (void *)PROPERTY(Surface, font)->Set;
            Surface_get_font = (void *)PROPERTY(Surface, font)->Get;
         }

         PROPERTY(Surface, textOpacity) = Class_findProperty(CO(Surface), "textOpacity", module);
         if(PROPERTY(Surface, textOpacity))
         {
            Surface_set_textOpacity = (void *)PROPERTY(Surface, textOpacity)->Set;
            Surface_get_textOpacity = (void *)PROPERTY(Surface, textOpacity)->Get;
         }

         PROPERTY(Surface, drawingChar) = Class_findProperty(CO(Surface), "drawingChar", module);
         if(PROPERTY(Surface, drawingChar))
            Surface_set_drawingChar = (void *)PROPERTY(Surface, drawingChar)->Set;

         PROPERTY(Surface, clipping) = Class_findProperty(CO(Surface), "clipping", module);
         if(PROPERTY(Surface, clipping))
            Surface_set_clipping = (void *)PROPERTY(Surface, clipping)->Set;
      }
      CO(SystemColor) = eC_findClass(module, "SystemColor");
      CO(CompiledDefaultShader) = eC_findClass(module, "CompiledDefaultShader");
      if(CO(CompiledDefaultShader))
      {
         METHOD(CompiledDefaultShader, registerUniforms) = Class_findMethod(CO(CompiledDefaultShader), "registerUniforms", module);
         if(METHOD(CompiledDefaultShader, registerUniforms))
            CompiledDefaultShader_registerUniforms = (void (*)(C(CompiledDefaultShader) *, int, C(DefaultShaderBits)))METHOD(CompiledDefaultShader, registerUniforms)->function;
      }
      CO(CompiledShader) = eC_findClass(module, "CompiledShader");
      if(CO(CompiledShader))
      {
         METHOD(CompiledShader, free) = Class_findMethod(CO(CompiledShader), "free", module);
         if(METHOD(CompiledShader, free))
            CompiledShader_free = (void (*)(C(CompiledShader) *))METHOD(CompiledShader, free)->function;
      }
      CO(DefaultShader) = eC_findClass(module, "DefaultShader");
      if(CO(DefaultShader))
      {
         METHOD(DefaultShader, debugging) = Class_findMethod(CO(DefaultShader), "debugging", module);
         if(METHOD(DefaultShader, debugging))
            DefaultShader_debugging = (void (*)(C(DefaultShader), C(bool)))METHOD(DefaultShader, debugging)->function;

         METHOD(DefaultShader, fog) = Class_findMethod(CO(DefaultShader), "fog", module);
         if(METHOD(DefaultShader, fog))
            DefaultShader_fog = (void (*)(C(DefaultShader), C(bool)))METHOD(DefaultShader, fog)->function;

         METHOD(DefaultShader, lighting) = Class_findMethod(CO(DefaultShader), "lighting", module);
         if(METHOD(DefaultShader, lighting))
            DefaultShader_lighting = (void (*)(C(DefaultShader), C(bool)))METHOD(DefaultShader, lighting)->function;

         METHOD(DefaultShader, setCamera) = Class_findMethod(CO(DefaultShader), "setCamera", module);
         if(METHOD(DefaultShader, setCamera))
            DefaultShader_setCamera = (void (*)(C(DefaultShader), C(Camera)))METHOD(DefaultShader, setCamera)->function;

         METHOD(DefaultShader, setColor) = Class_findMethod(CO(DefaultShader), "setColor", module);
         if(METHOD(DefaultShader, setColor))
            DefaultShader_setColor = (void (*)(C(DefaultShader), float, float, float, float))METHOD(DefaultShader, setColor)->function;

         METHOD(DefaultShader, setFogColor) = Class_findMethod(CO(DefaultShader), "setFogColor", module);
         if(METHOD(DefaultShader, setFogColor))
            DefaultShader_setFogColor = (void (*)(C(DefaultShader), float, float, float))METHOD(DefaultShader, setFogColor)->function;

         METHOD(DefaultShader, setFogDensity) = Class_findMethod(CO(DefaultShader), "setFogDensity", module);
         if(METHOD(DefaultShader, setFogDensity))
            DefaultShader_setFogDensity = (void (*)(C(DefaultShader), float))METHOD(DefaultShader, setFogDensity)->function;

         METHOD(DefaultShader, setGlobalAmbient) = Class_findMethod(CO(DefaultShader), "setGlobalAmbient", module);
         if(METHOD(DefaultShader, setGlobalAmbient))
            DefaultShader_setGlobalAmbient = (void (*)(C(DefaultShader), float, float, float, float))METHOD(DefaultShader, setGlobalAmbient)->function;

         METHOD(DefaultShader, setLight) = Class_findMethod(CO(DefaultShader), "setLight", module);
         if(METHOD(DefaultShader, setLight))
            DefaultShader_setLight = (void (*)(C(DefaultShader), C(Display), uint, C(Light) *))METHOD(DefaultShader, setLight)->function;

         METHOD(DefaultShader, setPerVertexColor) = Class_findMethod(CO(DefaultShader), "setPerVertexColor", module);
         if(METHOD(DefaultShader, setPerVertexColor))
            DefaultShader_setPerVertexColor = (void (*)(C(DefaultShader), C(bool)))METHOD(DefaultShader, setPerVertexColor)->function;

         METHOD(DefaultShader, setSimpleMaterial) = Class_findMethod(CO(DefaultShader), "setSimpleMaterial", module);
         if(METHOD(DefaultShader, setSimpleMaterial))
            DefaultShader_setSimpleMaterial = (void (*)(C(DefaultShader), C(ColorAlpha), C(bool)))METHOD(DefaultShader, setSimpleMaterial)->function;

         METHOD(DefaultShader, shader) = Class_findMethod(CO(DefaultShader), "shader", module);
         if(METHOD(DefaultShader, shader))
            DefaultShader_shader = (C(DefaultShader) (*)())METHOD(DefaultShader, shader)->function;

         METHOD(DefaultShader, swizzle) = Class_findMethod(CO(DefaultShader), "swizzle", module);
         if(METHOD(DefaultShader, swizzle))
            DefaultShader_swizzle = (void (*)(C(DefaultShader), C(SwizzleMode)))METHOD(DefaultShader, swizzle)->function;

         METHOD(DefaultShader, texturing) = Class_findMethod(CO(DefaultShader), "texturing", module);
         if(METHOD(DefaultShader, texturing))
            DefaultShader_texturing = (void (*)(C(DefaultShader), C(bool)))METHOD(DefaultShader, texturing)->function;
      }
      CO(DefaultShaderBits) = eC_findClass(module, "DefaultShaderBits");
      CO(GLAB) = eC_findClass(module, "GLAB");
      if(CO(GLAB))
      {
         METHOD(GLAB, allocate) = Class_findMethod(CO(GLAB), "allocate", module);
         if(METHOD(GLAB, allocate))
            GLAB_allocate = (void (*)(C(GLAB) *, uint, void *, C(GLBufferUsage)))METHOD(GLAB, allocate)->function;

         METHOD(GLAB, deleteBuffers) = Class_findMethod(CO(GLAB), "deleteBuffers", module);
         if(METHOD(GLAB, deleteBuffers))
            GLAB_deleteBuffers = (void (*)(int, C(GLAB) *))METHOD(GLAB, deleteBuffers)->function;

         METHOD(GLAB, free) = Class_findMethod(CO(GLAB), "free", module);
         if(METHOD(GLAB, free))
            GLAB_free = (void (*)(C(GLAB) *))METHOD(GLAB, free)->function;

         METHOD(GLAB, upload) = Class_findMethod(CO(GLAB), "upload", module);
         if(METHOD(GLAB, upload))
            GLAB_upload = (void (*)(C(GLAB) *, uint, uint, void *))METHOD(GLAB, upload)->function;

         METHOD(GLAB, use) = Class_findMethod(CO(GLAB), "use", module);
         if(METHOD(GLAB, use))
            GLAB_use = (void (*)(C(GLAB) *, C(GLBufferContents), int, int, uint, void *))METHOD(GLAB, use)->function;

         METHOD(GLAB, useVertTrans) = Class_findMethod(CO(GLAB), "useVertTrans", module);
         if(METHOD(GLAB, useVertTrans))
            GLAB_useVertTrans = (void (*)(C(GLAB) *, uint, int, int, uint, void *))METHOD(GLAB, useVertTrans)->function;
      }
      CO(GLBufferContents) = eC_findClass(module, "GLBufferContents");
      CO(GLBufferUsage) = eC_findClass(module, "GLBufferUsage");
      CO(GLEAB) = eC_findClass(module, "GLEAB");
      if(CO(GLEAB))
      {
         METHOD(GLEAB, allocate) = Class_findMethod(CO(GLEAB), "allocate", module);
         if(METHOD(GLEAB, allocate))
            GLEAB_allocate = (void (*)(C(GLEAB) *, uint, void *, C(GLBufferUsage)))METHOD(GLEAB, allocate)->function;

         METHOD(GLEAB, draw) = Class_findMethod(CO(GLEAB), "draw", module);
         if(METHOD(GLEAB, draw))
            GLEAB_draw = (void (*)(C(GLEAB) *, int, int, int, void *))METHOD(GLEAB, draw)->function;

         METHOD(GLEAB, free) = Class_findMethod(CO(GLEAB), "free", module);
         if(METHOD(GLEAB, free))
            GLEAB_free = (void (*)(C(GLEAB) *))METHOD(GLEAB, free)->function;

         METHOD(GLEAB, upload) = Class_findMethod(CO(GLEAB), "upload", module);
         if(METHOD(GLEAB, upload))
            GLEAB_upload = (void (*)(C(GLEAB) *, uint, uint, void *))METHOD(GLEAB, upload)->function;
      }
      CO(GLIMTKMode) = eC_findClass(module, "GLIMTKMode");
      CO(GLMSWhatToGet) = eC_findClass(module, "GLMSWhatToGet");
      CO(LFBDisplay) = eC_findClass(module, "LFBDisplay");
      CO(LFBDisplayDriver) = eC_findClass(module, "LFBDisplayDriver");
      CO(LFBSurface) = eC_findClass(module, "LFBSurface");
      CO(LFBSystem) = eC_findClass(module, "LFBSystem");
      CO(LightMode) = eC_findClass(module, "LightMode");
      CO(MatrixMode) = eC_findClass(module, "MatrixMode");
      CO(Shader) = eC_findClass(module, "Shader");
      if(CO(Shader))
      {
         METHOD(Shader, activate) = Class_findMethod(CO(Shader), "activate", module);
         if(METHOD(Shader, activate))
            Shader_activate = (C(bool) (*)(C(Shader)))METHOD(Shader, activate)->function;

         METHOD(Shader, bindAttribs) = Class_findMethod(CO(Shader), "bindAttribs", module);
         if(METHOD(Shader, bindAttribs))
            M_VTBLID(Shader, bindAttribs) = METHOD(Shader, bindAttribs)->vid;

         METHOD(Shader, free) = Class_findMethod(CO(Shader), "free", module);
         if(METHOD(Shader, free))
            Shader_free = (void (*)(C(Shader)))METHOD(Shader, free)->function;

         METHOD(Shader, getDefinitions) = Class_findMethod(CO(Shader), "getDefinitions", module);
         if(METHOD(Shader, getDefinitions))
            M_VTBLID(Shader, getDefinitions) = METHOD(Shader, getDefinitions)->vid;

         METHOD(Shader, load) = Class_findMethod(CO(Shader), "load", module);
         if(METHOD(Shader, load))
            Shader_load = (C(CompiledShader) * (*)(C(Shader), uint64))METHOD(Shader, load)->function;

         METHOD(Shader, registerShader) = Class_findMethod(CO(Shader), "registerShader", module);
         if(METHOD(Shader, registerShader))
            M_VTBLID(Shader, registerShader) = METHOD(Shader, registerShader)->vid;

         METHOD(Shader, select) = Class_findMethod(CO(Shader), "select", module);
         if(METHOD(Shader, select))
            Shader_select = (void (*)(C(Shader)))METHOD(Shader, select)->function;

         METHOD(Shader, setMaterial) = Class_findMethod(CO(Shader), "setMaterial", module);
         if(METHOD(Shader, setMaterial))
            M_VTBLID(Shader, setMaterial) = METHOD(Shader, setMaterial)->vid;

         METHOD(Shader, updateMatrix) = Class_findMethod(CO(Shader), "updateMatrix", module);
         if(METHOD(Shader, updateMatrix))
            M_VTBLID(Shader, updateMatrix) = METHOD(Shader, updateMatrix)->vid;

         METHOD(Shader, uploadUniforms) = Class_findMethod(CO(Shader), "uploadUniforms", module);
         if(METHOD(Shader, uploadUniforms))
            M_VTBLID(Shader, uploadUniforms) = METHOD(Shader, uploadUniforms)->vid;

         PROPERTY(Shader, vertexShaderFile) = Class_findProperty(CO(Shader), "vertexShaderFile", module);
         if(PROPERTY(Shader, vertexShaderFile))
            Shader_set_vertexShaderFile = (void *)PROPERTY(Shader, vertexShaderFile)->Set;

         PROPERTY(Shader, fragmentShaderFile) = Class_findProperty(CO(Shader), "fragmentShaderFile", module);
         if(PROPERTY(Shader, fragmentShaderFile))
            Shader_set_fragmentShaderFile = (void *)PROPERTY(Shader, fragmentShaderFile)->Set;

         PROPERTY(Shader, vertexShader) = Class_findProperty(CO(Shader), "vertexShader", module);
         if(PROPERTY(Shader, vertexShader))
            Shader_set_vertexShader = (void *)PROPERTY(Shader, vertexShader)->Set;

         PROPERTY(Shader, fragmentShader) = Class_findProperty(CO(Shader), "fragmentShader", module);
         if(PROPERTY(Shader, fragmentShader))
            Shader_set_fragmentShader = (void *)PROPERTY(Shader, fragmentShader)->Set;
      }
      CO(SwizzleMode) = eC_findClass(module, "SwizzleMode");
      CO(Camera) = eC_findClass(module, "Camera");
      if(CO(Camera))
      {
         METHOD(Camera, adjustAngle) = Class_findMethod(CO(Camera), "AdjustAngle", module);
         if(METHOD(Camera, adjustAngle))
            Camera_adjustAngle = (void (*)(C(Camera), C(Quaternion) *))METHOD(Camera, adjustAngle)->function;

         METHOD(Camera, adjustPosition) = Class_findMethod(CO(Camera), "AdjustPosition", module);
         if(METHOD(Camera, adjustPosition))
            Camera_adjustPosition = (void (*)(C(Camera), C(Vector3D) *))METHOD(Camera, adjustPosition)->function;

         METHOD(Camera, move) = Class_findMethod(CO(Camera), "Move", module);
         if(METHOD(Camera, move))
            Camera_move = (void (*)(C(Camera), C(Vector3D) *))METHOD(Camera, move)->function;

         METHOD(Camera, pointsVisible) = Class_findMethod(CO(Camera), "PointsVisible", module);
         if(METHOD(Camera, pointsVisible))
            Camera_pointsVisible = (C(bool) (*)(C(Camera), C(Vector3D) *, int, double))METHOD(Camera, pointsVisible)->function;

         METHOD(Camera, project) = Class_findMethod(CO(Camera), "Project", module);
         if(METHOD(Camera, project))
            Camera_project = (C(bool) (*)(C(Camera), C(Vector3D) *, C(Vector3D) *))METHOD(Camera, project)->function;

         METHOD(Camera, projectSize) = Class_findMethod(CO(Camera), "ProjectSize", module);
         if(METHOD(Camera, projectSize))
            Camera_projectSize = (C(bool) (*)(C(Camera), C(Vector3D) *, C(Point) *))METHOD(Camera, projectSize)->function;

         METHOD(Camera, rotatePitch) = Class_findMethod(CO(Camera), "RotatePitch", module);
         if(METHOD(Camera, rotatePitch))
            Camera_rotatePitch = (void (*)(C(Camera), C(Angle), C(Angle), C(Angle)))METHOD(Camera, rotatePitch)->function;

         METHOD(Camera, rotateRoll) = Class_findMethod(CO(Camera), "RotateRoll", module);
         if(METHOD(Camera, rotateRoll))
            Camera_rotateRoll = (void (*)(C(Camera), C(Angle), C(Angle), C(Angle)))METHOD(Camera, rotateRoll)->function;

         METHOD(Camera, rotateYaw) = Class_findMethod(CO(Camera), "RotateYaw", module);
         if(METHOD(Camera, rotateYaw))
            Camera_rotateYaw = (void (*)(C(Camera), C(Angle), C(Angle), C(Angle)))METHOD(Camera, rotateYaw)->function;

         METHOD(Camera, setup) = Class_findMethod(CO(Camera), "Setup", module);
         if(METHOD(Camera, setup))
            Camera_setup = (void (*)(C(Camera), int, int, C(Point) *))METHOD(Camera, setup)->function;

         METHOD(Camera, slerp) = Class_findMethod(CO(Camera), "Slerp", module);
         if(METHOD(Camera, slerp))
            Camera_slerp = (void (*)(C(Camera), float))METHOD(Camera, slerp)->function;

         METHOD(Camera, sphereVisible) = Class_findMethod(CO(Camera), "SphereVisible", module);
         if(METHOD(Camera, sphereVisible))
            Camera_sphereVisible = (C(bool) (*)(C(Camera), C(Vector3D) *, float))METHOD(Camera, sphereVisible)->function;

         METHOD(Camera, transformMatrix) = Class_findMethod(CO(Camera), "TransformMatrix", module);
         if(METHOD(Camera, transformMatrix))
            Camera_transformMatrix = (void (*)(C(Camera), C(Matrix) *, C(Matrix) *))METHOD(Camera, transformMatrix)->function;

         METHOD(Camera, transformNormal) = Class_findMethod(CO(Camera), "TransformNormal", module);
         if(METHOD(Camera, transformNormal))
            Camera_transformNormal = (void (*)(C(Camera), C(Vector3D) *, C(Vector3D) *))METHOD(Camera, transformNormal)->function;

         METHOD(Camera, transformPoint) = Class_findMethod(CO(Camera), "TransformPoint", module);
         if(METHOD(Camera, transformPoint))
            Camera_transformPoint = (void (*)(C(Camera), C(Vector3D) *, C(Vector3D) *))METHOD(Camera, transformPoint)->function;

         METHOD(Camera, unproject) = Class_findMethod(CO(Camera), "Unproject", module);
         if(METHOD(Camera, unproject))
            Camera_unproject = (void (*)(C(Camera), C(Vector3D) *, C(Vector3D) *))METHOD(Camera, unproject)->function;

         METHOD(Camera, untransform) = Class_findMethod(CO(Camera), "Untransform", module);
         if(METHOD(Camera, untransform))
            Camera_untransform = (void (*)(C(Camera), C(Vector3D) *, C(Vector3D) *))METHOD(Camera, untransform)->function;

         METHOD(Camera, update) = Class_findMethod(CO(Camera), "Update", module);
         if(METHOD(Camera, update))
            Camera_update = (C(bool) (*)(C(Camera)))METHOD(Camera, update)->function;

         METHOD(Camera, setCPosition) = Class_findMethod(CO(Camera), "setCPosition", module);
         if(METHOD(Camera, setCPosition))
            Camera_setCPosition = (void (*)(C(Camera), C(Vector3D) *))METHOD(Camera, setCPosition)->function;

         METHOD(Camera, setViewMatrix) = Class_findMethod(CO(Camera), "setViewMatrix", module);
         if(METHOD(Camera, setViewMatrix))
            Camera_setViewMatrix = (void (*)(C(Camera), C(Matrix) *))METHOD(Camera, setViewMatrix)->function;

         PROPERTY(Camera, type) = Class_findProperty(CO(Camera), "type", module);
         if(PROPERTY(Camera, type))
         {
            Camera_set_type = (void *)PROPERTY(Camera, type)->Set;
            Camera_get_type = (void *)PROPERTY(Camera, type)->Get;
         }

         PROPERTY(Camera, position) = Class_findProperty(CO(Camera), "position", module);
         if(PROPERTY(Camera, position))
         {
            Camera_set_position = (void *)PROPERTY(Camera, position)->Set;
            Camera_get_position = (void *)PROPERTY(Camera, position)->Get;
         }

         PROPERTY(Camera, orientation) = Class_findProperty(CO(Camera), "orientation", module);
         if(PROPERTY(Camera, orientation))
         {
            Camera_set_orientation = (void *)PROPERTY(Camera, orientation)->Set;
            Camera_get_orientation = (void *)PROPERTY(Camera, orientation)->Get;
         }

         PROPERTY(Camera, eulerOrientation) = Class_findProperty(CO(Camera), "eulerOrientation", module);
         if(PROPERTY(Camera, eulerOrientation))
         {
            Camera_set_eulerOrientation = (void *)PROPERTY(Camera, eulerOrientation)->Set;
            Camera_get_eulerOrientation = (void *)PROPERTY(Camera, eulerOrientation)->Get;
         }

         PROPERTY(Camera, cPosition) = Class_findProperty(CO(Camera), "cPosition", module);
         if(PROPERTY(Camera, cPosition))
            Camera_get_cPosition = (void *)PROPERTY(Camera, cPosition)->Get;

         PROPERTY(Camera, cOrientation) = Class_findProperty(CO(Camera), "cOrientation", module);
         if(PROPERTY(Camera, cOrientation))
            Camera_get_cOrientation = (void *)PROPERTY(Camera, cOrientation)->Get;

         PROPERTY(Camera, fov) = Class_findProperty(CO(Camera), "fov", module);
         if(PROPERTY(Camera, fov))
         {
            Camera_set_fov = (void *)PROPERTY(Camera, fov)->Set;
            Camera_get_fov = (void *)PROPERTY(Camera, fov)->Get;
         }

         PROPERTY(Camera, zMin) = Class_findProperty(CO(Camera), "zMin", module);
         if(PROPERTY(Camera, zMin))
         {
            Camera_set_zMin = (void *)PROPERTY(Camera, zMin)->Set;
            Camera_get_zMin = (void *)PROPERTY(Camera, zMin)->Get;
         }

         PROPERTY(Camera, zMax) = Class_findProperty(CO(Camera), "zMax", module);
         if(PROPERTY(Camera, zMax))
         {
            Camera_set_zMax = (void *)PROPERTY(Camera, zMax)->Set;
            Camera_get_zMax = (void *)PROPERTY(Camera, zMax)->Get;
         }

         PROPERTY(Camera, target) = Class_findProperty(CO(Camera), "target", module);
         if(PROPERTY(Camera, target))
         {
            Camera_set_target = (void *)PROPERTY(Camera, target)->Set;
            Camera_get_target = (void *)PROPERTY(Camera, target)->Get;
         }

         PROPERTY(Camera, fovDirection) = Class_findProperty(CO(Camera), "fovDirection", module);
         if(PROPERTY(Camera, fovDirection))
         {
            Camera_set_fovDirection = (void *)PROPERTY(Camera, fovDirection)->Set;
            Camera_get_fovDirection = (void *)PROPERTY(Camera, fovDirection)->Get;
         }

         PROPERTY(Camera, aspectRatio) = Class_findProperty(CO(Camera), "aspectRatio", module);
         if(PROPERTY(Camera, aspectRatio))
         {
            Camera_set_aspectRatio = (void *)PROPERTY(Camera, aspectRatio)->Set;
            Camera_get_aspectRatio = (void *)PROPERTY(Camera, aspectRatio)->Get;
         }

         PROPERTY(Camera, focal) = Class_findProperty(CO(Camera), "focal", module);
         if(PROPERTY(Camera, focal))
            Camera_get_focal = (void *)PROPERTY(Camera, focal)->Get;
      }
      CO(CameraType) = eC_findClass(module, "CameraType");
      CO(ClippingPlane) = eC_findClass(module, "ClippingPlane");
      CO(Euler) = eC_findClass(module, "Euler");
      if(CO(Euler))
      {
         METHOD(Euler, add) = Class_findMethod(CO(Euler), "Add", module);
         if(METHOD(Euler, add))
            Euler_add = (void (*)(C(Euler) *, C(Euler) *, C(Euler) *))METHOD(Euler, add)->function;

         PROPERTY(Euler, Quaternion) = Class_findProperty(CO(Euler), "ecere::gfx3D::Quaternion", module);
         if(PROPERTY(Euler, Quaternion))
         {
            Euler_from_Quaternion = (void *)PROPERTY(Euler, Quaternion)->Set;
            Euler_to_Quaternion = (void *)PROPERTY(Euler, Quaternion)->Get;
         }
      }
      CO(FovDirection) = eC_findClass(module, "FovDirection");
      CO(FrameKey) = eC_findClass(module, "FrameKey");
      CO(FrameTrack) = eC_findClass(module, "FrameTrack");
      CO(FrameTrackBits) = eC_findClass(module, "FrameTrackBits");
      CO(FrameTrackType) = eC_findClass(module, "FrameTrackType");
      CO(FrustumPlacement) = eC_findClass(module, "FrustumPlacement");
      CO(Line) = eC_findClass(module, "Line");
      if(CO(Line))
      {
         METHOD(Line, intersectSphere) = Class_findMethod(CO(Line), "IntersectSphere", module);
         if(METHOD(Line, intersectSphere))
            Line_intersectSphere = (C(bool) (*)(C(Line) *, double, double *))METHOD(Line, intersectSphere)->function;
      }
      CO(Material) = eC_findClass(module, "Material");
      if(CO(Material))
      {
         METHOD(Material, free) = Class_findMethod(CO(Material), "Free", module);
         if(METHOD(Material, free))
            Material_free = (void (*)(C(Material) *))METHOD(Material, free)->function;
      }
      CO(MaterialFlags) = eC_findClass(module, "MaterialFlags");
      CO(Matrix) = eC_findClass(module, "Matrix");
      if(CO(Matrix))
      {
         METHOD(Matrix, determinant) = Class_findMethod(CO(Matrix), "Determinant", module);
         if(METHOD(Matrix, determinant))
            Matrix_determinant = (double (*)(C(Matrix) *))METHOD(Matrix, determinant)->function;

         METHOD(Matrix, identity) = Class_findMethod(CO(Matrix), "Identity", module);
         if(METHOD(Matrix, identity))
            Matrix_identity = (void (*)(C(Matrix) *))METHOD(Matrix, identity)->function;

         METHOD(Matrix, inverse) = Class_findMethod(CO(Matrix), "Inverse", module);
         if(METHOD(Matrix, inverse))
            Matrix_inverse = (void (*)(C(Matrix) *, C(Matrix) *))METHOD(Matrix, inverse)->function;

         METHOD(Matrix, multiply) = Class_findMethod(CO(Matrix), "Multiply", module);
         if(METHOD(Matrix, multiply))
            Matrix_multiply = (void (*)(C(Matrix) *, C(Matrix) *, C(Matrix) *))METHOD(Matrix, multiply)->function;

         METHOD(Matrix, rotate) = Class_findMethod(CO(Matrix), "Rotate", module);
         if(METHOD(Matrix, rotate))
            Matrix_rotate = (void (*)(C(Matrix) *, C(Quaternion) *))METHOD(Matrix, rotate)->function;

         METHOD(Matrix, rotationQuaternion) = Class_findMethod(CO(Matrix), "RotationQuaternion", module);
         if(METHOD(Matrix, rotationQuaternion))
            Matrix_rotationQuaternion = (void (*)(C(Matrix) *, C(Quaternion) *))METHOD(Matrix, rotationQuaternion)->function;

         METHOD(Matrix, scale) = Class_findMethod(CO(Matrix), "Scale", module);
         if(METHOD(Matrix, scale))
            Matrix_scale = (void (*)(C(Matrix) *, double, double, double))METHOD(Matrix, scale)->function;

         METHOD(Matrix, toEuler) = Class_findMethod(CO(Matrix), "ToEuler", module);
         if(METHOD(Matrix, toEuler))
            Matrix_toEuler = (void (*)(C(Matrix) *, C(Euler) *))METHOD(Matrix, toEuler)->function;

         METHOD(Matrix, translate) = Class_findMethod(CO(Matrix), "Translate", module);
         if(METHOD(Matrix, translate))
            Matrix_translate = (void (*)(C(Matrix) *, double, double, double))METHOD(Matrix, translate)->function;

         METHOD(Matrix, transpose) = Class_findMethod(CO(Matrix), "Transpose", module);
         if(METHOD(Matrix, transpose))
            Matrix_transpose = (void (*)(C(Matrix) *, C(Matrix) *))METHOD(Matrix, transpose)->function;

         PROPERTY(Matrix, Quaternion) = Class_findProperty(CO(Matrix), "ecere::gfx3D::Quaternion", module);
         if(PROPERTY(Matrix, Quaternion))
         {
            Matrix_from_Quaternion = (void *)PROPERTY(Matrix, Quaternion)->Set;
            Matrix_to_Quaternion = (void *)PROPERTY(Matrix, Quaternion)->Get;
         }
      }
      CO(Mesh) = eC_findClass(module, "Mesh");
      if(CO(Mesh))
      {
         METHOD(Mesh, addPrimitiveGroup) = Class_findMethod(CO(Mesh), "AddPrimitiveGroup", module);
         if(METHOD(Mesh, addPrimitiveGroup))
            Mesh_addPrimitiveGroup = (C(PrimitiveGroup) * (*)(C(Mesh) *, C(PrimitiveGroupType), int))METHOD(Mesh, addPrimitiveGroup)->function;

         METHOD(Mesh, allocate) = Class_findMethod(CO(Mesh), "Allocate", module);
         if(METHOD(Mesh, allocate))
            Mesh_allocate = (C(bool) (*)(C(Mesh) *, C(MeshFeatures), int, C(DisplaySystem)))METHOD(Mesh, allocate)->function;

         METHOD(Mesh, allocatePrimitive) = Class_findMethod(CO(Mesh), "AllocatePrimitive", module);
         if(METHOD(Mesh, allocatePrimitive))
            Mesh_allocatePrimitive = (C(bool) (*)(C(Mesh) *, C(PrimitiveSingle) *, C(PrimitiveGroupType), int))METHOD(Mesh, allocatePrimitive)->function;

         METHOD(Mesh, applyMaterial) = Class_findMethod(CO(Mesh), "ApplyMaterial", module);
         if(METHOD(Mesh, applyMaterial))
            Mesh_applyMaterial = (void (*)(C(Mesh) *, C(Material) *))METHOD(Mesh, applyMaterial)->function;

         METHOD(Mesh, applyTranslucency) = Class_findMethod(CO(Mesh), "ApplyTranslucency", module);
         if(METHOD(Mesh, applyTranslucency))
            Mesh_applyTranslucency = (C(bool) (*)(C(Mesh) *, C(Object) *))METHOD(Mesh, applyTranslucency)->function;

         METHOD(Mesh, computeNormals) = Class_findMethod(CO(Mesh), "ComputeNormals", module);
         if(METHOD(Mesh, computeNormals))
            Mesh_computeNormals = (void (*)(C(Mesh) *))METHOD(Mesh, computeNormals)->function;

         METHOD(Mesh, free) = Class_findMethod(CO(Mesh), "Free", module);
         if(METHOD(Mesh, free))
            Mesh_free = (void (*)(C(Mesh) *, C(MeshFeatures)))METHOD(Mesh, free)->function;

         METHOD(Mesh, freePrimitive) = Class_findMethod(CO(Mesh), "FreePrimitive", module);
         if(METHOD(Mesh, freePrimitive))
            Mesh_freePrimitive = (void (*)(C(Mesh) *, C(PrimitiveSingle) *))METHOD(Mesh, freePrimitive)->function;

         METHOD(Mesh, freePrimitiveGroup) = Class_findMethod(CO(Mesh), "FreePrimitiveGroup", module);
         if(METHOD(Mesh, freePrimitiveGroup))
            Mesh_freePrimitiveGroup = (void (*)(C(Mesh) *, C(PrimitiveGroup) *))METHOD(Mesh, freePrimitiveGroup)->function;

         METHOD(Mesh, getData) = Class_findMethod(CO(Mesh), "GetData", module);
         if(METHOD(Mesh, getData))
            Mesh_getData = (void * (*)(C(Mesh) *))METHOD(Mesh, getData)->function;

         METHOD(Mesh, lock) = Class_findMethod(CO(Mesh), "Lock", module);
         if(METHOD(Mesh, lock))
            Mesh_lock = (C(bool) (*)(C(Mesh) *, C(MeshFeatures)))METHOD(Mesh, lock)->function;

         METHOD(Mesh, lockPrimitive) = Class_findMethod(CO(Mesh), "LockPrimitive", module);
         if(METHOD(Mesh, lockPrimitive))
            Mesh_lockPrimitive = (C(bool) (*)(C(Mesh) *, C(PrimitiveSingle) *))METHOD(Mesh, lockPrimitive)->function;

         METHOD(Mesh, lockPrimitiveGroup) = Class_findMethod(CO(Mesh), "LockPrimitiveGroup", module);
         if(METHOD(Mesh, lockPrimitiveGroup))
            Mesh_lockPrimitiveGroup = (C(bool) (*)(C(Mesh) *, C(PrimitiveGroup) *))METHOD(Mesh, lockPrimitiveGroup)->function;

         METHOD(Mesh, setData) = Class_findMethod(CO(Mesh), "SetData", module);
         if(METHOD(Mesh, setData))
            Mesh_setData = (void (*)(C(Mesh) *, void *))METHOD(Mesh, setData)->function;

         METHOD(Mesh, unlock) = Class_findMethod(CO(Mesh), "Unlock", module);
         if(METHOD(Mesh, unlock))
            Mesh_unlock = (void (*)(C(Mesh) *, C(MeshFeatures)))METHOD(Mesh, unlock)->function;

         METHOD(Mesh, unlockPrimitive) = Class_findMethod(CO(Mesh), "UnlockPrimitive", module);
         if(METHOD(Mesh, unlockPrimitive))
            Mesh_unlockPrimitive = (void (*)(C(Mesh) *, C(PrimitiveSingle) *))METHOD(Mesh, unlockPrimitive)->function;

         METHOD(Mesh, unlockPrimitiveGroup) = Class_findMethod(CO(Mesh), "UnlockPrimitiveGroup", module);
         if(METHOD(Mesh, unlockPrimitiveGroup))
            Mesh_unlockPrimitiveGroup = (void (*)(C(Mesh) *, C(PrimitiveGroup) *))METHOD(Mesh, unlockPrimitiveGroup)->function;

         PROPERTY(Mesh, texCoords) = Class_findProperty(CO(Mesh), "texCoords", module);
         if(PROPERTY(Mesh, texCoords))
         {
            Mesh_set_texCoords = (void *)PROPERTY(Mesh, texCoords)->Set;
            Mesh_get_texCoords = (void *)PROPERTY(Mesh, texCoords)->Get;
         }

         PROPERTY(Mesh, nVertices) = Class_findProperty(CO(Mesh), "nVertices", module);
         if(PROPERTY(Mesh, nVertices))
         {
            Mesh_set_nVertices = (void *)PROPERTY(Mesh, nVertices)->Set;
            Mesh_get_nVertices = (void *)PROPERTY(Mesh, nVertices)->Get;
         }

         PROPERTY(Mesh, vertices) = Class_findProperty(CO(Mesh), "vertices", module);
         if(PROPERTY(Mesh, vertices))
         {
            Mesh_set_vertices = (void *)PROPERTY(Mesh, vertices)->Set;
            Mesh_get_vertices = (void *)PROPERTY(Mesh, vertices)->Get;
         }

         PROPERTY(Mesh, normals) = Class_findProperty(CO(Mesh), "normals", module);
         if(PROPERTY(Mesh, normals))
         {
            Mesh_set_normals = (void *)PROPERTY(Mesh, normals)->Set;
            Mesh_get_normals = (void *)PROPERTY(Mesh, normals)->Get;
         }

         PROPERTY(Mesh, tangents) = Class_findProperty(CO(Mesh), "tangents", module);
         if(PROPERTY(Mesh, tangents))
         {
            Mesh_set_tangents = (void *)PROPERTY(Mesh, tangents)->Set;
            Mesh_get_tangents = (void *)PROPERTY(Mesh, tangents)->Get;
         }

         PROPERTY(Mesh, colors) = Class_findProperty(CO(Mesh), "colors", module);
         if(PROPERTY(Mesh, colors))
         {
            Mesh_set_colors = (void *)PROPERTY(Mesh, colors)->Set;
            Mesh_get_colors = (void *)PROPERTY(Mesh, colors)->Get;
         }

         PROPERTY(Mesh, lightVectors) = Class_findProperty(CO(Mesh), "lightVectors", module);
         if(PROPERTY(Mesh, lightVectors))
         {
            Mesh_set_lightVectors = (void *)PROPERTY(Mesh, lightVectors)->Set;
            Mesh_get_lightVectors = (void *)PROPERTY(Mesh, lightVectors)->Get;
         }

         PROPERTY(Mesh, groups) = Class_findProperty(CO(Mesh), "groups", module);
         if(PROPERTY(Mesh, groups))
            Mesh_get_groups = (void *)PROPERTY(Mesh, groups)->Get;

         PROPERTY(Mesh, flags) = Class_findProperty(CO(Mesh), "flags", module);
         if(PROPERTY(Mesh, flags))
         {
            Mesh_set_flags = (void *)PROPERTY(Mesh, flags)->Set;
            Mesh_get_flags = (void *)PROPERTY(Mesh, flags)->Get;
         }
      }
      CO(MeshFeatures) = eC_findClass(module, "MeshFeatures");
      CO(Object) = eC_findClass(module, "Object");
      if(CO(Object))
      {
         METHOD(Object, addName) = Class_findMethod(CO(Object), "AddName", module);
         if(METHOD(Object, addName))
            Object_addName = (C(bool) (*)(C(Object) *, C(Object) *, const char *))METHOD(Object, addName)->function;

         METHOD(Object, animate) = Class_findMethod(CO(Object), "Animate", module);
         if(METHOD(Object, animate))
            Object_animate = (void (*)(C(Object) *, uint))METHOD(Object, animate)->function;

         METHOD(Object, doubleSided) = Class_findMethod(CO(Object), "DoubleSided", module);
         if(METHOD(Object, doubleSided))
            Object_doubleSided = (void (*)(C(Object) *, C(bool)))METHOD(Object, doubleSided)->function;

         METHOD(Object, duplicate) = Class_findMethod(CO(Object), "Duplicate", module);
         if(METHOD(Object, duplicate))
            Object_duplicate = (void (*)(C(Object) *, C(Object) *))METHOD(Object, duplicate)->function;

         METHOD(Object, find) = Class_findMethod(CO(Object), "Find", module);
         if(METHOD(Object, find))
            Object_find = (C(Object) * (*)(C(Object) *, const char *))METHOD(Object, find)->function;

         METHOD(Object, free) = Class_findMethod(CO(Object), "Free", module);
         if(METHOD(Object, free))
            Object_free = (void (*)(C(Object) *, C(DisplaySystem)))METHOD(Object, free)->function;

         METHOD(Object, freeMesh) = Class_findMethod(CO(Object), "FreeMesh", module);
         if(METHOD(Object, freeMesh))
            Object_freeMesh = (void (*)(C(Object) *, C(DisplaySystem)))METHOD(Object, freeMesh)->function;

         METHOD(Object, initialize) = Class_findMethod(CO(Object), "Initialize", module);
         if(METHOD(Object, initialize))
            Object_initialize = (void (*)(C(Object) *))METHOD(Object, initialize)->function;

         METHOD(Object, initializeMesh) = Class_findMethod(CO(Object), "InitializeMesh", module);
         if(METHOD(Object, initializeMesh))
            Object_initializeMesh = (C(Mesh) * (*)(C(Object) *, C(DisplaySystem)))METHOD(Object, initializeMesh)->function;

         METHOD(Object, intersectsGroundPolygon) = Class_findMethod(CO(Object), "IntersectsGroundPolygon", module);
         if(METHOD(Object, intersectsGroundPolygon))
            Object_intersectsGroundPolygon = (C(bool) (*)(C(Object) *, int, C(Pointf) *))METHOD(Object, intersectsGroundPolygon)->function;

         METHOD(Object, load) = Class_findMethod(CO(Object), "Load", module);
         if(METHOD(Object, load))
            Object_load = (C(bool) (*)(C(Object) *, const char *, const char *, C(DisplaySystem)))METHOD(Object, load)->function;

         METHOD(Object, merge) = Class_findMethod(CO(Object), "Merge", module);
         if(METHOD(Object, merge))
            Object_merge = (C(bool) (*)(C(Object) *, C(DisplaySystem)))METHOD(Object, merge)->function;

         METHOD(Object, move) = Class_findMethod(CO(Object), "Move", module);
         if(METHOD(Object, move))
            Object_move = (void (*)(C(Object) *, C(Vector3D) *))METHOD(Object, move)->function;

         METHOD(Object, rotateEuler) = Class_findMethod(CO(Object), "RotateEuler", module);
         if(METHOD(Object, rotateEuler))
            Object_rotateEuler = (void (*)(C(Object) *, C(Euler) *, C(Euler) *, C(Euler) *))METHOD(Object, rotateEuler)->function;

         METHOD(Object, setMinMaxRadius) = Class_findMethod(CO(Object), "SetMinMaxRadius", module);
         if(METHOD(Object, setMinMaxRadius))
            Object_setMinMaxRadius = (void (*)(C(Object) *, C(bool)))METHOD(Object, setMinMaxRadius)->function;

         METHOD(Object, updateTransform) = Class_findMethod(CO(Object), "UpdateTransform", module);
         if(METHOD(Object, updateTransform))
            Object_updateTransform = (void (*)(C(Object) *))METHOD(Object, updateTransform)->function;

         PROPERTY(Object, transform) = Class_findProperty(CO(Object), "transform", module);
         if(PROPERTY(Object, transform))
         {
            Object_set_transform = (void *)PROPERTY(Object, transform)->Set;
            Object_get_transform = (void *)PROPERTY(Object, transform)->Get;
         }

         PROPERTY(Object, material) = Class_findProperty(CO(Object), "material", module);
         if(PROPERTY(Object, material))
         {
            Object_set_material = (void *)PROPERTY(Object, material)->Set;
            Object_get_material = (void *)PROPERTY(Object, material)->Get;
         }

         PROPERTY(Object, max) = Class_findProperty(CO(Object), "max", module);
         if(PROPERTY(Object, max))
            Object_get_max = (void *)PROPERTY(Object, max)->Get;

         PROPERTY(Object, min) = Class_findProperty(CO(Object), "min", module);
         if(PROPERTY(Object, min))
            Object_get_min = (void *)PROPERTY(Object, min)->Get;

         PROPERTY(Object, center) = Class_findProperty(CO(Object), "center", module);
         if(PROPERTY(Object, center))
            Object_get_center = (void *)PROPERTY(Object, center)->Get;

         PROPERTY(Object, radius) = Class_findProperty(CO(Object), "radius", module);
         if(PROPERTY(Object, radius))
            Object_get_radius = (void *)PROPERTY(Object, radius)->Get;

         PROPERTY(Object, wmax) = Class_findProperty(CO(Object), "wmax", module);
         if(PROPERTY(Object, wmax))
            Object_get_wmax = (void *)PROPERTY(Object, wmax)->Get;

         PROPERTY(Object, wmin) = Class_findProperty(CO(Object), "wmin", module);
         if(PROPERTY(Object, wmin))
            Object_get_wmin = (void *)PROPERTY(Object, wmin)->Get;

         PROPERTY(Object, wcenter) = Class_findProperty(CO(Object), "wcenter", module);
         if(PROPERTY(Object, wcenter))
            Object_get_wcenter = (void *)PROPERTY(Object, wcenter)->Get;

         PROPERTY(Object, wradius) = Class_findProperty(CO(Object), "wradius", module);
         if(PROPERTY(Object, wradius))
            Object_get_wradius = (void *)PROPERTY(Object, wradius)->Get;

         PROPERTY(Object, tag) = Class_findProperty(CO(Object), "tag", module);
         if(PROPERTY(Object, tag))
         {
            Object_set_tag = (void *)PROPERTY(Object, tag)->Set;
            Object_get_tag = (void *)PROPERTY(Object, tag)->Get;
         }

         PROPERTY(Object, frame) = Class_findProperty(CO(Object), "frame", module);
         if(PROPERTY(Object, frame))
         {
            Object_set_frame = (void *)PROPERTY(Object, frame)->Set;
            Object_get_frame = (void *)PROPERTY(Object, frame)->Get;
         }

         PROPERTY(Object, startFrame) = Class_findProperty(CO(Object), "startFrame", module);
         if(PROPERTY(Object, startFrame))
         {
            Object_set_startFrame = (void *)PROPERTY(Object, startFrame)->Set;
            Object_get_startFrame = (void *)PROPERTY(Object, startFrame)->Get;
         }

         PROPERTY(Object, endFrame) = Class_findProperty(CO(Object), "endFrame", module);
         if(PROPERTY(Object, endFrame))
         {
            Object_set_endFrame = (void *)PROPERTY(Object, endFrame)->Set;
            Object_get_endFrame = (void *)PROPERTY(Object, endFrame)->Get;
         }

         PROPERTY(Object, mesh) = Class_findProperty(CO(Object), "mesh", module);
         if(PROPERTY(Object, mesh))
         {
            Object_set_mesh = (void *)PROPERTY(Object, mesh)->Set;
            Object_get_mesh = (void *)PROPERTY(Object, mesh)->Get;
         }

         PROPERTY(Object, camera) = Class_findProperty(CO(Object), "camera", module);
         if(PROPERTY(Object, camera))
            Object_get_camera = (void *)PROPERTY(Object, camera)->Get;

         PROPERTY(Object, firstChild) = Class_findProperty(CO(Object), "firstChild", module);
         if(PROPERTY(Object, firstChild))
            Object_get_firstChild = (void *)PROPERTY(Object, firstChild)->Get;

         PROPERTY(Object, next) = Class_findProperty(CO(Object), "next", module);
         if(PROPERTY(Object, next))
            Object_get_next = (void *)PROPERTY(Object, next)->Get;

         PROPERTY(Object, name) = Class_findProperty(CO(Object), "name", module);
         if(PROPERTY(Object, name))
            Object_get_name = (void *)PROPERTY(Object, name)->Get;

         PROPERTY(Object, matrix) = Class_findProperty(CO(Object), "matrix", module);
         if(PROPERTY(Object, matrix))
            Object_get_matrix = (void *)PROPERTY(Object, matrix)->Get;

         PROPERTY(Object, cameraTarget) = Class_findProperty(CO(Object), "cameraTarget", module);
         if(PROPERTY(Object, cameraTarget))
         {
            Object_set_cameraTarget = (void *)PROPERTY(Object, cameraTarget)->Set;
            Object_get_cameraTarget = (void *)PROPERTY(Object, cameraTarget)->Get;
         }

         PROPERTY(Object, tracks) = Class_findProperty(CO(Object), "tracks", module);
         if(PROPERTY(Object, tracks))
            Object_get_tracks = (void *)PROPERTY(Object, tracks)->Get;

         PROPERTY(Object, flags) = Class_findProperty(CO(Object), "flags", module);
         if(PROPERTY(Object, flags))
         {
            Object_set_flags = (void *)PROPERTY(Object, flags)->Set;
            Object_get_flags = (void *)PROPERTY(Object, flags)->Get;
         }

         PROPERTY(Object, parent) = Class_findProperty(CO(Object), "parent", module);
         if(PROPERTY(Object, parent))
            Object_get_parent = (void *)PROPERTY(Object, parent)->Get;

         PROPERTY(Object, numChildren) = Class_findProperty(CO(Object), "numChildren", module);
         if(PROPERTY(Object, numChildren))
            Object_get_numChildren = (void *)PROPERTY(Object, numChildren)->Get;

         PROPERTY(Object, localMatrixPtr) = Class_findProperty(CO(Object), "localMatrixPtr", module);
         if(PROPERTY(Object, localMatrixPtr))
            Object_get_localMatrixPtr = (void *)PROPERTY(Object, localMatrixPtr)->Get;

         PROPERTY(Object, matrixPtr) = Class_findProperty(CO(Object), "matrixPtr", module);
         if(PROPERTY(Object, matrixPtr))
            Object_get_matrixPtr = (void *)PROPERTY(Object, matrixPtr)->Get;

         PROPERTY(Object, light) = Class_findProperty(CO(Object), "light", module);
         if(PROPERTY(Object, light))
         {
            Object_set_light = (void *)PROPERTY(Object, light)->Set;
            Object_get_light = (void *)PROPERTY(Object, light)->Get;
         }
      }
      CO(ObjectFlags) = eC_findClass(module, "ObjectFlags");
      CO(ObjectFormat) = eC_findClass(module, "ObjectFormat");
      CO(Plane) = eC_findClass(module, "Plane");
      if(CO(Plane))
      {
         METHOD(Plane, fromPointNormal) = Class_findMethod(CO(Plane), "FromPointNormal", module);
         if(METHOD(Plane, fromPointNormal))
            Plane_fromPointNormal = (void (*)(C(Plane) *, C(Vector3D) *, C(Vector3D) *))METHOD(Plane, fromPointNormal)->function;

         METHOD(Plane, fromPoints) = Class_findMethod(CO(Plane), "FromPoints", module);
         if(METHOD(Plane, fromPoints))
            Plane_fromPoints = (void (*)(C(Plane) *, C(Vector3D) *, C(Vector3D) *, C(Vector3D) *))METHOD(Plane, fromPoints)->function;

         METHOD(Plane, fromPointsf) = Class_findMethod(CO(Plane), "FromPointsf", module);
         if(METHOD(Plane, fromPointsf))
            Plane_fromPointsf = (void (*)(C(Plane) *, C(Vector3Df) *, C(Vector3Df) *, C(Vector3Df) *))METHOD(Plane, fromPointsf)->function;

         METHOD(Plane, intersectLine) = Class_findMethod(CO(Plane), "IntersectLine", module);
         if(METHOD(Plane, intersectLine))
            Plane_intersectLine = (void (*)(C(Plane) *, C(Line) *, C(Vector3D) *))METHOD(Plane, intersectLine)->function;

         METHOD(Plane, intersectLinef) = Class_findMethod(CO(Plane), "IntersectLinef", module);
         if(METHOD(Plane, intersectLinef))
            Plane_intersectLinef = (void (*)(C(Plane) *, C(Line) *, C(Vector3Df) *))METHOD(Plane, intersectLinef)->function;

         METHOD(Plane, multMatrix) = Class_findMethod(CO(Plane), "MultMatrix", module);
         if(METHOD(Plane, multMatrix))
            Plane_multMatrix = (void (*)(C(Plane) *, C(Plane) *, C(Matrix) *))METHOD(Plane, multMatrix)->function;
      }
      CO(PrimitiveGroup) = eC_findClass(module, "PrimitiveGroup");
      CO(PrimitiveGroupType) = eC_findClass(module, "PrimitiveGroupType");
      CO(PrimitiveSingle) = eC_findClass(module, "PrimitiveSingle");
      CO(Quaternion) = eC_findClass(module, "Quaternion");
      if(CO(Quaternion))
      {
         METHOD(Quaternion, divide) = Class_findMethod(CO(Quaternion), "Divide", module);
         if(METHOD(Quaternion, divide))
            Quaternion_divide = (void (*)(C(Quaternion) *, C(Quaternion) *, C(Quaternion) *))METHOD(Quaternion, divide)->function;

         METHOD(Quaternion, identity) = Class_findMethod(CO(Quaternion), "Identity", module);
         if(METHOD(Quaternion, identity))
            Quaternion_identity = (void (*)(C(Quaternion) *))METHOD(Quaternion, identity)->function;

         METHOD(Quaternion, inverse) = Class_findMethod(CO(Quaternion), "Inverse", module);
         if(METHOD(Quaternion, inverse))
            Quaternion_inverse = (void (*)(C(Quaternion) *, C(Quaternion) *))METHOD(Quaternion, inverse)->function;

         METHOD(Quaternion, multiply) = Class_findMethod(CO(Quaternion), "Multiply", module);
         if(METHOD(Quaternion, multiply))
            Quaternion_multiply = (void (*)(C(Quaternion) *, C(Quaternion) *, C(Quaternion) *))METHOD(Quaternion, multiply)->function;

         METHOD(Quaternion, normalize) = Class_findMethod(CO(Quaternion), "Normalize", module);
         if(METHOD(Quaternion, normalize))
            Quaternion_normalize = (void (*)(C(Quaternion) *, C(Quaternion) *))METHOD(Quaternion, normalize)->function;

         METHOD(Quaternion, pitch) = Class_findMethod(CO(Quaternion), "Pitch", module);
         if(METHOD(Quaternion, pitch))
            Quaternion_pitch = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, pitch)->function;

         METHOD(Quaternion, roll) = Class_findMethod(CO(Quaternion), "Roll", module);
         if(METHOD(Quaternion, roll))
            Quaternion_roll = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, roll)->function;

         METHOD(Quaternion, rotatePitch) = Class_findMethod(CO(Quaternion), "RotatePitch", module);
         if(METHOD(Quaternion, rotatePitch))
            Quaternion_rotatePitch = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, rotatePitch)->function;

         METHOD(Quaternion, rotateRoll) = Class_findMethod(CO(Quaternion), "RotateRoll", module);
         if(METHOD(Quaternion, rotateRoll))
            Quaternion_rotateRoll = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, rotateRoll)->function;

         METHOD(Quaternion, rotateYaw) = Class_findMethod(CO(Quaternion), "RotateYaw", module);
         if(METHOD(Quaternion, rotateYaw))
            Quaternion_rotateYaw = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, rotateYaw)->function;

         METHOD(Quaternion, rotateYawPitch) = Class_findMethod(CO(Quaternion), "RotateYawPitch", module);
         if(METHOD(Quaternion, rotateYawPitch))
            Quaternion_rotateYawPitch = (void (*)(C(Quaternion) *, C(Angle), C(Angle)))METHOD(Quaternion, rotateYawPitch)->function;

         METHOD(Quaternion, rotationAxis) = Class_findMethod(CO(Quaternion), "RotationAxis", module);
         if(METHOD(Quaternion, rotationAxis))
            Quaternion_rotationAxis = (void (*)(C(Quaternion) *, C(Vector3D) *, C(Angle)))METHOD(Quaternion, rotationAxis)->function;

         METHOD(Quaternion, rotationDirection) = Class_findMethod(CO(Quaternion), "RotationDirection", module);
         if(METHOD(Quaternion, rotationDirection))
            Quaternion_rotationDirection = (void (*)(C(Quaternion) *, C(Vector3D) *))METHOD(Quaternion, rotationDirection)->function;

         METHOD(Quaternion, rotationMatrix) = Class_findMethod(CO(Quaternion), "RotationMatrix", module);
         if(METHOD(Quaternion, rotationMatrix))
            Quaternion_rotationMatrix = (void (*)(C(Quaternion) *, C(Matrix) *))METHOD(Quaternion, rotationMatrix)->function;

         METHOD(Quaternion, rotationYawPitchRoll) = Class_findMethod(CO(Quaternion), "RotationYawPitchRoll", module);
         if(METHOD(Quaternion, rotationYawPitchRoll))
            Quaternion_rotationYawPitchRoll = (void (*)(C(Quaternion) *, C(Euler) *))METHOD(Quaternion, rotationYawPitchRoll)->function;

         METHOD(Quaternion, slerp) = Class_findMethod(CO(Quaternion), "Slerp", module);
         if(METHOD(Quaternion, slerp))
            Quaternion_slerp = (void (*)(C(Quaternion) *, C(Quaternion) *, C(Quaternion) *, float))METHOD(Quaternion, slerp)->function;

         METHOD(Quaternion, toDirection) = Class_findMethod(CO(Quaternion), "ToDirection", module);
         if(METHOD(Quaternion, toDirection))
            Quaternion_toDirection = (void (*)(C(Quaternion) *, C(Vector3D) *))METHOD(Quaternion, toDirection)->function;

         METHOD(Quaternion, yaw) = Class_findMethod(CO(Quaternion), "Yaw", module);
         if(METHOD(Quaternion, yaw))
            Quaternion_yaw = (void (*)(C(Quaternion) *, C(Angle)))METHOD(Quaternion, yaw)->function;

         METHOD(Quaternion, yawPitch) = Class_findMethod(CO(Quaternion), "YawPitch", module);
         if(METHOD(Quaternion, yawPitch))
            Quaternion_yawPitch = (void (*)(C(Quaternion) *, C(Angle), C(Angle)))METHOD(Quaternion, yawPitch)->function;
      }
      CO(RenderPrimitiveType) = eC_findClass(module, "RenderPrimitiveType");
      CO(Transform) = eC_findClass(module, "Transform");
      CO(Vector3D) = eC_findClass(module, "Vector3D");
      if(CO(Vector3D))
      {
         METHOD(Vector3D, add) = Class_findMethod(CO(Vector3D), "Add", module);
         if(METHOD(Vector3D, add))
            Vector3D_add = (void (*)(C(Vector3D) *, C(Vector3D) *, C(Vector3D) *))METHOD(Vector3D, add)->function;

         METHOD(Vector3D, crossProduct) = Class_findMethod(CO(Vector3D), "CrossProduct", module);
         if(METHOD(Vector3D, crossProduct))
            Vector3D_crossProduct = (void (*)(C(Vector3D) *, C(Vector3D) *, C(Vector3D) *))METHOD(Vector3D, crossProduct)->function;

         METHOD(Vector3D, divideMatrix) = Class_findMethod(CO(Vector3D), "DivideMatrix", module);
         if(METHOD(Vector3D, divideMatrix))
            Vector3D_divideMatrix = (void (*)(C(Vector3D) *, C(Vector3D) *, C(Matrix) *))METHOD(Vector3D, divideMatrix)->function;

         METHOD(Vector3D, dotProduct) = Class_findMethod(CO(Vector3D), "DotProduct", module);
         if(METHOD(Vector3D, dotProduct))
            Vector3D_dotProduct = (double (*)(C(Vector3D) *, C(Vector3D) *))METHOD(Vector3D, dotProduct)->function;

         METHOD(Vector3D, dotProductf) = Class_findMethod(CO(Vector3D), "DotProductf", module);
         if(METHOD(Vector3D, dotProductf))
            Vector3D_dotProductf = (double (*)(C(Vector3D) *, C(Vector3Df) *))METHOD(Vector3D, dotProductf)->function;

         METHOD(Vector3D, multMatrix) = Class_findMethod(CO(Vector3D), "MultMatrix", module);
         if(METHOD(Vector3D, multMatrix))
            Vector3D_multMatrix = (void (*)(C(Vector3D) *, C(Vector3D) *, C(Matrix) *))METHOD(Vector3D, multMatrix)->function;

         METHOD(Vector3D, multMatrixf) = Class_findMethod(CO(Vector3D), "MultMatrixf", module);
         if(METHOD(Vector3D, multMatrixf))
            Vector3D_multMatrixf = (void (*)(C(Vector3D) *, C(Vector3Df) *, C(Matrix) *))METHOD(Vector3D, multMatrixf)->function;

         METHOD(Vector3D, normalize) = Class_findMethod(CO(Vector3D), "Normalize", module);
         if(METHOD(Vector3D, normalize))
            Vector3D_normalize = (void (*)(C(Vector3D) *, C(Vector3D) *))METHOD(Vector3D, normalize)->function;

         METHOD(Vector3D, scale) = Class_findMethod(CO(Vector3D), "Scale", module);
         if(METHOD(Vector3D, scale))
            Vector3D_scale = (void (*)(C(Vector3D) *, C(Vector3D) *, double))METHOD(Vector3D, scale)->function;

         METHOD(Vector3D, subtract) = Class_findMethod(CO(Vector3D), "Subtract", module);
         if(METHOD(Vector3D, subtract))
            Vector3D_subtract = (void (*)(C(Vector3D) *, C(Vector3D) *, C(Vector3D) *))METHOD(Vector3D, subtract)->function;

         PROPERTY(Vector3D, length) = Class_findProperty(CO(Vector3D), "length", module);
         if(PROPERTY(Vector3D, length))
            Vector3D_get_length = (void *)PROPERTY(Vector3D, length)->Get;

         PROPERTY(Vector3D, lengthApprox) = Class_findProperty(CO(Vector3D), "lengthApprox", module);
         if(PROPERTY(Vector3D, lengthApprox))
            Vector3D_get_lengthApprox = (void *)PROPERTY(Vector3D, lengthApprox)->Get;
      }
      CO(Vector3Df) = eC_findClass(module, "Vector3Df");
      if(CO(Vector3Df))
      {
         METHOD(Vector3Df, add) = Class_findMethod(CO(Vector3Df), "Add", module);
         if(METHOD(Vector3Df, add))
            Vector3Df_add = (void (*)(C(Vector3Df) *, C(Vector3Df) *, C(Vector3Df) *))METHOD(Vector3Df, add)->function;

         METHOD(Vector3Df, crossProduct) = Class_findMethod(CO(Vector3Df), "CrossProduct", module);
         if(METHOD(Vector3Df, crossProduct))
            Vector3Df_crossProduct = (void (*)(C(Vector3Df) *, C(Vector3Df) *, C(Vector3Df) *))METHOD(Vector3Df, crossProduct)->function;

         METHOD(Vector3Df, divideMatrix) = Class_findMethod(CO(Vector3Df), "DivideMatrix", module);
         if(METHOD(Vector3Df, divideMatrix))
            Vector3Df_divideMatrix = (void (*)(C(Vector3Df) *, C(Vector3Df) *, C(Matrix) *))METHOD(Vector3Df, divideMatrix)->function;

         METHOD(Vector3Df, dotProduct) = Class_findMethod(CO(Vector3Df), "DotProduct", module);
         if(METHOD(Vector3Df, dotProduct))
            Vector3Df_dotProduct = (double (*)(C(Vector3Df) *, C(Vector3Df) *))METHOD(Vector3Df, dotProduct)->function;

         METHOD(Vector3Df, multMatrix) = Class_findMethod(CO(Vector3Df), "MultMatrix", module);
         if(METHOD(Vector3Df, multMatrix))
            Vector3Df_multMatrix = (void (*)(C(Vector3Df) *, C(Vector3Df) *, C(Matrix) *))METHOD(Vector3Df, multMatrix)->function;

         METHOD(Vector3Df, normalize) = Class_findMethod(CO(Vector3Df), "Normalize", module);
         if(METHOD(Vector3Df, normalize))
            Vector3Df_normalize = (void (*)(C(Vector3Df) *, C(Vector3Df) *))METHOD(Vector3Df, normalize)->function;

         METHOD(Vector3Df, scale) = Class_findMethod(CO(Vector3Df), "Scale", module);
         if(METHOD(Vector3Df, scale))
            Vector3Df_scale = (void (*)(C(Vector3Df) *, C(Vector3Df) *, float))METHOD(Vector3Df, scale)->function;

         METHOD(Vector3Df, subtract) = Class_findMethod(CO(Vector3Df), "Subtract", module);
         if(METHOD(Vector3Df, subtract))
            Vector3Df_subtract = (void (*)(C(Vector3Df) *, C(Vector3Df) *, C(Vector3Df) *))METHOD(Vector3Df, subtract)->function;

         PROPERTY(Vector3Df, length) = Class_findProperty(CO(Vector3Df), "length", module);
         if(PROPERTY(Vector3Df, length))
            Vector3Df_get_length = (void *)PROPERTY(Vector3Df, length)->Get;

         PROPERTY(Vector3Df, lengthApprox) = Class_findProperty(CO(Vector3Df), "lengthApprox", module);
         if(PROPERTY(Vector3Df, lengthApprox))
            Vector3Df_get_lengthApprox = (void *)PROPERTY(Vector3Df, lengthApprox)->Get;
      }
      CO(Cube) = eC_findClass(module, "Cube");
      if(CO(Cube))
      {
         METHOD(Cube, create) = Class_findMethod(CO(Cube), "Create", module);
         if(METHOD(Cube, create))
            Cube_create = (C(bool) (*)(C(Cube) *, C(DisplaySystem)))METHOD(Cube, create)->function;

         PROPERTY(Cube, size) = Class_findProperty(CO(Cube), "size", module);
         if(PROPERTY(Cube, size))
            Cube_set_size = (void *)PROPERTY(Cube, size)->Set;
      }
      CO(SkyBox) = eC_findClass(module, "SkyBox");
      if(CO(SkyBox))
      {
         METHOD(SkyBox, create) = Class_findMethod(CO(SkyBox), "Create", module);
         if(METHOD(SkyBox, create))
            SkyBox_create = (C(bool) (*)(C(SkyBox) *, C(DisplaySystem)))METHOD(SkyBox, create)->function;

         METHOD(SkyBox, render) = Class_findMethod(CO(SkyBox), "Render", module);
         if(METHOD(SkyBox, render))
            SkyBox_render = (void (*)(C(SkyBox) *, C(Camera), C(Display)))METHOD(SkyBox, render)->function;

         PROPERTY(SkyBox, size) = Class_findProperty(CO(SkyBox), "size", module);
         if(PROPERTY(SkyBox, size))
            SkyBox_set_size = (void *)PROPERTY(SkyBox, size)->Set;

         PROPERTY(SkyBox, folder) = Class_findProperty(CO(SkyBox), "folder", module);
         if(PROPERTY(SkyBox, folder))
            SkyBox_set_folder = (void *)PROPERTY(SkyBox, folder)->Set;

         PROPERTY(SkyBox, extension) = Class_findProperty(CO(SkyBox), "extension", module);
         if(PROPERTY(SkyBox, extension))
            SkyBox_set_extension = (void *)PROPERTY(SkyBox, extension)->Set;

         PROPERTY(SkyBox, newStyle) = Class_findProperty(CO(SkyBox), "newStyle", module);
         if(PROPERTY(SkyBox, newStyle))
            SkyBox_set_newStyle = (void *)PROPERTY(SkyBox, newStyle)->Set;

         PROPERTY(SkyBox, cubeMap) = Class_findProperty(CO(SkyBox), "cubeMap", module);
         if(PROPERTY(SkyBox, cubeMap))
            SkyBox_set_cubeMap = (void *)PROPERTY(SkyBox, cubeMap)->Set;
      }
      CO(Sphere) = eC_findClass(module, "Sphere");
      if(CO(Sphere))
      {
         METHOD(Sphere, create) = Class_findMethod(CO(Sphere), "Create", module);
         if(METHOD(Sphere, create))
            Sphere_create = (C(bool) (*)(C(Sphere) *, C(DisplaySystem)))METHOD(Sphere, create)->function;

         PROPERTY(Sphere, numLat) = Class_findProperty(CO(Sphere), "numLat", module);
         if(PROPERTY(Sphere, numLat))
            Sphere_set_numLat = (void *)PROPERTY(Sphere, numLat)->Set;

         PROPERTY(Sphere, numLon) = Class_findProperty(CO(Sphere), "numLon", module);
         if(PROPERTY(Sphere, numLon))
            Sphere_set_numLon = (void *)PROPERTY(Sphere, numLon)->Set;

         PROPERTY(Sphere, flattenedBody) = Class_findProperty(CO(Sphere), "flattenedBody", module);
         if(PROPERTY(Sphere, flattenedBody))
            Sphere_set_flattenedBody = (void *)PROPERTY(Sphere, flattenedBody)->Set;
      }
      CO(Anchor) = eC_findClass(module, "Anchor");
      CO(AnchorValue) = eC_findClass(module, "AnchorValue");
      if(CO(AnchorValue))
      {
         PROPERTY(AnchorValue, MinMaxValue) = Class_findProperty(CO(AnchorValue), "ecere::sys::MinMaxValue", module);
         if(PROPERTY(AnchorValue, MinMaxValue))
         {
            AnchorValue_from_MinMaxValue = (void *)PROPERTY(AnchorValue, MinMaxValue)->Set;
            AnchorValue_to_MinMaxValue = (void *)PROPERTY(AnchorValue, MinMaxValue)->Get;
         }

         PROPERTY(AnchorValue, int) = Class_findProperty(CO(AnchorValue), "int", module);
         if(PROPERTY(AnchorValue, int))
         {
            AnchorValue_from_int = (void *)PROPERTY(AnchorValue, int)->Set;
            AnchorValue_to_int = (void *)PROPERTY(AnchorValue, int)->Get;
         }

         PROPERTY(AnchorValue, double) = Class_findProperty(CO(AnchorValue), "double", module);
         if(PROPERTY(AnchorValue, double))
         {
            AnchorValue_from_double = (void *)PROPERTY(AnchorValue, double)->Set;
            AnchorValue_to_double = (void *)PROPERTY(AnchorValue, double)->Get;
         }
      }
      CO(AnchorValueType) = eC_findClass(module, "AnchorValueType");
      CO(BorderBits) = eC_findClass(module, "BorderBits");
      CO(BorderStyle) = eC_findClass(module, "BorderStyle");
      CO(ClipBoard) = eC_findClass(module, "ClipBoard");
      if(CO(ClipBoard))
      {
         METHOD(ClipBoard, allocate) = Class_findMethod(CO(ClipBoard), "Allocate", module);
         if(METHOD(ClipBoard, allocate))
            ClipBoard_allocate = (C(bool) (*)(C(ClipBoard) *, uint))METHOD(ClipBoard, allocate)->function;

         METHOD(ClipBoard, clear) = Class_findMethod(CO(ClipBoard), "Clear", module);
         if(METHOD(ClipBoard, clear))
            ClipBoard_clear = (void (*)(C(ClipBoard) *))METHOD(ClipBoard, clear)->function;

         METHOD(ClipBoard, load) = Class_findMethod(CO(ClipBoard), "Load", module);
         if(METHOD(ClipBoard, load))
            ClipBoard_load = (C(bool) (*)(C(ClipBoard) *))METHOD(ClipBoard, load)->function;

         METHOD(ClipBoard, save) = Class_findMethod(CO(ClipBoard), "Save", module);
         if(METHOD(ClipBoard, save))
            ClipBoard_save = (C(bool) (*)(C(ClipBoard) *))METHOD(ClipBoard, save)->function;

         METHOD(ClipBoard, unload) = Class_findMethod(CO(ClipBoard), "Unload", module);
         if(METHOD(ClipBoard, unload))
            ClipBoard_unload = (void (*)(C(ClipBoard) *))METHOD(ClipBoard, unload)->function;

         PROPERTY(ClipBoard, memory) = Class_findProperty(CO(ClipBoard), "memory", module);
         if(PROPERTY(ClipBoard, memory))
            ClipBoard_get_memory = (void *)PROPERTY(ClipBoard, memory)->Get;
      }
      CO(CommonControl) = eC_findClass(module, "CommonControl");
      if(CO(CommonControl))
      {
         PROPERTY(CommonControl, toolTip) = Class_findProperty(CO(CommonControl), "toolTip", module);
         if(PROPERTY(CommonControl, toolTip))
         {
            CommonControl_set_toolTip = (void *)PROPERTY(CommonControl, toolTip)->Set;
            CommonControl_get_toolTip = (void *)PROPERTY(CommonControl, toolTip)->Get;
         }
      }
      CO(ControllableWindow) = eC_findClass(module, "ControllableWindow");
      CO(CreationActivationOption) = eC_findClass(module, "CreationActivationOption");
      CO(Cursor) = eC_findClass(module, "Cursor");
      if(CO(Cursor))
      {
         METHOD(Cursor, load) = Class_findMethod(CO(Cursor), "Load", module);
         if(METHOD(Cursor, load))
            Cursor_load = (C(bool) (*)(C(Cursor), const char *, int, int, byte *))METHOD(Cursor, load)->function;

         PROPERTY(Cursor, systemCursor) = Class_findProperty(CO(Cursor), "systemCursor", module);
         if(PROPERTY(Cursor, systemCursor))
            Cursor_set_systemCursor = (void *)PROPERTY(Cursor, systemCursor)->Set;
      }
      CO(DialogResult) = eC_findClass(module, "DialogResult");
      CO(Extent) = eC_findClass(module, "Extent");
      if(CO(Extent))
      {
         METHOD(Extent, addBox) = Class_findMethod(CO(Extent), "AddBox", module);
         if(METHOD(Extent, addBox))
            Extent_addBox = (void (*)(C(Extent) *, C(Box) *))METHOD(Extent, addBox)->function;

         METHOD(Extent, copy) = Class_findMethod(CO(Extent), "Copy", module);
         if(METHOD(Extent, copy))
            Extent_copy = (void (*)(C(Extent) *, C(Extent) *))METHOD(Extent, copy)->function;

         METHOD(Extent, empty) = Class_findMethod(CO(Extent), "Empty", module);
         if(METHOD(Extent, empty))
            Extent_empty = (void (*)(C(Extent) *))METHOD(Extent, empty)->function;

         METHOD(Extent, excludeBox) = Class_findMethod(CO(Extent), "ExcludeBox", module);
         if(METHOD(Extent, excludeBox))
            Extent_excludeBox = (void (*)(C(Extent) *, C(Box) *, C(Extent) *))METHOD(Extent, excludeBox)->function;

         METHOD(Extent, exclusion) = Class_findMethod(CO(Extent), "Exclusion", module);
         if(METHOD(Extent, exclusion))
            Extent_exclusion = (void (*)(C(Extent) *, C(Extent) *, C(Extent) *))METHOD(Extent, exclusion)->function;

         METHOD(Extent, intersectBox) = Class_findMethod(CO(Extent), "IntersectBox", module);
         if(METHOD(Extent, intersectBox))
            Extent_intersectBox = (void (*)(C(Extent) *, C(Box) *))METHOD(Extent, intersectBox)->function;

         METHOD(Extent, intersection) = Class_findMethod(CO(Extent), "Intersection", module);
         if(METHOD(Extent, intersection))
            Extent_intersection = (void (*)(C(Extent) *, C(Extent) *, C(Extent) *, C(Extent) *, C(Extent) *))METHOD(Extent, intersection)->function;

         METHOD(Extent, offset) = Class_findMethod(CO(Extent), "Offset", module);
         if(METHOD(Extent, offset))
            Extent_offset = (void (*)(C(Extent) *, int, int))METHOD(Extent, offset)->function;

         METHOD(Extent, union) = Class_findMethod(CO(Extent), "Union", module);
         if(METHOD(Extent, union))
            Extent_union = (void (*)(C(Extent) *, C(Extent) *, C(Extent) *))METHOD(Extent, union)->function;

         METHOD(Extent, unionBox) = Class_findMethod(CO(Extent), "UnionBox", module);
         if(METHOD(Extent, unionBox))
            Extent_unionBox = (void (*)(C(Extent) *, C(Box) *, C(Extent) *))METHOD(Extent, unionBox)->function;
      }
      CO(GuiApplication) = eC_findClass(module, "GuiApplication");
      if(CO(GuiApplication))
      {
         METHOD(GuiApplication, cycle) = Class_findMethod(CO(GuiApplication), "Cycle", module);
         if(METHOD(GuiApplication, cycle))
            M_VTBLID(GuiApplication, cycle) = METHOD(GuiApplication, cycle)->vid;

         METHOD(GuiApplication, getCursor) = Class_findMethod(CO(GuiApplication), "GetCursor", module);
         if(METHOD(GuiApplication, getCursor))
            GuiApplication_getCursor = (C(Cursor) (*)(C(GuiApplication), C(SystemCursor)))METHOD(GuiApplication, getCursor)->function;

         METHOD(GuiApplication, getKeyState) = Class_findMethod(CO(GuiApplication), "GetKeyState", module);
         if(METHOD(GuiApplication, getKeyState))
            GuiApplication_getKeyState = (C(bool) (*)(C(GuiApplication), C(Key)))METHOD(GuiApplication, getKeyState)->function;

         METHOD(GuiApplication, getMouseState) = Class_findMethod(CO(GuiApplication), "GetMouseState", module);
         if(METHOD(GuiApplication, getMouseState))
            GuiApplication_getMouseState = (C(bool) (*)(C(GuiApplication), C(MouseButtons) *, int *, int *))METHOD(GuiApplication, getMouseState)->function;

         METHOD(GuiApplication, init) = Class_findMethod(CO(GuiApplication), "Init", module);
         if(METHOD(GuiApplication, init))
            M_VTBLID(GuiApplication, init) = METHOD(GuiApplication, init)->vid;

         METHOD(GuiApplication, lock) = Class_findMethod(CO(GuiApplication), "Lock", module);
         if(METHOD(GuiApplication, lock))
            GuiApplication_lock = (void (*)(C(GuiApplication)))METHOD(GuiApplication, lock)->function;

         METHOD(GuiApplication, lockEx) = Class_findMethod(CO(GuiApplication), "LockEx", module);
         if(METHOD(GuiApplication, lockEx))
            GuiApplication_lockEx = (void (*)(C(GuiApplication), int))METHOD(GuiApplication, lockEx)->function;

         METHOD(GuiApplication, pauseNetworkEvents) = Class_findMethod(CO(GuiApplication), "PauseNetworkEvents", module);
         if(METHOD(GuiApplication, pauseNetworkEvents))
            GuiApplication_pauseNetworkEvents = (void (*)(C(GuiApplication)))METHOD(GuiApplication, pauseNetworkEvents)->function;

         METHOD(GuiApplication, processFileNotifications) = Class_findMethod(CO(GuiApplication), "ProcessFileNotifications", module);
         if(METHOD(GuiApplication, processFileNotifications))
            GuiApplication_processFileNotifications = (C(bool) (*)(C(GuiApplication)))METHOD(GuiApplication, processFileNotifications)->function;

         METHOD(GuiApplication, processInput) = Class_findMethod(CO(GuiApplication), "ProcessInput", module);
         if(METHOD(GuiApplication, processInput))
            GuiApplication_processInput = (C(bool) (*)(C(GuiApplication), C(bool)))METHOD(GuiApplication, processInput)->function;

         METHOD(GuiApplication, processNetworkEvents) = Class_findMethod(CO(GuiApplication), "ProcessNetworkEvents", module);
         if(METHOD(GuiApplication, processNetworkEvents))
            GuiApplication_processNetworkEvents = (C(bool) (*)(C(GuiApplication)))METHOD(GuiApplication, processNetworkEvents)->function;

         METHOD(GuiApplication, resumeNetworkEvents) = Class_findMethod(CO(GuiApplication), "ResumeNetworkEvents", module);
         if(METHOD(GuiApplication, resumeNetworkEvents))
            GuiApplication_resumeNetworkEvents = (void (*)(C(GuiApplication)))METHOD(GuiApplication, resumeNetworkEvents)->function;

         METHOD(GuiApplication, setDesktopPosition) = Class_findMethod(CO(GuiApplication), "SetDesktopPosition", module);
         if(METHOD(GuiApplication, setDesktopPosition))
            GuiApplication_setDesktopPosition = (C(bool) (*)(C(GuiApplication), int, int, int, int, C(bool)))METHOD(GuiApplication, setDesktopPosition)->function;

         METHOD(GuiApplication, signalEvent) = Class_findMethod(CO(GuiApplication), "SignalEvent", module);
         if(METHOD(GuiApplication, signalEvent))
            GuiApplication_signalEvent = (void (*)(C(GuiApplication)))METHOD(GuiApplication, signalEvent)->function;

         METHOD(GuiApplication, switchMode) = Class_findMethod(CO(GuiApplication), "SwitchMode", module);
         if(METHOD(GuiApplication, switchMode))
            GuiApplication_switchMode = (C(bool) (*)(C(GuiApplication), C(bool), const char *, C(Resolution), C(PixelFormat), int, const char *, C(bool)))METHOD(GuiApplication, switchMode)->function;

         METHOD(GuiApplication, terminate) = Class_findMethod(CO(GuiApplication), "Terminate", module);
         if(METHOD(GuiApplication, terminate))
            M_VTBLID(GuiApplication, terminate) = METHOD(GuiApplication, terminate)->vid;

         METHOD(GuiApplication, unlock) = Class_findMethod(CO(GuiApplication), "Unlock", module);
         if(METHOD(GuiApplication, unlock))
            GuiApplication_unlock = (void (*)(C(GuiApplication)))METHOD(GuiApplication, unlock)->function;

         METHOD(GuiApplication, unlockEx) = Class_findMethod(CO(GuiApplication), "UnlockEx", module);
         if(METHOD(GuiApplication, unlockEx))
            GuiApplication_unlockEx = (int (*)(C(GuiApplication)))METHOD(GuiApplication, unlockEx)->function;

         METHOD(GuiApplication, updateDisplay) = Class_findMethod(CO(GuiApplication), "UpdateDisplay", module);
         if(METHOD(GuiApplication, updateDisplay))
            GuiApplication_updateDisplay = (void (*)(C(GuiApplication)))METHOD(GuiApplication, updateDisplay)->function;

         METHOD(GuiApplication, wait) = Class_findMethod(CO(GuiApplication), "Wait", module);
         if(METHOD(GuiApplication, wait))
            GuiApplication_wait = (void (*)(C(GuiApplication)))METHOD(GuiApplication, wait)->function;

         METHOD(GuiApplication, waitEvent) = Class_findMethod(CO(GuiApplication), "WaitEvent", module);
         if(METHOD(GuiApplication, waitEvent))
            GuiApplication_waitEvent = (void (*)(C(GuiApplication)))METHOD(GuiApplication, waitEvent)->function;

         METHOD(GuiApplication, waitNetworkEvent) = Class_findMethod(CO(GuiApplication), "WaitNetworkEvent", module);
         if(METHOD(GuiApplication, waitNetworkEvent))
            GuiApplication_waitNetworkEvent = (void (*)(C(GuiApplication)))METHOD(GuiApplication, waitNetworkEvent)->function;

         PROPERTY(GuiApplication, appName) = Class_findProperty(CO(GuiApplication), "appName", module);
         if(PROPERTY(GuiApplication, appName))
         {
            GuiApplication_set_appName = (void *)PROPERTY(GuiApplication, appName)->Set;
            GuiApplication_get_appName = (void *)PROPERTY(GuiApplication, appName)->Get;
         }

         PROPERTY(GuiApplication, semaphore) = Class_findProperty(CO(GuiApplication), "semaphore", module);
         if(PROPERTY(GuiApplication, semaphore))
            GuiApplication_get_semaphore = (void *)PROPERTY(GuiApplication, semaphore)->Get;

         PROPERTY(GuiApplication, alwaysEmptyInput) = Class_findProperty(CO(GuiApplication), "alwaysEmptyInput", module);
         if(PROPERTY(GuiApplication, alwaysEmptyInput))
         {
            GuiApplication_set_alwaysEmptyInput = (void *)PROPERTY(GuiApplication, alwaysEmptyInput)->Set;
            GuiApplication_get_alwaysEmptyInput = (void *)PROPERTY(GuiApplication, alwaysEmptyInput)->Get;
         }

         PROPERTY(GuiApplication, fullScreen) = Class_findProperty(CO(GuiApplication), "fullScreen", module);
         if(PROPERTY(GuiApplication, fullScreen))
         {
            GuiApplication_set_fullScreen = (void *)PROPERTY(GuiApplication, fullScreen)->Set;
            GuiApplication_get_fullScreen = (void *)PROPERTY(GuiApplication, fullScreen)->Get;
         }

         PROPERTY(GuiApplication, driver) = Class_findProperty(CO(GuiApplication), "driver", module);
         if(PROPERTY(GuiApplication, driver))
         {
            GuiApplication_set_driver = (void *)PROPERTY(GuiApplication, driver)->Set;
            GuiApplication_get_driver = (void *)PROPERTY(GuiApplication, driver)->Get;
         }

         PROPERTY(GuiApplication, resolution) = Class_findProperty(CO(GuiApplication), "resolution", module);
         if(PROPERTY(GuiApplication, resolution))
         {
            GuiApplication_set_resolution = (void *)PROPERTY(GuiApplication, resolution)->Set;
            GuiApplication_get_resolution = (void *)PROPERTY(GuiApplication, resolution)->Get;
         }

         PROPERTY(GuiApplication, pixelFormat) = Class_findProperty(CO(GuiApplication), "pixelFormat", module);
         if(PROPERTY(GuiApplication, pixelFormat))
         {
            GuiApplication_set_pixelFormat = (void *)PROPERTY(GuiApplication, pixelFormat)->Set;
            GuiApplication_get_pixelFormat = (void *)PROPERTY(GuiApplication, pixelFormat)->Get;
         }

         PROPERTY(GuiApplication, refreshRate) = Class_findProperty(CO(GuiApplication), "refreshRate", module);
         if(PROPERTY(GuiApplication, refreshRate))
         {
            GuiApplication_set_refreshRate = (void *)PROPERTY(GuiApplication, refreshRate)->Set;
            GuiApplication_get_refreshRate = (void *)PROPERTY(GuiApplication, refreshRate)->Get;
         }

         PROPERTY(GuiApplication, skin) = Class_findProperty(CO(GuiApplication), "skin", module);
         if(PROPERTY(GuiApplication, skin))
         {
            GuiApplication_set_skin = (void *)PROPERTY(GuiApplication, skin)->Set;
            GuiApplication_get_skin = (void *)PROPERTY(GuiApplication, skin)->Get;
         }

         PROPERTY(GuiApplication, textMode) = Class_findProperty(CO(GuiApplication), "textMode", module);
         if(PROPERTY(GuiApplication, textMode))
         {
            GuiApplication_set_textMode = (void *)PROPERTY(GuiApplication, textMode)->Set;
            GuiApplication_get_textMode = (void *)PROPERTY(GuiApplication, textMode)->Get;
         }

         PROPERTY(GuiApplication, desktop) = Class_findProperty(CO(GuiApplication), "desktop", module);
         if(PROPERTY(GuiApplication, desktop))
            GuiApplication_get_desktop = (void *)PROPERTY(GuiApplication, desktop)->Get;

         PROPERTY(GuiApplication, drivers) = Class_findProperty(CO(GuiApplication), "drivers", module);
         if(PROPERTY(GuiApplication, drivers))
            GuiApplication_get_drivers = (void *)PROPERTY(GuiApplication, drivers)->Get;

         PROPERTY(GuiApplication, skins) = Class_findProperty(CO(GuiApplication), "skins", module);
         if(PROPERTY(GuiApplication, skins))
            GuiApplication_get_skins = (void *)PROPERTY(GuiApplication, skins)->Get;

         PROPERTY(GuiApplication, currentSkin) = Class_findProperty(CO(GuiApplication), "currentSkin", module);
         if(PROPERTY(GuiApplication, currentSkin))
            GuiApplication_get_currentSkin = (void *)PROPERTY(GuiApplication, currentSkin)->Get;

         PROPERTY(GuiApplication, numDrivers) = Class_findProperty(CO(GuiApplication), "numDrivers", module);
         if(PROPERTY(GuiApplication, numDrivers))
            GuiApplication_get_numDrivers = (void *)PROPERTY(GuiApplication, numDrivers)->Get;

         PROPERTY(GuiApplication, numSkins) = Class_findProperty(CO(GuiApplication), "numSkins", module);
         if(PROPERTY(GuiApplication, numSkins))
            GuiApplication_get_numSkins = (void *)PROPERTY(GuiApplication, numSkins)->Get;

         PROPERTY(GuiApplication, timerResolution) = Class_findProperty(CO(GuiApplication), "timerResolution", module);
         if(PROPERTY(GuiApplication, timerResolution))
            GuiApplication_set_timerResolution = (void *)PROPERTY(GuiApplication, timerResolution)->Set;

         PROPERTY(GuiApplication, acquiredWindow) = Class_findProperty(CO(GuiApplication), "acquiredWindow", module);
         if(PROPERTY(GuiApplication, acquiredWindow))
            GuiApplication_get_acquiredWindow = (void *)PROPERTY(GuiApplication, acquiredWindow)->Get;
      }
      CO(Interface) = eC_findClass(module, "Interface");
      if(CO(Interface))
      {
         METHOD(Interface, acquireInput) = Class_findMethod(CO(Interface), "AcquireInput", module);
         if(METHOD(Interface, acquireInput))
            M_VTBLID(Interface, acquireInput) = METHOD(Interface, acquireInput)->vid;

         METHOD(Interface, activateRootWindow) = Class_findMethod(CO(Interface), "ActivateRootWindow", module);
         if(METHOD(Interface, activateRootWindow))
            M_VTBLID(Interface, activateRootWindow) = METHOD(Interface, activateRootWindow)->vid;

         METHOD(Interface, allocateClipboard) = Class_findMethod(CO(Interface), "AllocateClipboard", module);
         if(METHOD(Interface, allocateClipboard))
            M_VTBLID(Interface, allocateClipboard) = METHOD(Interface, allocateClipboard)->vid;

         METHOD(Interface, clearClipboard) = Class_findMethod(CO(Interface), "ClearClipboard", module);
         if(METHOD(Interface, clearClipboard))
            M_VTBLID(Interface, clearClipboard) = METHOD(Interface, clearClipboard)->vid;

         METHOD(Interface, createRootWindow) = Class_findMethod(CO(Interface), "CreateRootWindow", module);
         if(METHOD(Interface, createRootWindow))
            M_VTBLID(Interface, createRootWindow) = METHOD(Interface, createRootWindow)->vid;

         METHOD(Interface, destroyRootWindow) = Class_findMethod(CO(Interface), "DestroyRootWindow", module);
         if(METHOD(Interface, destroyRootWindow))
            M_VTBLID(Interface, destroyRootWindow) = METHOD(Interface, destroyRootWindow)->vid;

         METHOD(Interface, ensureFullScreen) = Class_findMethod(CO(Interface), "EnsureFullScreen", module);
         if(METHOD(Interface, ensureFullScreen))
            M_VTBLID(Interface, ensureFullScreen) = METHOD(Interface, ensureFullScreen)->vid;

         METHOD(Interface, flashRootWindow) = Class_findMethod(CO(Interface), "FlashRootWindow", module);
         if(METHOD(Interface, flashRootWindow))
            M_VTBLID(Interface, flashRootWindow) = METHOD(Interface, flashRootWindow)->vid;

         METHOD(Interface, getCurrentMode) = Class_findMethod(CO(Interface), "GetCurrentMode", module);
         if(METHOD(Interface, getCurrentMode))
            M_VTBLID(Interface, getCurrentMode) = METHOD(Interface, getCurrentMode)->vid;

         METHOD(Interface, getExtendedKey) = Class_findMethod(CO(Interface), "GetExtendedKey", module);
         if(METHOD(Interface, getExtendedKey))
            Interface_getExtendedKey = (C(Key) (*)(C(Key)))METHOD(Interface, getExtendedKey)->function;

         METHOD(Interface, getJoystickState) = Class_findMethod(CO(Interface), "GetJoystickState", module);
         if(METHOD(Interface, getJoystickState))
            M_VTBLID(Interface, getJoystickState) = METHOD(Interface, getJoystickState)->vid;

         METHOD(Interface, getKeyState) = Class_findMethod(CO(Interface), "GetKeyState", module);
         if(METHOD(Interface, getKeyState))
            M_VTBLID(Interface, getKeyState) = METHOD(Interface, getKeyState)->vid;

         METHOD(Interface, getMousePosition) = Class_findMethod(CO(Interface), "GetMousePosition", module);
         if(METHOD(Interface, getMousePosition))
            M_VTBLID(Interface, getMousePosition) = METHOD(Interface, getMousePosition)->vid;

         METHOD(Interface, getMouseState) = Class_findMethod(CO(Interface), "GetMouseState", module);
         if(METHOD(Interface, getMouseState))
            M_VTBLID(Interface, getMouseState) = METHOD(Interface, getMouseState)->vid;

         METHOD(Interface, getScreenArea) = Class_findMethod(CO(Interface), "GetScreenArea", module);
         if(METHOD(Interface, getScreenArea))
            M_VTBLID(Interface, getScreenArea) = METHOD(Interface, getScreenArea)->vid;

         METHOD(Interface, graphicsDrivers) = Class_findMethod(CO(Interface), "GraphicsDrivers", module);
         if(METHOD(Interface, graphicsDrivers))
            M_VTBLID(Interface, graphicsDrivers) = METHOD(Interface, graphicsDrivers)->vid;

         METHOD(Interface, initialize) = Class_findMethod(CO(Interface), "Initialize", module);
         if(METHOD(Interface, initialize))
            M_VTBLID(Interface, initialize) = METHOD(Interface, initialize)->vid;

         METHOD(Interface, loadClipboard) = Class_findMethod(CO(Interface), "LoadClipboard", module);
         if(METHOD(Interface, loadClipboard))
            M_VTBLID(Interface, loadClipboard) = METHOD(Interface, loadClipboard)->vid;

         METHOD(Interface, lock) = Class_findMethod(CO(Interface), "Lock", module);
         if(METHOD(Interface, lock))
            M_VTBLID(Interface, lock) = METHOD(Interface, lock)->vid;

         METHOD(Interface, offsetWindow) = Class_findMethod(CO(Interface), "OffsetWindow", module);
         if(METHOD(Interface, offsetWindow))
            M_VTBLID(Interface, offsetWindow) = METHOD(Interface, offsetWindow)->vid;

         METHOD(Interface, orderRootWindow) = Class_findMethod(CO(Interface), "OrderRootWindow", module);
         if(METHOD(Interface, orderRootWindow))
            M_VTBLID(Interface, orderRootWindow) = METHOD(Interface, orderRootWindow)->vid;

         METHOD(Interface, positionRootWindow) = Class_findMethod(CO(Interface), "PositionRootWindow", module);
         if(METHOD(Interface, positionRootWindow))
            M_VTBLID(Interface, positionRootWindow) = METHOD(Interface, positionRootWindow)->vid;

         METHOD(Interface, processInput) = Class_findMethod(CO(Interface), "ProcessInput", module);
         if(METHOD(Interface, processInput))
            M_VTBLID(Interface, processInput) = METHOD(Interface, processInput)->vid;

         METHOD(Interface, saveClipboard) = Class_findMethod(CO(Interface), "SaveClipboard", module);
         if(METHOD(Interface, saveClipboard))
            M_VTBLID(Interface, saveClipboard) = METHOD(Interface, saveClipboard)->vid;

         METHOD(Interface, screenMode) = Class_findMethod(CO(Interface), "ScreenMode", module);
         if(METHOD(Interface, screenMode))
            M_VTBLID(Interface, screenMode) = METHOD(Interface, screenMode)->vid;

         METHOD(Interface, setCaret) = Class_findMethod(CO(Interface), "SetCaret", module);
         if(METHOD(Interface, setCaret))
            M_VTBLID(Interface, setCaret) = METHOD(Interface, setCaret)->vid;

         METHOD(Interface, setIcon) = Class_findMethod(CO(Interface), "SetIcon", module);
         if(METHOD(Interface, setIcon))
            M_VTBLID(Interface, setIcon) = METHOD(Interface, setIcon)->vid;

         METHOD(Interface, setMouseCapture) = Class_findMethod(CO(Interface), "SetMouseCapture", module);
         if(METHOD(Interface, setMouseCapture))
            M_VTBLID(Interface, setMouseCapture) = METHOD(Interface, setMouseCapture)->vid;

         METHOD(Interface, setMouseCursor) = Class_findMethod(CO(Interface), "SetMouseCursor", module);
         if(METHOD(Interface, setMouseCursor))
            M_VTBLID(Interface, setMouseCursor) = METHOD(Interface, setMouseCursor)->vid;

         METHOD(Interface, setMousePosition) = Class_findMethod(CO(Interface), "SetMousePosition", module);
         if(METHOD(Interface, setMousePosition))
            M_VTBLID(Interface, setMousePosition) = METHOD(Interface, setMousePosition)->vid;

         METHOD(Interface, setMouseRange) = Class_findMethod(CO(Interface), "SetMouseRange", module);
         if(METHOD(Interface, setMouseRange))
            M_VTBLID(Interface, setMouseRange) = METHOD(Interface, setMouseRange)->vid;

         METHOD(Interface, setRootWindowCaption) = Class_findMethod(CO(Interface), "SetRootWindowCaption", module);
         if(METHOD(Interface, setRootWindowCaption))
            M_VTBLID(Interface, setRootWindowCaption) = METHOD(Interface, setRootWindowCaption)->vid;

         METHOD(Interface, setRootWindowColor) = Class_findMethod(CO(Interface), "SetRootWindowColor", module);
         if(METHOD(Interface, setRootWindowColor))
            M_VTBLID(Interface, setRootWindowColor) = METHOD(Interface, setRootWindowColor)->vid;

         METHOD(Interface, setRootWindowState) = Class_findMethod(CO(Interface), "SetRootWindowState", module);
         if(METHOD(Interface, setRootWindowState))
            M_VTBLID(Interface, setRootWindowState) = METHOD(Interface, setRootWindowState)->vid;

         METHOD(Interface, setTimerResolution) = Class_findMethod(CO(Interface), "SetTimerResolution", module);
         if(METHOD(Interface, setTimerResolution))
            M_VTBLID(Interface, setTimerResolution) = METHOD(Interface, setTimerResolution)->vid;

         METHOD(Interface, startMoving) = Class_findMethod(CO(Interface), "StartMoving", module);
         if(METHOD(Interface, startMoving))
            M_VTBLID(Interface, startMoving) = METHOD(Interface, startMoving)->vid;

         METHOD(Interface, stopMoving) = Class_findMethod(CO(Interface), "StopMoving", module);
         if(METHOD(Interface, stopMoving))
            M_VTBLID(Interface, stopMoving) = METHOD(Interface, stopMoving)->vid;

         METHOD(Interface, terminate) = Class_findMethod(CO(Interface), "Terminate", module);
         if(METHOD(Interface, terminate))
            M_VTBLID(Interface, terminate) = METHOD(Interface, terminate)->vid;

         METHOD(Interface, translateKey) = Class_findMethod(CO(Interface), "TranslateKey", module);
         if(METHOD(Interface, translateKey))
            Interface_translateKey = (char (*)(C(Key), C(bool)))METHOD(Interface, translateKey)->function;

         METHOD(Interface, unloadClipboard) = Class_findMethod(CO(Interface), "UnloadClipboard", module);
         if(METHOD(Interface, unloadClipboard))
            M_VTBLID(Interface, unloadClipboard) = METHOD(Interface, unloadClipboard)->vid;

         METHOD(Interface, unlock) = Class_findMethod(CO(Interface), "Unlock", module);
         if(METHOD(Interface, unlock))
            M_VTBLID(Interface, unlock) = METHOD(Interface, unlock)->vid;

         METHOD(Interface, updateRootWindow) = Class_findMethod(CO(Interface), "UpdateRootWindow", module);
         if(METHOD(Interface, updateRootWindow))
            M_VTBLID(Interface, updateRootWindow) = METHOD(Interface, updateRootWindow)->vid;

         METHOD(Interface, wait) = Class_findMethod(CO(Interface), "Wait", module);
         if(METHOD(Interface, wait))
            M_VTBLID(Interface, wait) = METHOD(Interface, wait)->vid;

         METHOD(Interface, writeKeyedText) = Class_findMethod(CO(Interface), "WriteKeyedText", module);
         if(METHOD(Interface, writeKeyedText))
            Interface_writeKeyedText = (void (*)(C(Surface), int, int, const char *, C(Key)))METHOD(Interface, writeKeyedText)->function;

         METHOD(Interface, writeKeyedTextDisabled) = Class_findMethod(CO(Interface), "WriteKeyedTextDisabled", module);
         if(METHOD(Interface, writeKeyedTextDisabled))
            Interface_writeKeyedTextDisabled = (void (*)(C(Surface), int, int, const char *, C(Key), C(bool)))METHOD(Interface, writeKeyedTextDisabled)->function;
      }
      CO(Joystick) = eC_findClass(module, "Joystick");
      CO(Key) = eC_findClass(module, "Key");
      if(CO(Key))
      {
         PROPERTY(Key, SmartKey) = Class_findProperty(CO(Key), "ecere::gui::SmartKey", module);
         if(PROPERTY(Key, SmartKey))
            Key_to_SmartKey = (void *)PROPERTY(Key, SmartKey)->Get;
      }
      CO(KeyCode) = eC_findClass(module, "KeyCode");
      CO(MiddleAnchorValue) = eC_findClass(module, "MiddleAnchorValue");
      if(CO(MiddleAnchorValue))
      {
         PROPERTY(MiddleAnchorValue, MinMaxValue) = Class_findProperty(CO(MiddleAnchorValue), "ecere::sys::MinMaxValue", module);
         if(PROPERTY(MiddleAnchorValue, MinMaxValue))
         {
            MiddleAnchorValue_from_MinMaxValue = (void *)PROPERTY(MiddleAnchorValue, MinMaxValue)->Set;
            MiddleAnchorValue_to_MinMaxValue = (void *)PROPERTY(MiddleAnchorValue, MinMaxValue)->Get;
         }

         PROPERTY(MiddleAnchorValue, int) = Class_findProperty(CO(MiddleAnchorValue), "int", module);
         if(PROPERTY(MiddleAnchorValue, int))
         {
            MiddleAnchorValue_from_int = (void *)PROPERTY(MiddleAnchorValue, int)->Set;
            MiddleAnchorValue_to_int = (void *)PROPERTY(MiddleAnchorValue, int)->Get;
         }

         PROPERTY(MiddleAnchorValue, double) = Class_findProperty(CO(MiddleAnchorValue), "double", module);
         if(PROPERTY(MiddleAnchorValue, double))
         {
            MiddleAnchorValue_from_double = (void *)PROPERTY(MiddleAnchorValue, double)->Set;
            MiddleAnchorValue_to_double = (void *)PROPERTY(MiddleAnchorValue, double)->Get;
         }
      }
      CO(Modifiers) = eC_findClass(module, "Modifiers");
      CO(MouseButtons) = eC_findClass(module, "MouseButtons");
      CO(MultiLineString) = eC_findClass(module, "MultiLineString");
      CO(Percentage) = eC_findClass(module, "Percentage");
      CO(PredefinedKey) = eC_findClass(module, "PredefinedKey");
      CO(SizeAnchor) = eC_findClass(module, "SizeAnchor");
      CO(Skin) = eC_findClass(module, "Skin");
      if(CO(Skin))
      {
         METHOD(Skin, captionFont) = Class_findMethod(CO(Skin), "CaptionFont", module);
         if(METHOD(Skin, captionFont))
            M_VTBLID(Skin, captionFont) = METHOD(Skin, captionFont)->vid;

         METHOD(Skin, cursorsBitmaps) = Class_findMethod(CO(Skin), "CursorsBitmaps", module);
         if(METHOD(Skin, cursorsBitmaps))
            M_VTBLID(Skin, cursorsBitmaps) = METHOD(Skin, cursorsBitmaps)->vid;

         METHOD(Skin, getBitmap) = Class_findMethod(CO(Skin), "GetBitmap", module);
         if(METHOD(Skin, getBitmap))
            M_VTBLID(Skin, getBitmap) = METHOD(Skin, getBitmap)->vid;

         METHOD(Skin, getDecorationsSize) = Class_findMethod(CO(Skin), "GetDecorationsSize", module);
         if(METHOD(Skin, getDecorationsSize))
            M_VTBLID(Skin, getDecorationsSize) = METHOD(Skin, getDecorationsSize)->vid;

         METHOD(Skin, horizontalSBH) = Class_findMethod(CO(Skin), "HorizontalSBH", module);
         if(METHOD(Skin, horizontalSBH))
            M_VTBLID(Skin, horizontalSBH) = METHOD(Skin, horizontalSBH)->vid;

         METHOD(Skin, isMouseMoving) = Class_findMethod(CO(Skin), "IsMouseMoving", module);
         if(METHOD(Skin, isMouseMoving))
            M_VTBLID(Skin, isMouseMoving) = METHOD(Skin, isMouseMoving)->vid;

         METHOD(Skin, isMouseResizing) = Class_findMethod(CO(Skin), "IsMouseResizing", module);
         if(METHOD(Skin, isMouseResizing))
            M_VTBLID(Skin, isMouseResizing) = METHOD(Skin, isMouseResizing)->vid;

         METHOD(Skin, setWindowArea) = Class_findMethod(CO(Skin), "SetWindowArea", module);
         if(METHOD(Skin, setWindowArea))
            M_VTBLID(Skin, setWindowArea) = METHOD(Skin, setWindowArea)->vid;

         METHOD(Skin, setWindowMinimum) = Class_findMethod(CO(Skin), "SetWindowMinimum", module);
         if(METHOD(Skin, setWindowMinimum))
            M_VTBLID(Skin, setWindowMinimum) = METHOD(Skin, setWindowMinimum)->vid;

         METHOD(Skin, showDecorations) = Class_findMethod(CO(Skin), "ShowDecorations", module);
         if(METHOD(Skin, showDecorations))
            M_VTBLID(Skin, showDecorations) = METHOD(Skin, showDecorations)->vid;

         METHOD(Skin, systemFont) = Class_findMethod(CO(Skin), "SystemFont", module);
         if(METHOD(Skin, systemFont))
            M_VTBLID(Skin, systemFont) = METHOD(Skin, systemFont)->vid;

         METHOD(Skin, updateNonClient) = Class_findMethod(CO(Skin), "UpdateNonClient", module);
         if(METHOD(Skin, updateNonClient))
            M_VTBLID(Skin, updateNonClient) = METHOD(Skin, updateNonClient)->vid;

         METHOD(Skin, verticalSBW) = Class_findMethod(CO(Skin), "VerticalSBW", module);
         if(METHOD(Skin, verticalSBW))
            M_VTBLID(Skin, verticalSBW) = METHOD(Skin, verticalSBW)->vid;
      }
      CO(SkinBitmap) = eC_findClass(module, "SkinBitmap");
      CO(SmartKey) = eC_findClass(module, "SmartKey");
      CO(SystemCursor) = eC_findClass(module, "SystemCursor");
      CO(Timer) = eC_findClass(module, "Timer");
      if(CO(Timer))
      {
         METHOD(Timer, delayExpired) = Class_findMethod(CO(Timer), "DelayExpired", module);
         if(METHOD(Timer, delayExpired))
            M_VTBLID(Timer, delayExpired) = METHOD(Timer, delayExpired)->vid;

         METHOD(Timer, start) = Class_findMethod(CO(Timer), "Start", module);
         if(METHOD(Timer, start))
            Timer_start = (void (*)(C(Timer)))METHOD(Timer, start)->function;

         METHOD(Timer, stop) = Class_findMethod(CO(Timer), "Stop", module);
         if(METHOD(Timer, stop))
            Timer_stop = (void (*)(C(Timer)))METHOD(Timer, stop)->function;

         PROPERTY(Timer, userData) = Class_findProperty(CO(Timer), "userData", module);
         if(PROPERTY(Timer, userData))
         {
            Timer_set_userData = (void *)PROPERTY(Timer, userData)->Set;
            Timer_get_userData = (void *)PROPERTY(Timer, userData)->Get;
         }

         PROPERTY(Timer, delay) = Class_findProperty(CO(Timer), "delay", module);
         if(PROPERTY(Timer, delay))
         {
            Timer_set_delay = (void *)PROPERTY(Timer, delay)->Set;
            Timer_get_delay = (void *)PROPERTY(Timer, delay)->Get;
         }

         PROPERTY(Timer, started) = Class_findProperty(CO(Timer), "started", module);
         if(PROPERTY(Timer, started))
         {
            Timer_set_started = (void *)PROPERTY(Timer, started)->Set;
            Timer_get_started = (void *)PROPERTY(Timer, started)->Get;
         }
      }
      CO(TouchPointerEvent) = eC_findClass(module, "TouchPointerEvent");
      CO(TouchPointerInfo) = eC_findClass(module, "TouchPointerInfo");
      CO(Window) = eC_findClass(module, "Window");
      if(CO(Window))
      {
         METHOD(Window, acquireInput) = Class_findMethod(CO(Window), "AcquireInput", module);
         if(METHOD(Window, acquireInput))
            Window_acquireInput = (C(bool) (*)(C(Window), C(bool)))METHOD(Window, acquireInput)->function;

         METHOD(Window, activate) = Class_findMethod(CO(Window), "Activate", module);
         if(METHOD(Window, activate))
            Window_activate = (void (*)(C(Window)))METHOD(Window, activate)->function;

         METHOD(Window, addResource) = Class_findMethod(CO(Window), "AddResource", module);
         if(METHOD(Window, addResource))
            Window_addResource = (void (*)(C(Window), C(Resource)))METHOD(Window, addResource)->function;

         METHOD(Window, buttonCloseDialog) = Class_findMethod(CO(Window), "ButtonCloseDialog", module);
         if(METHOD(Window, buttonCloseDialog))
            Window_buttonCloseDialog = (C(bool) (*)(C(Window), C(Button), int, int, C(Modifiers)))METHOD(Window, buttonCloseDialog)->function;

         METHOD(Window, capture) = Class_findMethod(CO(Window), "Capture", module);
         if(METHOD(Window, capture))
            Window_capture = (C(bool) (*)(C(Window)))METHOD(Window, capture)->function;

         METHOD(Window, closeConfirmation) = Class_findMethod(CO(Window), "CloseConfirmation", module);
         if(METHOD(Window, closeConfirmation))
            Window_closeConfirmation = (C(bool) (*)(C(Window), C(bool)))METHOD(Window, closeConfirmation)->function;

         METHOD(Window, create) = Class_findMethod(CO(Window), "Create", module);
         if(METHOD(Window, create))
            Window_create = (C(bool) (*)(C(Window)))METHOD(Window, create)->function;

         METHOD(Window, cycleChildren) = Class_findMethod(CO(Window), "CycleChildren", module);
         if(METHOD(Window, cycleChildren))
            Window_cycleChildren = (C(bool) (*)(C(Window), C(bool), C(bool), C(bool), C(bool)))METHOD(Window, cycleChildren)->function;

         METHOD(Window, deactivate) = Class_findMethod(CO(Window), "Deactivate", module);
         if(METHOD(Window, deactivate))
            Window_deactivate = (void (*)(C(Window)))METHOD(Window, deactivate)->function;

         METHOD(Window, destroy) = Class_findMethod(CO(Window), "Destroy", module);
         if(METHOD(Window, destroy))
            Window_destroy = (C(bool) (*)(C(Window), int64))METHOD(Window, destroy)->function;

         METHOD(Window, doModal) = Class_findMethod(CO(Window), "DoModal", module);
         if(METHOD(Window, doModal))
            Window_doModal = (C(DialogResult) (*)(C(Window)))METHOD(Window, doModal)->function;

         METHOD(Window, doModalEnd) = Class_findMethod(CO(Window), "DoModalEnd", module);
         if(METHOD(Window, doModalEnd))
            Window_doModalEnd = (C(DialogResult) (*)(C(Window)))METHOD(Window, doModalEnd)->function;

         METHOD(Window, doModalLoop) = Class_findMethod(CO(Window), "DoModalLoop", module);
         if(METHOD(Window, doModalLoop))
            Window_doModalLoop = (C(bool) (*)(C(Window)))METHOD(Window, doModalLoop)->function;

         METHOD(Window, doModalStart) = Class_findMethod(CO(Window), "DoModalStart", module);
         if(METHOD(Window, doModalStart))
            Window_doModalStart = (void (*)(C(Window)))METHOD(Window, doModalStart)->function;

         METHOD(Window, externalPosition) = Class_findMethod(CO(Window), "ExternalPosition", module);
         if(METHOD(Window, externalPosition))
            Window_externalPosition = (void (*)(C(Window), int, int, int, int))METHOD(Window, externalPosition)->function;

         METHOD(Window, flash) = Class_findMethod(CO(Window), "Flash", module);
         if(METHOD(Window, flash))
            Window_flash = (void (*)(C(Window)))METHOD(Window, flash)->function;

         METHOD(Window, freeMouseRange) = Class_findMethod(CO(Window), "FreeMouseRange", module);
         if(METHOD(Window, freeMouseRange))
            Window_freeMouseRange = (void (*)())METHOD(Window, freeMouseRange)->function;

         METHOD(Window, getCaretPosition) = Class_findMethod(CO(Window), "GetCaretPosition", module);
         if(METHOD(Window, getCaretPosition))
            Window_getCaretPosition = (void (*)(C(Window), C(Point) *))METHOD(Window, getCaretPosition)->function;

         METHOD(Window, getCaretSize) = Class_findMethod(CO(Window), "GetCaretSize", module);
         if(METHOD(Window, getCaretSize))
            Window_getCaretSize = (int (*)(C(Window)))METHOD(Window, getCaretSize)->function;

         METHOD(Window, getDecorationsSize) = Class_findMethod(CO(Window), "GetDecorationsSize", module);
         if(METHOD(Window, getDecorationsSize))
            M_VTBLID(Window, getDecorationsSize) = METHOD(Window, getDecorationsSize)->vid;

         METHOD(Window, getIcon) = Class_findMethod(CO(Window), "GetIcon", module);
         if(METHOD(Window, getIcon))
            Window_getIcon = (C(BitmapResource) (*)(C(Window), C(SkinBitmap)))METHOD(Window, getIcon)->function;

         METHOD(Window, getMousePosition) = Class_findMethod(CO(Window), "GetMousePosition", module);
         if(METHOD(Window, getMousePosition))
            Window_getMousePosition = (void (*)(C(Window), int *, int *))METHOD(Window, getMousePosition)->function;

         METHOD(Window, getNCMousePosition) = Class_findMethod(CO(Window), "GetNCMousePosition", module);
         if(METHOD(Window, getNCMousePosition))
            Window_getNCMousePosition = (void (*)(C(Window), int *, int *))METHOD(Window, getNCMousePosition)->function;

         METHOD(Window, grab) = Class_findMethod(CO(Window), "Grab", module);
         if(METHOD(Window, grab))
            Window_grab = (C(bool) (*)(C(Window), C(Bitmap), C(Box) *, C(bool)))METHOD(Window, grab)->function;

         METHOD(Window, isInside) = Class_findMethod(CO(Window), "IsInside", module);
         if(METHOD(Window, isInside))
            M_VTBLID(Window, isInside) = METHOD(Window, isInside)->vid;

         METHOD(Window, isMouseMoving) = Class_findMethod(CO(Window), "IsMouseMoving", module);
         if(METHOD(Window, isMouseMoving))
            M_VTBLID(Window, isMouseMoving) = METHOD(Window, isMouseMoving)->vid;

         METHOD(Window, isMouseResizing) = Class_findMethod(CO(Window), "IsMouseResizing", module);
         if(METHOD(Window, isMouseResizing))
            M_VTBLID(Window, isMouseResizing) = METHOD(Window, isMouseResizing)->vid;

         METHOD(Window, isOpaque) = Class_findMethod(CO(Window), "IsOpaque", module);
         if(METHOD(Window, isOpaque))
            M_VTBLID(Window, isOpaque) = METHOD(Window, isOpaque)->vid;

         METHOD(Window, makeActive) = Class_findMethod(CO(Window), "MakeActive", module);
         if(METHOD(Window, makeActive))
            Window_makeActive = (void (*)(C(Window)))METHOD(Window, makeActive)->function;

         METHOD(Window, menuFileClose) = Class_findMethod(CO(Window), "MenuFileClose", module);
         if(METHOD(Window, menuFileClose))
            Window_menuFileClose = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuFileClose)->function;

         METHOD(Window, menuFileExit) = Class_findMethod(CO(Window), "MenuFileExit", module);
         if(METHOD(Window, menuFileExit))
            Window_menuFileExit = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuFileExit)->function;

         METHOD(Window, menuFileSave) = Class_findMethod(CO(Window), "MenuFileSave", module);
         if(METHOD(Window, menuFileSave))
            Window_menuFileSave = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuFileSave)->function;

         METHOD(Window, menuFileSaveAll) = Class_findMethod(CO(Window), "MenuFileSaveAll", module);
         if(METHOD(Window, menuFileSaveAll))
            Window_menuFileSaveAll = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuFileSaveAll)->function;

         METHOD(Window, menuFileSaveAs) = Class_findMethod(CO(Window), "MenuFileSaveAs", module);
         if(METHOD(Window, menuFileSaveAs))
            Window_menuFileSaveAs = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuFileSaveAs)->function;

         METHOD(Window, menuWindowArrangeIcons) = Class_findMethod(CO(Window), "MenuWindowArrangeIcons", module);
         if(METHOD(Window, menuWindowArrangeIcons))
            Window_menuWindowArrangeIcons = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowArrangeIcons)->function;

         METHOD(Window, menuWindowCascade) = Class_findMethod(CO(Window), "MenuWindowCascade", module);
         if(METHOD(Window, menuWindowCascade))
            Window_menuWindowCascade = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowCascade)->function;

         METHOD(Window, menuWindowClose) = Class_findMethod(CO(Window), "MenuWindowClose", module);
         if(METHOD(Window, menuWindowClose))
            Window_menuWindowClose = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowClose)->function;

         METHOD(Window, menuWindowCloseAll) = Class_findMethod(CO(Window), "MenuWindowCloseAll", module);
         if(METHOD(Window, menuWindowCloseAll))
            Window_menuWindowCloseAll = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowCloseAll)->function;

         METHOD(Window, menuWindowMaximize) = Class_findMethod(CO(Window), "MenuWindowMaximize", module);
         if(METHOD(Window, menuWindowMaximize))
            Window_menuWindowMaximize = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowMaximize)->function;

         METHOD(Window, menuWindowMinimize) = Class_findMethod(CO(Window), "MenuWindowMinimize", module);
         if(METHOD(Window, menuWindowMinimize))
            Window_menuWindowMinimize = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowMinimize)->function;

         METHOD(Window, menuWindowMove) = Class_findMethod(CO(Window), "MenuWindowMove", module);
         if(METHOD(Window, menuWindowMove))
            Window_menuWindowMove = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowMove)->function;

         METHOD(Window, menuWindowNext) = Class_findMethod(CO(Window), "MenuWindowNext", module);
         if(METHOD(Window, menuWindowNext))
            Window_menuWindowNext = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowNext)->function;

         METHOD(Window, menuWindowPrevious) = Class_findMethod(CO(Window), "MenuWindowPrevious", module);
         if(METHOD(Window, menuWindowPrevious))
            Window_menuWindowPrevious = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowPrevious)->function;

         METHOD(Window, menuWindowRestore) = Class_findMethod(CO(Window), "MenuWindowRestore", module);
         if(METHOD(Window, menuWindowRestore))
            Window_menuWindowRestore = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowRestore)->function;

         METHOD(Window, menuWindowSelectWindow) = Class_findMethod(CO(Window), "MenuWindowSelectWindow", module);
         if(METHOD(Window, menuWindowSelectWindow))
            Window_menuWindowSelectWindow = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowSelectWindow)->function;

         METHOD(Window, menuWindowSize) = Class_findMethod(CO(Window), "MenuWindowSize", module);
         if(METHOD(Window, menuWindowSize))
            Window_menuWindowSize = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowSize)->function;

         METHOD(Window, menuWindowStayOnTop) = Class_findMethod(CO(Window), "MenuWindowStayOnTop", module);
         if(METHOD(Window, menuWindowStayOnTop))
            Window_menuWindowStayOnTop = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowStayOnTop)->function;

         METHOD(Window, menuWindowTileHorz) = Class_findMethod(CO(Window), "MenuWindowTileHorz", module);
         if(METHOD(Window, menuWindowTileHorz))
            Window_menuWindowTileHorz = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowTileHorz)->function;

         METHOD(Window, menuWindowTileVert) = Class_findMethod(CO(Window), "MenuWindowTileVert", module);
         if(METHOD(Window, menuWindowTileVert))
            Window_menuWindowTileVert = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowTileVert)->function;

         METHOD(Window, menuWindowWindows) = Class_findMethod(CO(Window), "MenuWindowWindows", module);
         if(METHOD(Window, menuWindowWindows))
            Window_menuWindowWindows = (C(bool) (*)(C(Window), C(MenuItem), C(Modifiers)))METHOD(Window, menuWindowWindows)->function;

         METHOD(Window, modal) = Class_findMethod(CO(Window), "Modal", module);
         if(METHOD(Window, modal))
            Window_modal = (C(DialogResult) (*)(C(Window)))METHOD(Window, modal)->function;

         METHOD(Window, mouseMessage) = Class_findMethod(CO(Window), "MouseMessage", module);
         if(METHOD(Window, mouseMessage))
            Window_mouseMessage = (C(bool) (*)(C(Window), uint, int, int, C(Modifiers) *, C(bool), C(bool)))METHOD(Window, mouseMessage)->function;

         METHOD(Window, move) = Class_findMethod(CO(Window), "Move", module);
         if(METHOD(Window, move))
            Window_move = (void (*)(C(Window), int, int, int, int))METHOD(Window, move)->function;

         METHOD(Window, multiTouchMessage) = Class_findMethod(CO(Window), "MultiTouchMessage", module);
         if(METHOD(Window, multiTouchMessage))
            Window_multiTouchMessage = (C(bool) (*)(C(Window), C(TouchPointerEvent), C(Array), C(Modifiers) *, C(bool), C(bool)))METHOD(Window, multiTouchMessage)->function;

         METHOD(Window, notifyActivate) = Class_findMethod(CO(Window), "NotifyActivate", module);
         if(METHOD(Window, notifyActivate))
            M_VTBLID(Window, notifyActivate) = METHOD(Window, notifyActivate)->vid;

         METHOD(Window, notifyDestroyed) = Class_findMethod(CO(Window), "NotifyDestroyed", module);
         if(METHOD(Window, notifyDestroyed))
            M_VTBLID(Window, notifyDestroyed) = METHOD(Window, notifyDestroyed)->vid;

         METHOD(Window, notifySaved) = Class_findMethod(CO(Window), "NotifySaved", module);
         if(METHOD(Window, notifySaved))
            M_VTBLID(Window, notifySaved) = METHOD(Window, notifySaved)->vid;

         METHOD(Window, onActivate) = Class_findMethod(CO(Window), "OnActivate", module);
         if(METHOD(Window, onActivate))
            M_VTBLID(Window, onActivate) = METHOD(Window, onActivate)->vid;

         METHOD(Window, onActivateClient) = Class_findMethod(CO(Window), "OnActivateClient", module);
         if(METHOD(Window, onActivateClient))
            M_VTBLID(Window, onActivateClient) = METHOD(Window, onActivateClient)->vid;

         METHOD(Window, onApplyGraphics) = Class_findMethod(CO(Window), "OnApplyGraphics", module);
         if(METHOD(Window, onApplyGraphics))
            M_VTBLID(Window, onApplyGraphics) = METHOD(Window, onApplyGraphics)->vid;

         METHOD(Window, onChildAddedOrRemoved) = Class_findMethod(CO(Window), "OnChildAddedOrRemoved", module);
         if(METHOD(Window, onChildAddedOrRemoved))
            M_VTBLID(Window, onChildAddedOrRemoved) = METHOD(Window, onChildAddedOrRemoved)->vid;

         METHOD(Window, onChildResized) = Class_findMethod(CO(Window), "OnChildResized", module);
         if(METHOD(Window, onChildResized))
            M_VTBLID(Window, onChildResized) = METHOD(Window, onChildResized)->vid;

         METHOD(Window, onChildVisibilityToggled) = Class_findMethod(CO(Window), "OnChildVisibilityToggled", module);
         if(METHOD(Window, onChildVisibilityToggled))
            M_VTBLID(Window, onChildVisibilityToggled) = METHOD(Window, onChildVisibilityToggled)->vid;

         METHOD(Window, onClose) = Class_findMethod(CO(Window), "OnClose", module);
         if(METHOD(Window, onClose))
            M_VTBLID(Window, onClose) = METHOD(Window, onClose)->vid;

         METHOD(Window, onCreate) = Class_findMethod(CO(Window), "OnCreate", module);
         if(METHOD(Window, onCreate))
            M_VTBLID(Window, onCreate) = METHOD(Window, onCreate)->vid;

         METHOD(Window, onDestroy) = Class_findMethod(CO(Window), "OnDestroy", module);
         if(METHOD(Window, onDestroy))
            M_VTBLID(Window, onDestroy) = METHOD(Window, onDestroy)->vid;

         METHOD(Window, onDestroyed) = Class_findMethod(CO(Window), "OnDestroyed", module);
         if(METHOD(Window, onDestroyed))
            M_VTBLID(Window, onDestroyed) = METHOD(Window, onDestroyed)->vid;

         METHOD(Window, onDrawOverChildren) = Class_findMethod(CO(Window), "OnDrawOverChildren", module);
         if(METHOD(Window, onDrawOverChildren))
            M_VTBLID(Window, onDrawOverChildren) = METHOD(Window, onDrawOverChildren)->vid;

         METHOD(Window, onFileModified) = Class_findMethod(CO(Window), "OnFileModified", module);
         if(METHOD(Window, onFileModified))
            M_VTBLID(Window, onFileModified) = METHOD(Window, onFileModified)->vid;

         METHOD(Window, onHScroll) = Class_findMethod(CO(Window), "OnHScroll", module);
         if(METHOD(Window, onHScroll))
            M_VTBLID(Window, onHScroll) = METHOD(Window, onHScroll)->vid;

         METHOD(Window, onKeyDown) = Class_findMethod(CO(Window), "OnKeyDown", module);
         if(METHOD(Window, onKeyDown))
            M_VTBLID(Window, onKeyDown) = METHOD(Window, onKeyDown)->vid;

         METHOD(Window, onKeyHit) = Class_findMethod(CO(Window), "OnKeyHit", module);
         if(METHOD(Window, onKeyHit))
            M_VTBLID(Window, onKeyHit) = METHOD(Window, onKeyHit)->vid;

         METHOD(Window, onKeyUp) = Class_findMethod(CO(Window), "OnKeyUp", module);
         if(METHOD(Window, onKeyUp))
            M_VTBLID(Window, onKeyUp) = METHOD(Window, onKeyUp)->vid;

         METHOD(Window, onLeftButtonDown) = Class_findMethod(CO(Window), "OnLeftButtonDown", module);
         if(METHOD(Window, onLeftButtonDown))
            M_VTBLID(Window, onLeftButtonDown) = METHOD(Window, onLeftButtonDown)->vid;

         METHOD(Window, onLeftButtonUp) = Class_findMethod(CO(Window), "OnLeftButtonUp", module);
         if(METHOD(Window, onLeftButtonUp))
            M_VTBLID(Window, onLeftButtonUp) = METHOD(Window, onLeftButtonUp)->vid;

         METHOD(Window, onLeftDoubleClick) = Class_findMethod(CO(Window), "OnLeftDoubleClick", module);
         if(METHOD(Window, onLeftDoubleClick))
            M_VTBLID(Window, onLeftDoubleClick) = METHOD(Window, onLeftDoubleClick)->vid;

         METHOD(Window, onLoadGraphics) = Class_findMethod(CO(Window), "OnLoadGraphics", module);
         if(METHOD(Window, onLoadGraphics))
            M_VTBLID(Window, onLoadGraphics) = METHOD(Window, onLoadGraphics)->vid;

         METHOD(Window, onMiddleButtonDown) = Class_findMethod(CO(Window), "OnMiddleButtonDown", module);
         if(METHOD(Window, onMiddleButtonDown))
            M_VTBLID(Window, onMiddleButtonDown) = METHOD(Window, onMiddleButtonDown)->vid;

         METHOD(Window, onMiddleButtonUp) = Class_findMethod(CO(Window), "OnMiddleButtonUp", module);
         if(METHOD(Window, onMiddleButtonUp))
            M_VTBLID(Window, onMiddleButtonUp) = METHOD(Window, onMiddleButtonUp)->vid;

         METHOD(Window, onMiddleDoubleClick) = Class_findMethod(CO(Window), "OnMiddleDoubleClick", module);
         if(METHOD(Window, onMiddleDoubleClick))
            M_VTBLID(Window, onMiddleDoubleClick) = METHOD(Window, onMiddleDoubleClick)->vid;

         METHOD(Window, onMouseCaptureLost) = Class_findMethod(CO(Window), "OnMouseCaptureLost", module);
         if(METHOD(Window, onMouseCaptureLost))
            M_VTBLID(Window, onMouseCaptureLost) = METHOD(Window, onMouseCaptureLost)->vid;

         METHOD(Window, onMouseLeave) = Class_findMethod(CO(Window), "OnMouseLeave", module);
         if(METHOD(Window, onMouseLeave))
            M_VTBLID(Window, onMouseLeave) = METHOD(Window, onMouseLeave)->vid;

         METHOD(Window, onMouseMove) = Class_findMethod(CO(Window), "OnMouseMove", module);
         if(METHOD(Window, onMouseMove))
            M_VTBLID(Window, onMouseMove) = METHOD(Window, onMouseMove)->vid;

         METHOD(Window, onMouseOver) = Class_findMethod(CO(Window), "OnMouseOver", module);
         if(METHOD(Window, onMouseOver))
            M_VTBLID(Window, onMouseOver) = METHOD(Window, onMouseOver)->vid;

         METHOD(Window, onMoving) = Class_findMethod(CO(Window), "OnMoving", module);
         if(METHOD(Window, onMoving))
            M_VTBLID(Window, onMoving) = METHOD(Window, onMoving)->vid;

         METHOD(Window, onMultiTouch) = Class_findMethod(CO(Window), "OnMultiTouch", module);
         if(METHOD(Window, onMultiTouch))
            M_VTBLID(Window, onMultiTouch) = METHOD(Window, onMultiTouch)->vid;

         METHOD(Window, onPosition) = Class_findMethod(CO(Window), "OnPosition", module);
         if(METHOD(Window, onPosition))
            M_VTBLID(Window, onPosition) = METHOD(Window, onPosition)->vid;

         METHOD(Window, onPostCreate) = Class_findMethod(CO(Window), "OnPostCreate", module);
         if(METHOD(Window, onPostCreate))
            M_VTBLID(Window, onPostCreate) = METHOD(Window, onPostCreate)->vid;

         METHOD(Window, onRedraw) = Class_findMethod(CO(Window), "OnRedraw", module);
         if(METHOD(Window, onRedraw))
            M_VTBLID(Window, onRedraw) = METHOD(Window, onRedraw)->vid;

         METHOD(Window, onResize) = Class_findMethod(CO(Window), "OnResize", module);
         if(METHOD(Window, onResize))
            M_VTBLID(Window, onResize) = METHOD(Window, onResize)->vid;

         METHOD(Window, onResizing) = Class_findMethod(CO(Window), "OnResizing", module);
         if(METHOD(Window, onResizing))
            M_VTBLID(Window, onResizing) = METHOD(Window, onResizing)->vid;

         METHOD(Window, onRightButtonDown) = Class_findMethod(CO(Window), "OnRightButtonDown", module);
         if(METHOD(Window, onRightButtonDown))
            M_VTBLID(Window, onRightButtonDown) = METHOD(Window, onRightButtonDown)->vid;

         METHOD(Window, onRightButtonUp) = Class_findMethod(CO(Window), "OnRightButtonUp", module);
         if(METHOD(Window, onRightButtonUp))
            M_VTBLID(Window, onRightButtonUp) = METHOD(Window, onRightButtonUp)->vid;

         METHOD(Window, onRightDoubleClick) = Class_findMethod(CO(Window), "OnRightDoubleClick", module);
         if(METHOD(Window, onRightDoubleClick))
            M_VTBLID(Window, onRightDoubleClick) = METHOD(Window, onRightDoubleClick)->vid;

         METHOD(Window, onSaveFile) = Class_findMethod(CO(Window), "OnSaveFile", module);
         if(METHOD(Window, onSaveFile))
            M_VTBLID(Window, onSaveFile) = METHOD(Window, onSaveFile)->vid;

         METHOD(Window, onStateChange) = Class_findMethod(CO(Window), "OnStateChange", module);
         if(METHOD(Window, onStateChange))
            M_VTBLID(Window, onStateChange) = METHOD(Window, onStateChange)->vid;

         METHOD(Window, onSysKeyDown) = Class_findMethod(CO(Window), "OnSysKeyDown", module);
         if(METHOD(Window, onSysKeyDown))
            M_VTBLID(Window, onSysKeyDown) = METHOD(Window, onSysKeyDown)->vid;

         METHOD(Window, onSysKeyHit) = Class_findMethod(CO(Window), "OnSysKeyHit", module);
         if(METHOD(Window, onSysKeyHit))
            M_VTBLID(Window, onSysKeyHit) = METHOD(Window, onSysKeyHit)->vid;

         METHOD(Window, onSysKeyUp) = Class_findMethod(CO(Window), "OnSysKeyUp", module);
         if(METHOD(Window, onSysKeyUp))
            M_VTBLID(Window, onSysKeyUp) = METHOD(Window, onSysKeyUp)->vid;

         METHOD(Window, onUnloadGraphics) = Class_findMethod(CO(Window), "OnUnloadGraphics", module);
         if(METHOD(Window, onUnloadGraphics))
            M_VTBLID(Window, onUnloadGraphics) = METHOD(Window, onUnloadGraphics)->vid;

         METHOD(Window, onVScroll) = Class_findMethod(CO(Window), "OnVScroll", module);
         if(METHOD(Window, onVScroll))
            M_VTBLID(Window, onVScroll) = METHOD(Window, onVScroll)->vid;

         METHOD(Window, preShowDecorations) = Class_findMethod(CO(Window), "PreShowDecorations", module);
         if(METHOD(Window, preShowDecorations))
            M_VTBLID(Window, preShowDecorations) = METHOD(Window, preShowDecorations)->vid;

         METHOD(Window, releaseCapture) = Class_findMethod(CO(Window), "ReleaseCapture", module);
         if(METHOD(Window, releaseCapture))
            Window_releaseCapture = (void (*)(C(Window)))METHOD(Window, releaseCapture)->function;

         METHOD(Window, removeResource) = Class_findMethod(CO(Window), "RemoveResource", module);
         if(METHOD(Window, removeResource))
            Window_removeResource = (void (*)(C(Window), C(Resource)))METHOD(Window, removeResource)->function;

         METHOD(Window, restoreCaret) = Class_findMethod(CO(Window), "RestoreCaret", module);
         if(METHOD(Window, restoreCaret))
            Window_restoreCaret = (void (*)())METHOD(Window, restoreCaret)->function;

         METHOD(Window, scroll) = Class_findMethod(CO(Window), "Scroll", module);
         if(METHOD(Window, scroll))
            Window_scroll = (void (*)(C(Window), int, int))METHOD(Window, scroll)->function;

         METHOD(Window, setBox) = Class_findMethod(CO(Window), "SetBox", module);
         if(METHOD(Window, setBox))
            M_VTBLID(Window, setBox) = METHOD(Window, setBox)->vid;

         METHOD(Window, setCaption) = Class_findMethod(CO(Window), "SetCaption", module);
         if(METHOD(Window, setCaption))
            Window_setCaption = (void (*)(C(Window), const char *, ...))METHOD(Window, setCaption)->function;

         METHOD(Window, setCaret) = Class_findMethod(CO(Window), "SetCaret", module);
         if(METHOD(Window, setCaret))
            Window_setCaret = (void (*)(C(Window), int, int, int))METHOD(Window, setCaret)->function;

         METHOD(Window, setMouseRange) = Class_findMethod(CO(Window), "SetMouseRange", module);
         if(METHOD(Window, setMouseRange))
            Window_setMouseRange = (void (*)(C(Window), C(Box) *))METHOD(Window, setMouseRange)->function;

         METHOD(Window, setMouseRangeToClient) = Class_findMethod(CO(Window), "SetMouseRangeToClient", module);
         if(METHOD(Window, setMouseRangeToClient))
            Window_setMouseRangeToClient = (void (*)(C(Window)))METHOD(Window, setMouseRangeToClient)->function;

         METHOD(Window, setMouseRangeToWindow) = Class_findMethod(CO(Window), "SetMouseRangeToWindow", module);
         if(METHOD(Window, setMouseRangeToWindow))
            Window_setMouseRangeToWindow = (void (*)(C(Window)))METHOD(Window, setMouseRangeToWindow)->function;

         METHOD(Window, setScrollArea) = Class_findMethod(CO(Window), "SetScrollArea", module);
         if(METHOD(Window, setScrollArea))
            Window_setScrollArea = (void (*)(C(Window), int, int, C(bool)))METHOD(Window, setScrollArea)->function;

         METHOD(Window, setScrollLineStep) = Class_findMethod(CO(Window), "SetScrollLineStep", module);
         if(METHOD(Window, setScrollLineStep))
            Window_setScrollLineStep = (void (*)(C(Window), int, int))METHOD(Window, setScrollLineStep)->function;

         METHOD(Window, setScrollPosition) = Class_findMethod(CO(Window), "SetScrollPosition", module);
         if(METHOD(Window, setScrollPosition))
            Window_setScrollPosition = (void (*)(C(Window), int, int))METHOD(Window, setScrollPosition)->function;

         METHOD(Window, setState) = Class_findMethod(CO(Window), "SetState", module);
         if(METHOD(Window, setState))
            Window_setState = (void (*)(C(Window), C(WindowState), C(bool), C(Modifiers)))METHOD(Window, setState)->function;

         METHOD(Window, setText) = Class_findMethod(CO(Window), "SetText", module);
         if(METHOD(Window, setText))
            Window_setText = (void (*)(C(Window), const char *, ...))METHOD(Window, setText)->function;

         METHOD(Window, setWindowArea) = Class_findMethod(CO(Window), "SetWindowArea", module);
         if(METHOD(Window, setWindowArea))
            M_VTBLID(Window, setWindowArea) = METHOD(Window, setWindowArea)->vid;

         METHOD(Window, setWindowMinimum) = Class_findMethod(CO(Window), "SetWindowMinimum", module);
         if(METHOD(Window, setWindowMinimum))
            M_VTBLID(Window, setWindowMinimum) = METHOD(Window, setWindowMinimum)->vid;

         METHOD(Window, showDecorations) = Class_findMethod(CO(Window), "ShowDecorations", module);
         if(METHOD(Window, showDecorations))
            M_VTBLID(Window, showDecorations) = METHOD(Window, showDecorations)->vid;

         METHOD(Window, showSysMenu) = Class_findMethod(CO(Window), "ShowSysMenu", module);
         if(METHOD(Window, showSysMenu))
            Window_showSysMenu = (void (*)(C(Window), int, int))METHOD(Window, showSysMenu)->function;

         METHOD(Window, softActivate) = Class_findMethod(CO(Window), "SoftActivate", module);
         if(METHOD(Window, softActivate))
            Window_softActivate = (void (*)(C(Window)))METHOD(Window, softActivate)->function;

         METHOD(Window, update) = Class_findMethod(CO(Window), "Update", module);
         if(METHOD(Window, update))
            Window_update = (void (*)(C(Window), C(Box) *))METHOD(Window, update)->function;

         METHOD(Window, updateDisplay) = Class_findMethod(CO(Window), "UpdateDisplay", module);
         if(METHOD(Window, updateDisplay))
            Window_updateDisplay = (void (*)(C(Window)))METHOD(Window, updateDisplay)->function;

         METHOD(Window, updateNonClient) = Class_findMethod(CO(Window), "UpdateNonClient", module);
         if(METHOD(Window, updateNonClient))
            M_VTBLID(Window, updateNonClient) = METHOD(Window, updateNonClient)->vid;

         METHOD(Window, writeCaption) = Class_findMethod(CO(Window), "WriteCaption", module);
         if(METHOD(Window, writeCaption))
            Window_writeCaption = (void (*)(C(Window), C(Surface), int, int))METHOD(Window, writeCaption)->function;

         PROPERTY(Window, parent) = Class_findProperty(CO(Window), "parent", module);
         if(PROPERTY(Window, parent))
         {
            Window_set_parent = (void *)PROPERTY(Window, parent)->Set;
            Window_get_parent = (void *)PROPERTY(Window, parent)->Get;
         }

         PROPERTY(Window, master) = Class_findProperty(CO(Window), "master", module);
         if(PROPERTY(Window, master))
         {
            Window_set_master = (void *)PROPERTY(Window, master)->Set;
            Window_get_master = (void *)PROPERTY(Window, master)->Get;
         }

         PROPERTY(Window, caption) = Class_findProperty(CO(Window), "caption", module);
         if(PROPERTY(Window, caption))
         {
            Window_set_caption = (void *)PROPERTY(Window, caption)->Set;
            Window_get_caption = (void *)PROPERTY(Window, caption)->Get;
         }

         PROPERTY(Window, hotKey) = Class_findProperty(CO(Window), "hotKey", module);
         if(PROPERTY(Window, hotKey))
         {
            Window_set_hotKey = (void *)PROPERTY(Window, hotKey)->Set;
            Window_get_hotKey = (void *)PROPERTY(Window, hotKey)->Get;
         }

         PROPERTY(Window, background) = Class_findProperty(CO(Window), "background", module);
         if(PROPERTY(Window, background))
         {
            Window_set_background = (void *)PROPERTY(Window, background)->Set;
            Window_get_background = (void *)PROPERTY(Window, background)->Get;
         }

         PROPERTY(Window, opacity) = Class_findProperty(CO(Window), "opacity", module);
         if(PROPERTY(Window, opacity))
         {
            Window_set_opacity = (void *)PROPERTY(Window, opacity)->Set;
            Window_get_opacity = (void *)PROPERTY(Window, opacity)->Get;
         }

         PROPERTY(Window, foreground) = Class_findProperty(CO(Window), "foreground", module);
         if(PROPERTY(Window, foreground))
         {
            Window_set_foreground = (void *)PROPERTY(Window, foreground)->Set;
            Window_get_foreground = (void *)PROPERTY(Window, foreground)->Get;
         }

         PROPERTY(Window, borderStyle) = Class_findProperty(CO(Window), "borderStyle", module);
         if(PROPERTY(Window, borderStyle))
         {
            Window_set_borderStyle = (void *)PROPERTY(Window, borderStyle)->Set;
            Window_get_borderStyle = (void *)PROPERTY(Window, borderStyle)->Get;
         }

         PROPERTY(Window, minClientSize) = Class_findProperty(CO(Window), "minClientSize", module);
         if(PROPERTY(Window, minClientSize))
         {
            Window_set_minClientSize = (void *)PROPERTY(Window, minClientSize)->Set;
            Window_get_minClientSize = (void *)PROPERTY(Window, minClientSize)->Get;
         }

         PROPERTY(Window, maxClientSize) = Class_findProperty(CO(Window), "maxClientSize", module);
         if(PROPERTY(Window, maxClientSize))
         {
            Window_set_maxClientSize = (void *)PROPERTY(Window, maxClientSize)->Set;
            Window_get_maxClientSize = (void *)PROPERTY(Window, maxClientSize)->Get;
         }

         PROPERTY(Window, hasMaximize) = Class_findProperty(CO(Window), "hasMaximize", module);
         if(PROPERTY(Window, hasMaximize))
         {
            Window_set_hasMaximize = (void *)PROPERTY(Window, hasMaximize)->Set;
            Window_get_hasMaximize = (void *)PROPERTY(Window, hasMaximize)->Get;
         }

         PROPERTY(Window, hasMinimize) = Class_findProperty(CO(Window), "hasMinimize", module);
         if(PROPERTY(Window, hasMinimize))
         {
            Window_set_hasMinimize = (void *)PROPERTY(Window, hasMinimize)->Set;
            Window_get_hasMinimize = (void *)PROPERTY(Window, hasMinimize)->Get;
         }

         PROPERTY(Window, hasClose) = Class_findProperty(CO(Window), "hasClose", module);
         if(PROPERTY(Window, hasClose))
         {
            Window_set_hasClose = (void *)PROPERTY(Window, hasClose)->Set;
            Window_get_hasClose = (void *)PROPERTY(Window, hasClose)->Get;
         }

         PROPERTY(Window, nonClient) = Class_findProperty(CO(Window), "nonClient", module);
         if(PROPERTY(Window, nonClient))
         {
            Window_set_nonClient = (void *)PROPERTY(Window, nonClient)->Set;
            Window_get_nonClient = (void *)PROPERTY(Window, nonClient)->Get;
         }

         PROPERTY(Window, inactive) = Class_findProperty(CO(Window), "inactive", module);
         if(PROPERTY(Window, inactive))
         {
            Window_set_inactive = (void *)PROPERTY(Window, inactive)->Set;
            Window_get_inactive = (void *)PROPERTY(Window, inactive)->Get;
         }

         PROPERTY(Window, clickThrough) = Class_findProperty(CO(Window), "clickThrough", module);
         if(PROPERTY(Window, clickThrough))
         {
            Window_set_clickThrough = (void *)PROPERTY(Window, clickThrough)->Set;
            Window_get_clickThrough = (void *)PROPERTY(Window, clickThrough)->Get;
         }

         PROPERTY(Window, isRemote) = Class_findProperty(CO(Window), "isRemote", module);
         if(PROPERTY(Window, isRemote))
         {
            Window_set_isRemote = (void *)PROPERTY(Window, isRemote)->Set;
            Window_get_isRemote = (void *)PROPERTY(Window, isRemote)->Get;
         }

         PROPERTY(Window, noCycle) = Class_findProperty(CO(Window), "noCycle", module);
         if(PROPERTY(Window, noCycle))
         {
            Window_set_noCycle = (void *)PROPERTY(Window, noCycle)->Set;
            Window_get_noCycle = (void *)PROPERTY(Window, noCycle)->Get;
         }

         PROPERTY(Window, isModal) = Class_findProperty(CO(Window), "isModal", module);
         if(PROPERTY(Window, isModal))
         {
            Window_set_isModal = (void *)PROPERTY(Window, isModal)->Set;
            Window_get_isModal = (void *)PROPERTY(Window, isModal)->Get;
         }

         PROPERTY(Window, interim) = Class_findProperty(CO(Window), "interim", module);
         if(PROPERTY(Window, interim))
         {
            Window_set_interim = (void *)PROPERTY(Window, interim)->Set;
            Window_get_interim = (void *)PROPERTY(Window, interim)->Get;
         }

         PROPERTY(Window, tabCycle) = Class_findProperty(CO(Window), "tabCycle", module);
         if(PROPERTY(Window, tabCycle))
         {
            Window_set_tabCycle = (void *)PROPERTY(Window, tabCycle)->Set;
            Window_get_tabCycle = (void *)PROPERTY(Window, tabCycle)->Get;
         }

         PROPERTY(Window, isDefault) = Class_findProperty(CO(Window), "isDefault", module);
         if(PROPERTY(Window, isDefault))
         {
            Window_set_isDefault = (void *)PROPERTY(Window, isDefault)->Set;
            Window_get_isDefault = (void *)PROPERTY(Window, isDefault)->Get;
         }

         PROPERTY(Window, drawBehind) = Class_findProperty(CO(Window), "drawBehind", module);
         if(PROPERTY(Window, drawBehind))
         {
            Window_set_drawBehind = (void *)PROPERTY(Window, drawBehind)->Set;
            Window_get_drawBehind = (void *)PROPERTY(Window, drawBehind)->Get;
         }

         PROPERTY(Window, hasMenuBar) = Class_findProperty(CO(Window), "hasMenuBar", module);
         if(PROPERTY(Window, hasMenuBar))
         {
            Window_set_hasMenuBar = (void *)PROPERTY(Window, hasMenuBar)->Set;
            Window_get_hasMenuBar = (void *)PROPERTY(Window, hasMenuBar)->Get;
         }

         PROPERTY(Window, hasStatusBar) = Class_findProperty(CO(Window), "hasStatusBar", module);
         if(PROPERTY(Window, hasStatusBar))
         {
            Window_set_hasStatusBar = (void *)PROPERTY(Window, hasStatusBar)->Set;
            Window_get_hasStatusBar = (void *)PROPERTY(Window, hasStatusBar)->Get;
         }

         PROPERTY(Window, stayOnTop) = Class_findProperty(CO(Window), "stayOnTop", module);
         if(PROPERTY(Window, stayOnTop))
         {
            Window_set_stayOnTop = (void *)PROPERTY(Window, stayOnTop)->Set;
            Window_get_stayOnTop = (void *)PROPERTY(Window, stayOnTop)->Get;
         }

         PROPERTY(Window, menu) = Class_findProperty(CO(Window), "menu", module);
         if(PROPERTY(Window, menu))
         {
            Window_set_menu = (void *)PROPERTY(Window, menu)->Set;
            Window_get_menu = (void *)PROPERTY(Window, menu)->Get;
         }

         PROPERTY(Window, font) = Class_findProperty(CO(Window), "font", module);
         if(PROPERTY(Window, font))
         {
            Window_set_font = (void *)PROPERTY(Window, font)->Set;
            Window_get_font = (void *)PROPERTY(Window, font)->Get;
            Window_isSet_font = (void *)PROPERTY(Window, font)->IsSet;
         }

         PROPERTY(Window, sizeAnchor) = Class_findProperty(CO(Window), "sizeAnchor", module);
         if(PROPERTY(Window, sizeAnchor))
         {
            Window_set_sizeAnchor = (void *)PROPERTY(Window, sizeAnchor)->Set;
            Window_get_sizeAnchor = (void *)PROPERTY(Window, sizeAnchor)->Get;
            Window_isSet_sizeAnchor = (void *)PROPERTY(Window, sizeAnchor)->IsSet;
         }

         PROPERTY(Window, size) = Class_findProperty(CO(Window), "size", module);
         if(PROPERTY(Window, size))
         {
            Window_set_size = (void *)PROPERTY(Window, size)->Set;
            Window_get_size = (void *)PROPERTY(Window, size)->Get;
            Window_isSet_size = (void *)PROPERTY(Window, size)->IsSet;
         }

         PROPERTY(Window, clientSize) = Class_findProperty(CO(Window), "clientSize", module);
         if(PROPERTY(Window, clientSize))
         {
            Window_set_clientSize = (void *)PROPERTY(Window, clientSize)->Set;
            Window_get_clientSize = (void *)PROPERTY(Window, clientSize)->Get;
            Window_isSet_clientSize = (void *)PROPERTY(Window, clientSize)->IsSet;
         }

         PROPERTY(Window, initSize) = Class_findProperty(CO(Window), "initSize", module);
         if(PROPERTY(Window, initSize))
            Window_get_initSize = (void *)PROPERTY(Window, initSize)->Get;

         PROPERTY(Window, anchor) = Class_findProperty(CO(Window), "anchor", module);
         if(PROPERTY(Window, anchor))
         {
            Window_set_anchor = (void *)PROPERTY(Window, anchor)->Set;
            Window_get_anchor = (void *)PROPERTY(Window, anchor)->Get;
            Window_isSet_anchor = (void *)PROPERTY(Window, anchor)->IsSet;
         }

         PROPERTY(Window, position) = Class_findProperty(CO(Window), "position", module);
         if(PROPERTY(Window, position))
         {
            Window_set_position = (void *)PROPERTY(Window, position)->Set;
            Window_get_position = (void *)PROPERTY(Window, position)->Get;
         }

         PROPERTY(Window, disabled) = Class_findProperty(CO(Window), "disabled", module);
         if(PROPERTY(Window, disabled))
         {
            Window_set_disabled = (void *)PROPERTY(Window, disabled)->Set;
            Window_get_disabled = (void *)PROPERTY(Window, disabled)->Get;
         }

         PROPERTY(Window, isEnabled) = Class_findProperty(CO(Window), "isEnabled", module);
         if(PROPERTY(Window, isEnabled))
            Window_get_isEnabled = (void *)PROPERTY(Window, isEnabled)->Get;

         PROPERTY(Window, state) = Class_findProperty(CO(Window), "state", module);
         if(PROPERTY(Window, state))
         {
            Window_set_state = (void *)PROPERTY(Window, state)->Set;
            Window_get_state = (void *)PROPERTY(Window, state)->Get;
         }

         PROPERTY(Window, visible) = Class_findProperty(CO(Window), "visible", module);
         if(PROPERTY(Window, visible))
         {
            Window_set_visible = (void *)PROPERTY(Window, visible)->Set;
            Window_get_visible = (void *)PROPERTY(Window, visible)->Get;
         }

         PROPERTY(Window, isDocument) = Class_findProperty(CO(Window), "isDocument", module);
         if(PROPERTY(Window, isDocument))
         {
            Window_set_isDocument = (void *)PROPERTY(Window, isDocument)->Set;
            Window_get_isDocument = (void *)PROPERTY(Window, isDocument)->Get;
         }

         PROPERTY(Window, mergeMenus) = Class_findProperty(CO(Window), "mergeMenus", module);
         if(PROPERTY(Window, mergeMenus))
         {
            Window_set_mergeMenus = (void *)PROPERTY(Window, mergeMenus)->Set;
            Window_get_mergeMenus = (void *)PROPERTY(Window, mergeMenus)->Get;
         }

         PROPERTY(Window, hasHorzScroll) = Class_findProperty(CO(Window), "hasHorzScroll", module);
         if(PROPERTY(Window, hasHorzScroll))
         {
            Window_set_hasHorzScroll = (void *)PROPERTY(Window, hasHorzScroll)->Set;
            Window_get_hasHorzScroll = (void *)PROPERTY(Window, hasHorzScroll)->Get;
         }

         PROPERTY(Window, hasVertScroll) = Class_findProperty(CO(Window), "hasVertScroll", module);
         if(PROPERTY(Window, hasVertScroll))
         {
            Window_set_hasVertScroll = (void *)PROPERTY(Window, hasVertScroll)->Set;
            Window_get_hasVertScroll = (void *)PROPERTY(Window, hasVertScroll)->Get;
         }

         PROPERTY(Window, dontHideScroll) = Class_findProperty(CO(Window), "dontHideScroll", module);
         if(PROPERTY(Window, dontHideScroll))
         {
            Window_set_dontHideScroll = (void *)PROPERTY(Window, dontHideScroll)->Set;
            Window_get_dontHideScroll = (void *)PROPERTY(Window, dontHideScroll)->Get;
         }

         PROPERTY(Window, dontScrollVert) = Class_findProperty(CO(Window), "dontScrollVert", module);
         if(PROPERTY(Window, dontScrollVert))
         {
            Window_set_dontScrollVert = (void *)PROPERTY(Window, dontScrollVert)->Set;
            Window_get_dontScrollVert = (void *)PROPERTY(Window, dontScrollVert)->Get;
         }

         PROPERTY(Window, dontScrollHorz) = Class_findProperty(CO(Window), "dontScrollHorz", module);
         if(PROPERTY(Window, dontScrollHorz))
         {
            Window_set_dontScrollHorz = (void *)PROPERTY(Window, dontScrollHorz)->Set;
            Window_get_dontScrollHorz = (void *)PROPERTY(Window, dontScrollHorz)->Get;
         }

         PROPERTY(Window, snapVertScroll) = Class_findProperty(CO(Window), "snapVertScroll", module);
         if(PROPERTY(Window, snapVertScroll))
         {
            Window_set_snapVertScroll = (void *)PROPERTY(Window, snapVertScroll)->Set;
            Window_get_snapVertScroll = (void *)PROPERTY(Window, snapVertScroll)->Get;
         }

         PROPERTY(Window, snapHorzScroll) = Class_findProperty(CO(Window), "snapHorzScroll", module);
         if(PROPERTY(Window, snapHorzScroll))
         {
            Window_set_snapHorzScroll = (void *)PROPERTY(Window, snapHorzScroll)->Set;
            Window_get_snapHorzScroll = (void *)PROPERTY(Window, snapHorzScroll)->Get;
         }

         PROPERTY(Window, scroll) = Class_findProperty(CO(Window), "scroll", module);
         if(PROPERTY(Window, scroll))
         {
            Window_set_scroll = (void *)PROPERTY(Window, scroll)->Set;
            Window_get_scroll = (void *)PROPERTY(Window, scroll)->Get;
         }

         PROPERTY(Window, modifyVirtualArea) = Class_findProperty(CO(Window), "modifyVirtualArea", module);
         if(PROPERTY(Window, modifyVirtualArea))
         {
            Window_set_modifyVirtualArea = (void *)PROPERTY(Window, modifyVirtualArea)->Set;
            Window_get_modifyVirtualArea = (void *)PROPERTY(Window, modifyVirtualArea)->Get;
         }

         PROPERTY(Window, dontAutoScrollArea) = Class_findProperty(CO(Window), "dontAutoScrollArea", module);
         if(PROPERTY(Window, dontAutoScrollArea))
         {
            Window_set_dontAutoScrollArea = (void *)PROPERTY(Window, dontAutoScrollArea)->Set;
            Window_get_dontAutoScrollArea = (void *)PROPERTY(Window, dontAutoScrollArea)->Get;
         }

         PROPERTY(Window, fileName) = Class_findProperty(CO(Window), "fileName", module);
         if(PROPERTY(Window, fileName))
         {
            Window_set_fileName = (void *)PROPERTY(Window, fileName)->Set;
            Window_get_fileName = (void *)PROPERTY(Window, fileName)->Get;
         }

         PROPERTY(Window, id) = Class_findProperty(CO(Window), "id", module);
         if(PROPERTY(Window, id))
         {
            Window_set_id = (void *)PROPERTY(Window, id)->Set;
            Window_get_id = (void *)PROPERTY(Window, id)->Get;
         }

         PROPERTY(Window, modifiedDocument) = Class_findProperty(CO(Window), "modifiedDocument", module);
         if(PROPERTY(Window, modifiedDocument))
         {
            Window_set_modifiedDocument = (void *)PROPERTY(Window, modifiedDocument)->Set;
            Window_get_modifiedDocument = (void *)PROPERTY(Window, modifiedDocument)->Get;
         }

         PROPERTY(Window, showInTaskBar) = Class_findProperty(CO(Window), "showInTaskBar", module);
         if(PROPERTY(Window, showInTaskBar))
         {
            Window_set_showInTaskBar = (void *)PROPERTY(Window, showInTaskBar)->Set;
            Window_get_showInTaskBar = (void *)PROPERTY(Window, showInTaskBar)->Get;
         }

         PROPERTY(Window, saveDialog) = Class_findProperty(CO(Window), "saveDialog", module);
         if(PROPERTY(Window, saveDialog))
            Window_set_saveDialog = (void *)PROPERTY(Window, saveDialog)->Set;

         PROPERTY(Window, isActiveClient) = Class_findProperty(CO(Window), "isActiveClient", module);
         if(PROPERTY(Window, isActiveClient))
         {
            Window_set_isActiveClient = (void *)PROPERTY(Window, isActiveClient)->Set;
            Window_get_isActiveClient = (void *)PROPERTY(Window, isActiveClient)->Get;
         }

         PROPERTY(Window, cursor) = Class_findProperty(CO(Window), "cursor", module);
         if(PROPERTY(Window, cursor))
         {
            Window_set_cursor = (void *)PROPERTY(Window, cursor)->Set;
            Window_get_cursor = (void *)PROPERTY(Window, cursor)->Get;
         }

         PROPERTY(Window, name) = Class_findProperty(CO(Window), "name", module);
         if(PROPERTY(Window, name))
         {
            Window_set_name = (void *)PROPERTY(Window, name)->Set;
            Window_get_name = (void *)PROPERTY(Window, name)->Get;
         }

         PROPERTY(Window, displayDriver) = Class_findProperty(CO(Window), "displayDriver", module);
         if(PROPERTY(Window, displayDriver))
         {
            Window_set_displayDriver = (void *)PROPERTY(Window, displayDriver)->Set;
            Window_get_displayDriver = (void *)PROPERTY(Window, displayDriver)->Get;
         }

         PROPERTY(Window, autoCreate) = Class_findProperty(CO(Window), "autoCreate", module);
         if(PROPERTY(Window, autoCreate))
         {
            Window_set_autoCreate = (void *)PROPERTY(Window, autoCreate)->Set;
            Window_get_autoCreate = (void *)PROPERTY(Window, autoCreate)->Get;
         }

         PROPERTY(Window, scrollArea) = Class_findProperty(CO(Window), "scrollArea", module);
         if(PROPERTY(Window, scrollArea))
         {
            Window_set_scrollArea = (void *)PROPERTY(Window, scrollArea)->Set;
            Window_get_scrollArea = (void *)PROPERTY(Window, scrollArea)->Get;
            Window_isSet_scrollArea = (void *)PROPERTY(Window, scrollArea)->IsSet;
         }

         PROPERTY(Window, is3D) = Class_findProperty(CO(Window), "is3D", module);
         if(PROPERTY(Window, is3D))
         {
            Window_set_is3D = (void *)PROPERTY(Window, is3D)->Set;
            Window_get_is3D = (void *)PROPERTY(Window, is3D)->Get;
         }

         PROPERTY(Window, fontObject) = Class_findProperty(CO(Window), "fontObject", module);
         if(PROPERTY(Window, fontObject))
            Window_get_fontObject = (void *)PROPERTY(Window, fontObject)->Get;

         PROPERTY(Window, clientStart) = Class_findProperty(CO(Window), "clientStart", module);
         if(PROPERTY(Window, clientStart))
            Window_get_clientStart = (void *)PROPERTY(Window, clientStart)->Get;

         PROPERTY(Window, absPosition) = Class_findProperty(CO(Window), "absPosition", module);
         if(PROPERTY(Window, absPosition))
            Window_get_absPosition = (void *)PROPERTY(Window, absPosition)->Get;

         PROPERTY(Window, normalAnchor) = Class_findProperty(CO(Window), "normalAnchor", module);
         if(PROPERTY(Window, normalAnchor))
            Window_get_normalAnchor = (void *)PROPERTY(Window, normalAnchor)->Get;

         PROPERTY(Window, normalSizeAnchor) = Class_findProperty(CO(Window), "normalSizeAnchor", module);
         if(PROPERTY(Window, normalSizeAnchor))
            Window_get_normalSizeAnchor = (void *)PROPERTY(Window, normalSizeAnchor)->Get;

         PROPERTY(Window, active) = Class_findProperty(CO(Window), "active", module);
         if(PROPERTY(Window, active))
            Window_get_active = (void *)PROPERTY(Window, active)->Get;

         PROPERTY(Window, created) = Class_findProperty(CO(Window), "created", module);
         if(PROPERTY(Window, created))
            Window_get_created = (void *)PROPERTY(Window, created)->Get;

         PROPERTY(Window, destroyed) = Class_findProperty(CO(Window), "destroyed", module);
         if(PROPERTY(Window, destroyed))
            Window_get_destroyed = (void *)PROPERTY(Window, destroyed)->Get;

         PROPERTY(Window, firstSlave) = Class_findProperty(CO(Window), "firstSlave", module);
         if(PROPERTY(Window, firstSlave))
            Window_get_firstSlave = (void *)PROPERTY(Window, firstSlave)->Get;

         PROPERTY(Window, firstChild) = Class_findProperty(CO(Window), "firstChild", module);
         if(PROPERTY(Window, firstChild))
            Window_get_firstChild = (void *)PROPERTY(Window, firstChild)->Get;

         PROPERTY(Window, lastChild) = Class_findProperty(CO(Window), "lastChild", module);
         if(PROPERTY(Window, lastChild))
            Window_get_lastChild = (void *)PROPERTY(Window, lastChild)->Get;

         PROPERTY(Window, activeClient) = Class_findProperty(CO(Window), "activeClient", module);
         if(PROPERTY(Window, activeClient))
            Window_get_activeClient = (void *)PROPERTY(Window, activeClient)->Get;

         PROPERTY(Window, activeChild) = Class_findProperty(CO(Window), "activeChild", module);
         if(PROPERTY(Window, activeChild))
            Window_get_activeChild = (void *)PROPERTY(Window, activeChild)->Get;

         PROPERTY(Window, display) = Class_findProperty(CO(Window), "display", module);
         if(PROPERTY(Window, display))
            Window_get_display = (void *)PROPERTY(Window, display)->Get;

         PROPERTY(Window, displaySystem) = Class_findProperty(CO(Window), "displaySystem", module);
         if(PROPERTY(Window, displaySystem))
            Window_get_displaySystem = (void *)PROPERTY(Window, displaySystem)->Get;

         PROPERTY(Window, horzScroll) = Class_findProperty(CO(Window), "horzScroll", module);
         if(PROPERTY(Window, horzScroll))
            Window_get_horzScroll = (void *)PROPERTY(Window, horzScroll)->Get;

         PROPERTY(Window, vertScroll) = Class_findProperty(CO(Window), "vertScroll", module);
         if(PROPERTY(Window, vertScroll))
            Window_get_vertScroll = (void *)PROPERTY(Window, vertScroll)->Get;

         PROPERTY(Window, statusBar) = Class_findProperty(CO(Window), "statusBar", module);
         if(PROPERTY(Window, statusBar))
            Window_get_statusBar = (void *)PROPERTY(Window, statusBar)->Get;

         PROPERTY(Window, rootWindow) = Class_findProperty(CO(Window), "rootWindow", module);
         if(PROPERTY(Window, rootWindow))
            Window_get_rootWindow = (void *)PROPERTY(Window, rootWindow)->Get;

         PROPERTY(Window, closing) = Class_findProperty(CO(Window), "closing", module);
         if(PROPERTY(Window, closing))
         {
            Window_set_closing = (void *)PROPERTY(Window, closing)->Set;
            Window_get_closing = (void *)PROPERTY(Window, closing)->Get;
         }

         PROPERTY(Window, documentID) = Class_findProperty(CO(Window), "documentID", module);
         if(PROPERTY(Window, documentID))
            Window_get_documentID = (void *)PROPERTY(Window, documentID)->Get;

         PROPERTY(Window, previous) = Class_findProperty(CO(Window), "previous", module);
         if(PROPERTY(Window, previous))
            Window_get_previous = (void *)PROPERTY(Window, previous)->Get;

         PROPERTY(Window, next) = Class_findProperty(CO(Window), "next", module);
         if(PROPERTY(Window, next))
            Window_get_next = (void *)PROPERTY(Window, next)->Get;

         PROPERTY(Window, nextSlave) = Class_findProperty(CO(Window), "nextSlave", module);
         if(PROPERTY(Window, nextSlave))
            Window_get_nextSlave = (void *)PROPERTY(Window, nextSlave)->Get;

         PROPERTY(Window, menuBar) = Class_findProperty(CO(Window), "menuBar", module);
         if(PROPERTY(Window, menuBar))
            Window_get_menuBar = (void *)PROPERTY(Window, menuBar)->Get;

         PROPERTY(Window, sbv) = Class_findProperty(CO(Window), "sbv", module);
         if(PROPERTY(Window, sbv))
            Window_get_sbv = (void *)PROPERTY(Window, sbv)->Get;

         PROPERTY(Window, sbh) = Class_findProperty(CO(Window), "sbh", module);
         if(PROPERTY(Window, sbh))
            Window_get_sbh = (void *)PROPERTY(Window, sbh)->Get;

         PROPERTY(Window, fullRender) = Class_findProperty(CO(Window), "fullRender", module);
         if(PROPERTY(Window, fullRender))
         {
            Window_set_fullRender = (void *)PROPERTY(Window, fullRender)->Set;
            Window_get_fullRender = (void *)PROPERTY(Window, fullRender)->Get;
         }

         PROPERTY(Window, systemHandle) = Class_findProperty(CO(Window), "systemHandle", module);
         if(PROPERTY(Window, systemHandle))
            Window_get_systemHandle = (void *)PROPERTY(Window, systemHandle)->Get;

         PROPERTY(Window, minimizeButton) = Class_findProperty(CO(Window), "minimizeButton", module);
         if(PROPERTY(Window, minimizeButton))
            Window_get_minimizeButton = (void *)PROPERTY(Window, minimizeButton)->Get;

         PROPERTY(Window, maximizeButton) = Class_findProperty(CO(Window), "maximizeButton", module);
         if(PROPERTY(Window, maximizeButton))
            Window_get_maximizeButton = (void *)PROPERTY(Window, maximizeButton)->Get;

         PROPERTY(Window, closeButton) = Class_findProperty(CO(Window), "closeButton", module);
         if(PROPERTY(Window, closeButton))
            Window_get_closeButton = (void *)PROPERTY(Window, closeButton)->Get;

         PROPERTY(Window, icon) = Class_findProperty(CO(Window), "icon", module);
         if(PROPERTY(Window, icon))
         {
            Window_set_icon = (void *)PROPERTY(Window, icon)->Set;
            Window_get_icon = (void *)PROPERTY(Window, icon)->Get;
         }

         PROPERTY(Window, moveable) = Class_findProperty(CO(Window), "moveable", module);
         if(PROPERTY(Window, moveable))
         {
            Window_set_moveable = (void *)PROPERTY(Window, moveable)->Set;
            Window_get_moveable = (void *)PROPERTY(Window, moveable)->Get;
         }

         PROPERTY(Window, alphaBlend) = Class_findProperty(CO(Window), "alphaBlend", module);
         if(PROPERTY(Window, alphaBlend))
         {
            Window_set_alphaBlend = (void *)PROPERTY(Window, alphaBlend)->Set;
            Window_get_alphaBlend = (void *)PROPERTY(Window, alphaBlend)->Get;
         }

         PROPERTY(Window, useSharedMemory) = Class_findProperty(CO(Window), "useSharedMemory", module);
         if(PROPERTY(Window, useSharedMemory))
         {
            Window_set_useSharedMemory = (void *)PROPERTY(Window, useSharedMemory)->Set;
            Window_get_useSharedMemory = (void *)PROPERTY(Window, useSharedMemory)->Get;
         }

         PROPERTY(Window, glCapabilities) = Class_findProperty(CO(Window), "glCapabilities", module);
         if(PROPERTY(Window, glCapabilities))
         {
            Window_set_glCapabilities = (void *)PROPERTY(Window, glCapabilities)->Set;
            Window_get_glCapabilities = (void *)PROPERTY(Window, glCapabilities)->Get;
         }

         PROPERTY(Window, creationActivation) = Class_findProperty(CO(Window), "creationActivation", module);
         if(PROPERTY(Window, creationActivation))
         {
            Window_set_creationActivation = (void *)PROPERTY(Window, creationActivation)->Set;
            Window_get_creationActivation = (void *)PROPERTY(Window, creationActivation)->Get;
         }

         PROPERTY(Window, nativeDecorations) = Class_findProperty(CO(Window), "nativeDecorations", module);
         if(PROPERTY(Window, nativeDecorations))
         {
            Window_set_nativeDecorations = (void *)PROPERTY(Window, nativeDecorations)->Set;
            Window_get_nativeDecorations = (void *)PROPERTY(Window, nativeDecorations)->Get;
            Window_isSet_nativeDecorations = (void *)PROPERTY(Window, nativeDecorations)->IsSet;
         }

         PROPERTY(Window, manageDisplay) = Class_findProperty(CO(Window), "manageDisplay", module);
         if(PROPERTY(Window, manageDisplay))
         {
            Window_set_manageDisplay = (void *)PROPERTY(Window, manageDisplay)->Set;
            Window_get_manageDisplay = (void *)PROPERTY(Window, manageDisplay)->Get;
         }

         PROPERTY(Window, text) = Class_findProperty(CO(Window), "text", module);
         if(PROPERTY(Window, text))
         {
            Window_set_text = (void *)PROPERTY(Window, text)->Set;
            Window_get_text = (void *)PROPERTY(Window, text)->Get;
         }

         PROPERTY(Window, controller) = Class_findProperty(CO(Window), "controller", module);
         if(PROPERTY(Window, controller))
         {
            Window_set_controller = (void *)PROPERTY(Window, controller)->Set;
            Window_get_controller = (void *)PROPERTY(Window, controller)->Get;
         }

         PROPERTY(Window, noConsequential) = Class_findProperty(CO(Window), "noConsequential", module);
         if(PROPERTY(Window, noConsequential))
         {
            Window_set_noConsequential = (void *)PROPERTY(Window, noConsequential)->Set;
            Window_get_noConsequential = (void *)PROPERTY(Window, noConsequential)->Get;
         }
      }
      CO(WindowController) = eC_findClass(module, "WindowController");
      if(CO(WindowController))
      {
         METHOD(WindowController, onCreate) = Class_findMethod(CO(WindowController), "OnCreate", module);
         if(METHOD(WindowController, onCreate))
            M_VTBLID(WindowController, onCreate) = METHOD(WindowController, onCreate)->vid;

         METHOD(WindowController, onKeyDown) = Class_findMethod(CO(WindowController), "OnKeyDown", module);
         if(METHOD(WindowController, onKeyDown))
            M_VTBLID(WindowController, onKeyDown) = METHOD(WindowController, onKeyDown)->vid;

         METHOD(WindowController, onKeyHit) = Class_findMethod(CO(WindowController), "OnKeyHit", module);
         if(METHOD(WindowController, onKeyHit))
            M_VTBLID(WindowController, onKeyHit) = METHOD(WindowController, onKeyHit)->vid;

         METHOD(WindowController, onKeyUp) = Class_findMethod(CO(WindowController), "OnKeyUp", module);
         if(METHOD(WindowController, onKeyUp))
            M_VTBLID(WindowController, onKeyUp) = METHOD(WindowController, onKeyUp)->vid;

         METHOD(WindowController, onLeftButtonDown) = Class_findMethod(CO(WindowController), "OnLeftButtonDown", module);
         if(METHOD(WindowController, onLeftButtonDown))
            M_VTBLID(WindowController, onLeftButtonDown) = METHOD(WindowController, onLeftButtonDown)->vid;

         METHOD(WindowController, onLeftButtonUp) = Class_findMethod(CO(WindowController), "OnLeftButtonUp", module);
         if(METHOD(WindowController, onLeftButtonUp))
            M_VTBLID(WindowController, onLeftButtonUp) = METHOD(WindowController, onLeftButtonUp)->vid;

         METHOD(WindowController, onLeftDoubleClick) = Class_findMethod(CO(WindowController), "OnLeftDoubleClick", module);
         if(METHOD(WindowController, onLeftDoubleClick))
            M_VTBLID(WindowController, onLeftDoubleClick) = METHOD(WindowController, onLeftDoubleClick)->vid;

         METHOD(WindowController, onLoadGraphics) = Class_findMethod(CO(WindowController), "OnLoadGraphics", module);
         if(METHOD(WindowController, onLoadGraphics))
            M_VTBLID(WindowController, onLoadGraphics) = METHOD(WindowController, onLoadGraphics)->vid;

         METHOD(WindowController, onMiddleButtonDown) = Class_findMethod(CO(WindowController), "OnMiddleButtonDown", module);
         if(METHOD(WindowController, onMiddleButtonDown))
            M_VTBLID(WindowController, onMiddleButtonDown) = METHOD(WindowController, onMiddleButtonDown)->vid;

         METHOD(WindowController, onMiddleButtonUp) = Class_findMethod(CO(WindowController), "OnMiddleButtonUp", module);
         if(METHOD(WindowController, onMiddleButtonUp))
            M_VTBLID(WindowController, onMiddleButtonUp) = METHOD(WindowController, onMiddleButtonUp)->vid;

         METHOD(WindowController, onMiddleDoubleClick) = Class_findMethod(CO(WindowController), "OnMiddleDoubleClick", module);
         if(METHOD(WindowController, onMiddleDoubleClick))
            M_VTBLID(WindowController, onMiddleDoubleClick) = METHOD(WindowController, onMiddleDoubleClick)->vid;

         METHOD(WindowController, onMouseMove) = Class_findMethod(CO(WindowController), "OnMouseMove", module);
         if(METHOD(WindowController, onMouseMove))
            M_VTBLID(WindowController, onMouseMove) = METHOD(WindowController, onMouseMove)->vid;

         METHOD(WindowController, onMultiTouch) = Class_findMethod(CO(WindowController), "OnMultiTouch", module);
         if(METHOD(WindowController, onMultiTouch))
            M_VTBLID(WindowController, onMultiTouch) = METHOD(WindowController, onMultiTouch)->vid;

         METHOD(WindowController, onRedraw) = Class_findMethod(CO(WindowController), "OnRedraw", module);
         if(METHOD(WindowController, onRedraw))
            M_VTBLID(WindowController, onRedraw) = METHOD(WindowController, onRedraw)->vid;

         METHOD(WindowController, onResize) = Class_findMethod(CO(WindowController), "OnResize", module);
         if(METHOD(WindowController, onResize))
            M_VTBLID(WindowController, onResize) = METHOD(WindowController, onResize)->vid;

         METHOD(WindowController, onRightButtonDown) = Class_findMethod(CO(WindowController), "OnRightButtonDown", module);
         if(METHOD(WindowController, onRightButtonDown))
            M_VTBLID(WindowController, onRightButtonDown) = METHOD(WindowController, onRightButtonDown)->vid;

         METHOD(WindowController, onRightButtonUp) = Class_findMethod(CO(WindowController), "OnRightButtonUp", module);
         if(METHOD(WindowController, onRightButtonUp))
            M_VTBLID(WindowController, onRightButtonUp) = METHOD(WindowController, onRightButtonUp)->vid;

         METHOD(WindowController, onRightDoubleClick) = Class_findMethod(CO(WindowController), "OnRightDoubleClick", module);
         if(METHOD(WindowController, onRightDoubleClick))
            M_VTBLID(WindowController, onRightDoubleClick) = METHOD(WindowController, onRightDoubleClick)->vid;

         METHOD(WindowController, onUnloadGraphics) = Class_findMethod(CO(WindowController), "OnUnloadGraphics", module);
         if(METHOD(WindowController, onUnloadGraphics))
            M_VTBLID(WindowController, onUnloadGraphics) = METHOD(WindowController, onUnloadGraphics)->vid;

         PROPERTY(WindowController, window) = Class_findProperty(CO(WindowController), "window", module);
         if(PROPERTY(WindowController, window))
            WindowController_get_window = (void *)PROPERTY(WindowController, window)->Get;

         PROPERTY(WindowController, controlled) = Class_findProperty(CO(WindowController), "controlled", module);
         if(PROPERTY(WindowController, controlled))
         {
            WindowController_set_controlled = (void *)PROPERTY(WindowController, controlled)->Set;
            WindowController_get_controlled = (void *)PROPERTY(WindowController, controlled)->Get;
         }
      }
      CO(WindowState) = eC_findClass(module, "WindowState");
      CO(BoxAlignment) = eC_findClass(module, "BoxAlignment");
      CO(BufferLocation) = eC_findClass(module, "BufferLocation");
      if(CO(BufferLocation))
      {
         METHOD(BufferLocation, adjustAdd) = Class_findMethod(CO(BufferLocation), "AdjustAdd", module);
         if(METHOD(BufferLocation, adjustAdd))
            BufferLocation_adjustAdd = (void (*)(C(BufferLocation) *, C(BufferLocation) *, C(BufferLocation) *))METHOD(BufferLocation, adjustAdd)->function;

         METHOD(BufferLocation, adjustDelete) = Class_findMethod(CO(BufferLocation), "AdjustDelete", module);
         if(METHOD(BufferLocation, adjustDelete))
            BufferLocation_adjustDelete = (void (*)(C(BufferLocation) *, C(BufferLocation) *, C(BufferLocation) *))METHOD(BufferLocation, adjustDelete)->function;
      }
      CO(Button) = eC_findClass(module, "Button");
      if(CO(Button))
      {
         METHOD(Button, notifyClicked) = Class_findMethod(CO(Button), "NotifyClicked", module);
         if(METHOD(Button, notifyClicked))
            M_VTBLID(Button, notifyClicked) = METHOD(Button, notifyClicked)->vid;

         METHOD(Button, notifyDoubleClick) = Class_findMethod(CO(Button), "NotifyDoubleClick", module);
         if(METHOD(Button, notifyDoubleClick))
            M_VTBLID(Button, notifyDoubleClick) = METHOD(Button, notifyDoubleClick)->vid;

         METHOD(Button, notifyMouseLeave) = Class_findMethod(CO(Button), "NotifyMouseLeave", module);
         if(METHOD(Button, notifyMouseLeave))
            M_VTBLID(Button, notifyMouseLeave) = METHOD(Button, notifyMouseLeave)->vid;

         METHOD(Button, notifyMouseMove) = Class_findMethod(CO(Button), "NotifyMouseMove", module);
         if(METHOD(Button, notifyMouseMove))
            M_VTBLID(Button, notifyMouseMove) = METHOD(Button, notifyMouseMove)->vid;

         METHOD(Button, notifyMouseOver) = Class_findMethod(CO(Button), "NotifyMouseOver", module);
         if(METHOD(Button, notifyMouseOver))
            M_VTBLID(Button, notifyMouseOver) = METHOD(Button, notifyMouseOver)->vid;

         METHOD(Button, notifyPushed) = Class_findMethod(CO(Button), "NotifyPushed", module);
         if(METHOD(Button, notifyPushed))
            M_VTBLID(Button, notifyPushed) = METHOD(Button, notifyPushed)->vid;

         METHOD(Button, notifyReleased) = Class_findMethod(CO(Button), "NotifyReleased", module);
         if(METHOD(Button, notifyReleased))
            M_VTBLID(Button, notifyReleased) = METHOD(Button, notifyReleased)->vid;

         METHOD(Button, removeRadio) = Class_findMethod(CO(Button), "RemoveRadio", module);
         if(METHOD(Button, removeRadio))
            Button_removeRadio = (void (*)(C(Button)))METHOD(Button, removeRadio)->function;

         METHOD(Button, setColor) = Class_findMethod(CO(Button), "SetColor", module);
         if(METHOD(Button, setColor))
            Button_setColor = (void (*)(C(Button), C(ButtonState), C(Color)))METHOD(Button, setColor)->function;

         METHOD(Button, setTextColor) = Class_findMethod(CO(Button), "SetTextColor", module);
         if(METHOD(Button, setTextColor))
            Button_setTextColor = (void (*)(C(Button), C(ButtonState), C(Color)))METHOD(Button, setTextColor)->function;

         PROPERTY(Button, opacity) = Class_findProperty(CO(Button), "opacity", module);
         if(PROPERTY(Button, opacity))
         {
            Button_set_opacity = (void *)PROPERTY(Button, opacity)->Set;
            Button_get_opacity = (void *)PROPERTY(Button, opacity)->Get;
            Button_isSet_opacity = (void *)PROPERTY(Button, opacity)->IsSet;
         }

         PROPERTY(Button, drawBehind) = Class_findProperty(CO(Button), "drawBehind", module);
         if(PROPERTY(Button, drawBehind))
         {
            Button_set_drawBehind = (void *)PROPERTY(Button, drawBehind)->Set;
            Button_get_drawBehind = (void *)PROPERTY(Button, drawBehind)->Get;
            Button_isSet_drawBehind = (void *)PROPERTY(Button, drawBehind)->IsSet;
         }

         PROPERTY(Button, isRadio) = Class_findProperty(CO(Button), "isRadio", module);
         if(PROPERTY(Button, isRadio))
         {
            Button_set_isRadio = (void *)PROPERTY(Button, isRadio)->Set;
            Button_get_isRadio = (void *)PROPERTY(Button, isRadio)->Get;
         }

         PROPERTY(Button, isCheckbox) = Class_findProperty(CO(Button), "isCheckbox", module);
         if(PROPERTY(Button, isCheckbox))
         {
            Button_set_isCheckbox = (void *)PROPERTY(Button, isCheckbox)->Set;
            Button_get_isCheckbox = (void *)PROPERTY(Button, isCheckbox)->Get;
         }

         PROPERTY(Button, bevel) = Class_findProperty(CO(Button), "bevel", module);
         if(PROPERTY(Button, bevel))
         {
            Button_set_bevel = (void *)PROPERTY(Button, bevel)->Set;
            Button_get_bevel = (void *)PROPERTY(Button, bevel)->Get;
         }

         PROPERTY(Button, bevelOver) = Class_findProperty(CO(Button), "bevelOver", module);
         if(PROPERTY(Button, bevelOver))
         {
            Button_set_bevelOver = (void *)PROPERTY(Button, bevelOver)->Set;
            Button_get_bevelOver = (void *)PROPERTY(Button, bevelOver)->Get;
         }

         PROPERTY(Button, toggle) = Class_findProperty(CO(Button), "toggle", module);
         if(PROPERTY(Button, toggle))
         {
            Button_set_toggle = (void *)PROPERTY(Button, toggle)->Set;
            Button_get_toggle = (void *)PROPERTY(Button, toggle)->Get;
         }

         PROPERTY(Button, checked) = Class_findProperty(CO(Button), "checked", module);
         if(PROPERTY(Button, checked))
         {
            Button_set_checked = (void *)PROPERTY(Button, checked)->Set;
            Button_get_checked = (void *)PROPERTY(Button, checked)->Get;
         }

         PROPERTY(Button, alignment) = Class_findProperty(CO(Button), "alignment", module);
         if(PROPERTY(Button, alignment))
         {
            Button_set_alignment = (void *)PROPERTY(Button, alignment)->Set;
            Button_get_alignment = (void *)PROPERTY(Button, alignment)->Get;
         }

         PROPERTY(Button, bitmap) = Class_findProperty(CO(Button), "bitmap", module);
         if(PROPERTY(Button, bitmap))
         {
            Button_set_bitmap = (void *)PROPERTY(Button, bitmap)->Set;
            Button_get_bitmap = (void *)PROPERTY(Button, bitmap)->Get;
         }

         PROPERTY(Button, stayUp) = Class_findProperty(CO(Button), "stayUp", module);
         if(PROPERTY(Button, stayUp))
         {
            Button_set_stayUp = (void *)PROPERTY(Button, stayUp)->Set;
            Button_get_stayUp = (void *)PROPERTY(Button, stayUp)->Get;
         }

         PROPERTY(Button, scaleBitmap) = Class_findProperty(CO(Button), "scaleBitmap", module);
         if(PROPERTY(Button, scaleBitmap))
         {
            Button_set_scaleBitmap = (void *)PROPERTY(Button, scaleBitmap)->Set;
            Button_get_scaleBitmap = (void *)PROPERTY(Button, scaleBitmap)->Get;
         }

         PROPERTY(Button, keyRepeat) = Class_findProperty(CO(Button), "keyRepeat", module);
         if(PROPERTY(Button, keyRepeat))
         {
            Button_set_keyRepeat = (void *)PROPERTY(Button, keyRepeat)->Set;
            Button_get_keyRepeat = (void *)PROPERTY(Button, keyRepeat)->Get;
         }

         PROPERTY(Button, symbol) = Class_findProperty(CO(Button), "symbol", module);
         if(PROPERTY(Button, symbol))
         {
            Button_set_symbol = (void *)PROPERTY(Button, symbol)->Set;
            Button_get_symbol = (void *)PROPERTY(Button, symbol)->Get;
         }

         PROPERTY(Button, ellipsis) = Class_findProperty(CO(Button), "ellipsis", module);
         if(PROPERTY(Button, ellipsis))
         {
            Button_set_ellipsis = (void *)PROPERTY(Button, ellipsis)->Set;
            Button_get_ellipsis = (void *)PROPERTY(Button, ellipsis)->Get;
         }

         PROPERTY(Button, stayDown) = Class_findProperty(CO(Button), "stayDown", module);
         if(PROPERTY(Button, stayDown))
         {
            Button_set_stayDown = (void *)PROPERTY(Button, stayDown)->Set;
            Button_get_stayDown = (void *)PROPERTY(Button, stayDown)->Get;
         }

         PROPERTY(Button, offset) = Class_findProperty(CO(Button), "offset", module);
         if(PROPERTY(Button, offset))
         {
            Button_set_offset = (void *)PROPERTY(Button, offset)->Set;
            Button_get_offset = (void *)PROPERTY(Button, offset)->Get;
         }

         PROPERTY(Button, buttonState) = Class_findProperty(CO(Button), "buttonState", module);
         if(PROPERTY(Button, buttonState))
         {
            Button_set_buttonState = (void *)PROPERTY(Button, buttonState)->Set;
            Button_get_buttonState = (void *)PROPERTY(Button, buttonState)->Get;
         }

         PROPERTY(Button, bitmapAlignment) = Class_findProperty(CO(Button), "bitmapAlignment", module);
         if(PROPERTY(Button, bitmapAlignment))
         {
            Button_set_bitmapAlignment = (void *)PROPERTY(Button, bitmapAlignment)->Set;
            Button_get_bitmapAlignment = (void *)PROPERTY(Button, bitmapAlignment)->Get;
         }
      }
      CO(ButtonState) = eC_findClass(module, "ButtonState");
      CO(CalendarControl) = eC_findClass(module, "CalendarControl");
      if(CO(CalendarControl))
      {
         METHOD(CalendarControl, notifyChanged) = Class_findMethod(CO(CalendarControl), "NotifyChanged", module);
         if(METHOD(CalendarControl, notifyChanged))
            M_VTBLID(CalendarControl, notifyChanged) = METHOD(CalendarControl, notifyChanged)->vid;
      }
      CO(DataBox) = eC_findClass(module, "DataBox");
      if(CO(DataBox))
      {
         METHOD(DataBox, modified) = Class_findMethod(CO(DataBox), "Modified", module);
         if(METHOD(DataBox, modified))
            DataBox_modified = (void (*)(C(DataBox)))METHOD(DataBox, modified)->function;

         METHOD(DataBox, notifyChanged) = Class_findMethod(CO(DataBox), "NotifyChanged", module);
         if(METHOD(DataBox, notifyChanged))
            M_VTBLID(DataBox, notifyChanged) = METHOD(DataBox, notifyChanged)->vid;

         METHOD(DataBox, notifyModified) = Class_findMethod(CO(DataBox), "NotifyModified", module);
         if(METHOD(DataBox, notifyModified))
            M_VTBLID(DataBox, notifyModified) = METHOD(DataBox, notifyModified)->vid;

         METHOD(DataBox, onConfigure) = Class_findMethod(CO(DataBox), "OnConfigure", module);
         if(METHOD(DataBox, onConfigure))
            M_VTBLID(DataBox, onConfigure) = METHOD(DataBox, onConfigure)->vid;

         METHOD(DataBox, refresh) = Class_findMethod(CO(DataBox), "Refresh", module);
         if(METHOD(DataBox, refresh))
            DataBox_refresh = (void (*)(C(DataBox)))METHOD(DataBox, refresh)->function;

         METHOD(DataBox, saveData) = Class_findMethod(CO(DataBox), "SaveData", module);
         if(METHOD(DataBox, saveData))
            DataBox_saveData = (C(bool) (*)(C(DataBox)))METHOD(DataBox, saveData)->function;

         METHOD(DataBox, setData) = Class_findMethod(CO(DataBox), "SetData", module);
         if(METHOD(DataBox, setData))
            M_VTBLID(DataBox, setData) = METHOD(DataBox, setData)->vid;
      }
      CO(DataDisplayFlags) = eC_findClass(module, "DataDisplayFlags");
      CO(DataField) = eC_findClass(module, "DataField");
      if(CO(DataField))
      {
         METHOD(DataField, autoSize) = Class_findMethod(CO(DataField), "AutoSize", module);
         if(METHOD(DataField, autoSize))
            DataField_autoSize = (void (*)(C(DataField)))METHOD(DataField, autoSize)->function;

         METHOD(DataField, move) = Class_findMethod(CO(DataField), "Move", module);
         if(METHOD(DataField, move))
            DataField_move = (void (*)(C(DataField), C(DataField)))METHOD(DataField, move)->function;

         PROPERTY(DataField, dataType) = Class_findProperty(CO(DataField), "dataType", module);
         if(PROPERTY(DataField, dataType))
         {
            DataField_set_dataType = (void *)PROPERTY(DataField, dataType)->Set;
            DataField_get_dataType = (void *)PROPERTY(DataField, dataType)->Get;
         }

         PROPERTY(DataField, editable) = Class_findProperty(CO(DataField), "editable", module);
         if(PROPERTY(DataField, editable))
            DataField_set_editable = (void *)PROPERTY(DataField, editable)->Set;

         PROPERTY(DataField, fixed) = Class_findProperty(CO(DataField), "fixed", module);
         if(PROPERTY(DataField, fixed))
         {
            DataField_set_fixed = (void *)PROPERTY(DataField, fixed)->Set;
            DataField_get_fixed = (void *)PROPERTY(DataField, fixed)->Get;
         }

         PROPERTY(DataField, alignment) = Class_findProperty(CO(DataField), "alignment", module);
         if(PROPERTY(DataField, alignment))
         {
            DataField_set_alignment = (void *)PROPERTY(DataField, alignment)->Set;
            DataField_get_alignment = (void *)PROPERTY(DataField, alignment)->Get;
         }

         PROPERTY(DataField, width) = Class_findProperty(CO(DataField), "width", module);
         if(PROPERTY(DataField, width))
         {
            DataField_set_width = (void *)PROPERTY(DataField, width)->Set;
            DataField_get_width = (void *)PROPERTY(DataField, width)->Get;
         }

         PROPERTY(DataField, index) = Class_findProperty(CO(DataField), "index", module);
         if(PROPERTY(DataField, index))
            DataField_get_index = (void *)PROPERTY(DataField, index)->Get;

         PROPERTY(DataField, position) = Class_findProperty(CO(DataField), "position", module);
         if(PROPERTY(DataField, position))
         {
            DataField_set_position = (void *)PROPERTY(DataField, position)->Set;
            DataField_get_position = (void *)PROPERTY(DataField, position)->Get;
         }

         PROPERTY(DataField, sortOrder) = Class_findProperty(CO(DataField), "sortOrder", module);
         if(PROPERTY(DataField, sortOrder))
            DataField_get_sortOrder = (void *)PROPERTY(DataField, sortOrder)->Get;

         PROPERTY(DataField, header) = Class_findProperty(CO(DataField), "header", module);
         if(PROPERTY(DataField, header))
            DataField_set_header = (void *)PROPERTY(DataField, header)->Set;

         PROPERTY(DataField, userData) = Class_findProperty(CO(DataField), "userData", module);
         if(PROPERTY(DataField, userData))
         {
            DataField_set_userData = (void *)PROPERTY(DataField, userData)->Set;
            DataField_get_userData = (void *)PROPERTY(DataField, userData)->Get;
         }

         PROPERTY(DataField, freeData) = Class_findProperty(CO(DataField), "freeData", module);
         if(PROPERTY(DataField, freeData))
         {
            DataField_set_freeData = (void *)PROPERTY(DataField, freeData)->Set;
            DataField_get_freeData = (void *)PROPERTY(DataField, freeData)->Get;
         }

         PROPERTY(DataField, prev) = Class_findProperty(CO(DataField), "prev", module);
         if(PROPERTY(DataField, prev))
            DataField_get_prev = (void *)PROPERTY(DataField, prev)->Get;

         PROPERTY(DataField, next) = Class_findProperty(CO(DataField), "next", module);
         if(PROPERTY(DataField, next))
            DataField_get_next = (void *)PROPERTY(DataField, next)->Get;
      }
      CO(DataRow) = eC_findClass(module, "DataRow");
      if(CO(DataRow))
      {
         METHOD(DataRow, addRow) = Class_findMethod(CO(DataRow), "AddRow", module);
         if(METHOD(DataRow, addRow))
            DataRow_addRow = (C(DataRow) (*)(C(DataRow)))METHOD(DataRow, addRow)->function;

         METHOD(DataRow, addRowAfter) = Class_findMethod(CO(DataRow), "AddRowAfter", module);
         if(METHOD(DataRow, addRowAfter))
            DataRow_addRowAfter = (C(DataRow) (*)(C(DataRow), C(DataRow)))METHOD(DataRow, addRowAfter)->function;

         METHOD(DataRow, addString) = Class_findMethod(CO(DataRow), "AddString", module);
         if(METHOD(DataRow, addString))
            DataRow_addString = (C(DataRow) (*)(C(DataRow), const char *))METHOD(DataRow, addString)->function;

         METHOD(DataRow, addStringf) = Class_findMethod(CO(DataRow), "AddStringf", module);
         if(METHOD(DataRow, addStringf))
            DataRow_addStringf = (C(DataRow) (*)(C(DataRow), const char *, ...))METHOD(DataRow, addStringf)->function;

         METHOD(DataRow, edit) = Class_findMethod(CO(DataRow), "Edit", module);
         if(METHOD(DataRow, edit))
            DataRow_edit = (void (*)(C(DataRow), C(DataField)))METHOD(DataRow, edit)->function;

         METHOD(DataRow, findRow) = Class_findMethod(CO(DataRow), "FindRow", module);
         if(METHOD(DataRow, findRow))
            DataRow_findRow = (C(DataRow) (*)(C(DataRow), int64))METHOD(DataRow, findRow)->function;

         METHOD(DataRow, findSubRow) = Class_findMethod(CO(DataRow), "FindSubRow", module);
         if(METHOD(DataRow, findSubRow))
            DataRow_findSubRow = (C(DataRow) (*)(C(DataRow), int64))METHOD(DataRow, findSubRow)->function;

         METHOD(DataRow, getData) = Class_findMethod(CO(DataRow), "GetData", module);
         if(METHOD(DataRow, getData))
            DataRow_getData = (any_object (*)(C(DataRow), C(DataField)))METHOD(DataRow, getData)->function;

         METHOD(DataRow, getNextRow) = Class_findMethod(CO(DataRow), "GetNextRow", module);
         if(METHOD(DataRow, getNextRow))
            DataRow_getNextRow = (C(DataRow) (*)(C(DataRow)))METHOD(DataRow, getNextRow)->function;

         METHOD(DataRow, getPrevRow) = Class_findMethod(CO(DataRow), "GetPrevRow", module);
         if(METHOD(DataRow, getPrevRow))
            DataRow_getPrevRow = (C(DataRow) (*)(C(DataRow)))METHOD(DataRow, getPrevRow)->function;

         METHOD(DataRow, move) = Class_findMethod(CO(DataRow), "Move", module);
         if(METHOD(DataRow, move))
            DataRow_move = (void (*)(C(DataRow), C(DataRow)))METHOD(DataRow, move)->function;

         METHOD(DataRow, setData) = Class_findMethod(CO(DataRow), "SetData", module);
         if(METHOD(DataRow, setData))
            DataRow_setData = (void * (*)(C(DataRow), C(DataField), any_object))METHOD(DataRow, setData)->function;

         METHOD(DataRow, sortSubRows) = Class_findMethod(CO(DataRow), "SortSubRows", module);
         if(METHOD(DataRow, sortSubRows))
            DataRow_sortSubRows = (void (*)(C(DataRow), C(bool)))METHOD(DataRow, sortSubRows)->function;

         METHOD(DataRow, unsetData) = Class_findMethod(CO(DataRow), "UnsetData", module);
         if(METHOD(DataRow, unsetData))
            DataRow_unsetData = (void (*)(C(DataRow), C(DataField)))METHOD(DataRow, unsetData)->function;

         PROPERTY(DataRow, tag) = Class_findProperty(CO(DataRow), "tag", module);
         if(PROPERTY(DataRow, tag))
         {
            DataRow_set_tag = (void *)PROPERTY(DataRow, tag)->Set;
            DataRow_get_tag = (void *)PROPERTY(DataRow, tag)->Get;
         }

         PROPERTY(DataRow, previous) = Class_findProperty(CO(DataRow), "previous", module);
         if(PROPERTY(DataRow, previous))
            DataRow_get_previous = (void *)PROPERTY(DataRow, previous)->Get;

         PROPERTY(DataRow, next) = Class_findProperty(CO(DataRow), "next", module);
         if(PROPERTY(DataRow, next))
            DataRow_get_next = (void *)PROPERTY(DataRow, next)->Get;

         PROPERTY(DataRow, index) = Class_findProperty(CO(DataRow), "index", module);
         if(PROPERTY(DataRow, index))
            DataRow_get_index = (void *)PROPERTY(DataRow, index)->Get;

         PROPERTY(DataRow, string) = Class_findProperty(CO(DataRow), "string", module);
         if(PROPERTY(DataRow, string))
         {
            DataRow_set_string = (void *)PROPERTY(DataRow, string)->Set;
            DataRow_get_string = (void *)PROPERTY(DataRow, string)->Get;
         }

         PROPERTY(DataRow, isHeader) = Class_findProperty(CO(DataRow), "isHeader", module);
         if(PROPERTY(DataRow, isHeader))
         {
            DataRow_set_isHeader = (void *)PROPERTY(DataRow, isHeader)->Set;
            DataRow_get_isHeader = (void *)PROPERTY(DataRow, isHeader)->Get;
         }

         PROPERTY(DataRow, icon) = Class_findProperty(CO(DataRow), "icon", module);
         if(PROPERTY(DataRow, icon))
         {
            DataRow_set_icon = (void *)PROPERTY(DataRow, icon)->Set;
            DataRow_get_icon = (void *)PROPERTY(DataRow, icon)->Get;
         }

         PROPERTY(DataRow, collapsed) = Class_findProperty(CO(DataRow), "collapsed", module);
         if(PROPERTY(DataRow, collapsed))
         {
            DataRow_set_collapsed = (void *)PROPERTY(DataRow, collapsed)->Set;
            DataRow_get_collapsed = (void *)PROPERTY(DataRow, collapsed)->Get;
         }

         PROPERTY(DataRow, selected) = Class_findProperty(CO(DataRow), "selected", module);
         if(PROPERTY(DataRow, selected))
         {
            DataRow_set_selected = (void *)PROPERTY(DataRow, selected)->Set;
            DataRow_get_selected = (void *)PROPERTY(DataRow, selected)->Get;
         }

         PROPERTY(DataRow, parent) = Class_findProperty(CO(DataRow), "parent", module);
         if(PROPERTY(DataRow, parent))
         {
            DataRow_set_parent = (void *)PROPERTY(DataRow, parent)->Set;
            DataRow_get_parent = (void *)PROPERTY(DataRow, parent)->Get;
         }

         PROPERTY(DataRow, lastRow) = Class_findProperty(CO(DataRow), "lastRow", module);
         if(PROPERTY(DataRow, lastRow))
            DataRow_get_lastRow = (void *)PROPERTY(DataRow, lastRow)->Get;

         PROPERTY(DataRow, firstRow) = Class_findProperty(CO(DataRow), "firstRow", module);
         if(PROPERTY(DataRow, firstRow))
            DataRow_get_firstRow = (void *)PROPERTY(DataRow, firstRow)->Get;
      }
      CO(DirPath) = eC_findClass(module, "DirPath");
      CO(DirectoriesBox) = eC_findClass(module, "DirectoriesBox");
      if(CO(DirectoriesBox))
      {
         METHOD(DirectoriesBox, notifyModified) = Class_findMethod(CO(DirectoriesBox), "NotifyModified", module);
         if(METHOD(DirectoriesBox, notifyModified))
            M_VTBLID(DirectoriesBox, notifyModified) = METHOD(DirectoriesBox, notifyModified)->vid;

         METHOD(DirectoriesBox, notifyPathBoxModified) = Class_findMethod(CO(DirectoriesBox), "NotifyPathBoxModified", module);
         if(METHOD(DirectoriesBox, notifyPathBoxModified))
            M_VTBLID(DirectoriesBox, notifyPathBoxModified) = METHOD(DirectoriesBox, notifyPathBoxModified)->vid;

         METHOD(DirectoriesBox, onBrowsedDir) = Class_findMethod(CO(DirectoriesBox), "OnBrowsedDir", module);
         if(METHOD(DirectoriesBox, onBrowsedDir))
            M_VTBLID(DirectoriesBox, onBrowsedDir) = METHOD(DirectoriesBox, onBrowsedDir)->vid;

         METHOD(DirectoriesBox, onChangedDir) = Class_findMethod(CO(DirectoriesBox), "OnChangedDir", module);
         if(METHOD(DirectoriesBox, onChangedDir))
            M_VTBLID(DirectoriesBox, onChangedDir) = METHOD(DirectoriesBox, onChangedDir)->vid;

         METHOD(DirectoriesBox, onPrepareBrowseDir) = Class_findMethod(CO(DirectoriesBox), "OnPrepareBrowseDir", module);
         if(METHOD(DirectoriesBox, onPrepareBrowseDir))
            M_VTBLID(DirectoriesBox, onPrepareBrowseDir) = METHOD(DirectoriesBox, onPrepareBrowseDir)->vid;

         PROPERTY(DirectoriesBox, strings) = Class_findProperty(CO(DirectoriesBox), "strings", module);
         if(PROPERTY(DirectoriesBox, strings))
         {
            DirectoriesBox_set_strings = (void *)PROPERTY(DirectoriesBox, strings)->Set;
            DirectoriesBox_get_strings = (void *)PROPERTY(DirectoriesBox, strings)->Get;
         }

         PROPERTY(DirectoriesBox, browseDialog) = Class_findProperty(CO(DirectoriesBox), "browseDialog", module);
         if(PROPERTY(DirectoriesBox, browseDialog))
         {
            DirectoriesBox_set_browseDialog = (void *)PROPERTY(DirectoriesBox, browseDialog)->Set;
            DirectoriesBox_get_browseDialog = (void *)PROPERTY(DirectoriesBox, browseDialog)->Get;
         }

         PROPERTY(DirectoriesBox, baseBrowsePath) = Class_findProperty(CO(DirectoriesBox), "baseBrowsePath", module);
         if(PROPERTY(DirectoriesBox, baseBrowsePath))
         {
            DirectoriesBox_set_baseBrowsePath = (void *)PROPERTY(DirectoriesBox, baseBrowsePath)->Set;
            DirectoriesBox_get_baseBrowsePath = (void *)PROPERTY(DirectoriesBox, baseBrowsePath)->Get;
         }
      }
      CO(DropBox) = eC_findClass(module, "DropBox");
      if(CO(DropBox))
      {
         METHOD(DropBox, addField) = Class_findMethod(CO(DropBox), "AddField", module);
         if(METHOD(DropBox, addField))
            DropBox_addField = (void (*)(C(DropBox), C(DataField)))METHOD(DropBox, addField)->function;

         METHOD(DropBox, addRow) = Class_findMethod(CO(DropBox), "AddRow", module);
         if(METHOD(DropBox, addRow))
            DropBox_addRow = (C(DataRow) (*)(C(DropBox)))METHOD(DropBox, addRow)->function;

         METHOD(DropBox, addRowAfter) = Class_findMethod(CO(DropBox), "AddRowAfter", module);
         if(METHOD(DropBox, addRowAfter))
            DropBox_addRowAfter = (C(DataRow) (*)(C(DropBox), C(DataRow)))METHOD(DropBox, addRowAfter)->function;

         METHOD(DropBox, addString) = Class_findMethod(CO(DropBox), "AddString", module);
         if(METHOD(DropBox, addString))
            DropBox_addString = (C(DataRow) (*)(C(DropBox), const char *))METHOD(DropBox, addString)->function;

         METHOD(DropBox, addStringf) = Class_findMethod(CO(DropBox), "AddStringf", module);
         if(METHOD(DropBox, addStringf))
            DropBox_addStringf = (C(DataRow) (*)(C(DropBox), const char *, ...))METHOD(DropBox, addStringf)->function;

         METHOD(DropBox, clear) = Class_findMethod(CO(DropBox), "Clear", module);
         if(METHOD(DropBox, clear))
            DropBox_clear = (void (*)(C(DropBox)))METHOD(DropBox, clear)->function;

         METHOD(DropBox, deleteRow) = Class_findMethod(CO(DropBox), "DeleteRow", module);
         if(METHOD(DropBox, deleteRow))
            DropBox_deleteRow = (void (*)(C(DropBox), C(DataRow)))METHOD(DropBox, deleteRow)->function;

         METHOD(DropBox, findRow) = Class_findMethod(CO(DropBox), "FindRow", module);
         if(METHOD(DropBox, findRow))
            DropBox_findRow = (C(DataRow) (*)(C(DropBox), int64))METHOD(DropBox, findRow)->function;

         METHOD(DropBox, findSubRow) = Class_findMethod(CO(DropBox), "FindSubRow", module);
         if(METHOD(DropBox, findSubRow))
            DropBox_findSubRow = (C(DataRow) (*)(C(DropBox), int64))METHOD(DropBox, findSubRow)->function;

         METHOD(DropBox, getData) = Class_findMethod(CO(DropBox), "GetData", module);
         if(METHOD(DropBox, getData))
            DropBox_getData = (any_object (*)(C(DropBox), C(DataField)))METHOD(DropBox, getData)->function;

         METHOD(DropBox, getRowCount) = Class_findMethod(CO(DropBox), "GetRowCount", module);
         if(METHOD(DropBox, getRowCount))
            DropBox_getRowCount = (int (*)(C(DropBox)))METHOD(DropBox, getRowCount)->function;

         METHOD(DropBox, getTag) = Class_findMethod(CO(DropBox), "GetTag", module);
         if(METHOD(DropBox, getTag))
            DropBox_getTag = (int64 (*)(C(DropBox)))METHOD(DropBox, getTag)->function;

         METHOD(DropBox, notifyClose) = Class_findMethod(CO(DropBox), "NotifyClose", module);
         if(METHOD(DropBox, notifyClose))
            M_VTBLID(DropBox, notifyClose) = METHOD(DropBox, notifyClose)->vid;

         METHOD(DropBox, notifyHighlight) = Class_findMethod(CO(DropBox), "NotifyHighlight", module);
         if(METHOD(DropBox, notifyHighlight))
            M_VTBLID(DropBox, notifyHighlight) = METHOD(DropBox, notifyHighlight)->vid;

         METHOD(DropBox, notifySelect) = Class_findMethod(CO(DropBox), "NotifySelect", module);
         if(METHOD(DropBox, notifySelect))
            M_VTBLID(DropBox, notifySelect) = METHOD(DropBox, notifySelect)->vid;

         METHOD(DropBox, notifyTextEntry) = Class_findMethod(CO(DropBox), "NotifyTextEntry", module);
         if(METHOD(DropBox, notifyTextEntry))
            M_VTBLID(DropBox, notifyTextEntry) = METHOD(DropBox, notifyTextEntry)->vid;

         METHOD(DropBox, onCloseDropDown) = Class_findMethod(CO(DropBox), "OnCloseDropDown", module);
         if(METHOD(DropBox, onCloseDropDown))
            M_VTBLID(DropBox, onCloseDropDown) = METHOD(DropBox, onCloseDropDown)->vid;

         METHOD(DropBox, onDropDown) = Class_findMethod(CO(DropBox), "OnDropDown", module);
         if(METHOD(DropBox, onDropDown))
            M_VTBLID(DropBox, onDropDown) = METHOD(DropBox, onDropDown)->vid;

         METHOD(DropBox, save) = Class_findMethod(CO(DropBox), "Save", module);
         if(METHOD(DropBox, save))
            DropBox_save = (C(bool) (*)(C(DropBox)))METHOD(DropBox, save)->function;

         METHOD(DropBox, selectRow) = Class_findMethod(CO(DropBox), "SelectRow", module);
         if(METHOD(DropBox, selectRow))
            DropBox_selectRow = (void (*)(C(DropBox), C(DataRow)))METHOD(DropBox, selectRow)->function;

         METHOD(DropBox, setData) = Class_findMethod(CO(DropBox), "SetData", module);
         if(METHOD(DropBox, setData))
            DropBox_setData = (void * (*)(C(DropBox), C(DataField), any_object))METHOD(DropBox, setData)->function;

         METHOD(DropBox, sort) = Class_findMethod(CO(DropBox), "Sort", module);
         if(METHOD(DropBox, sort))
            DropBox_sort = (void (*)(C(DropBox), C(DataField), int))METHOD(DropBox, sort)->function;

         PROPERTY(DropBox, activeStipple) = Class_findProperty(CO(DropBox), "activeStipple", module);
         if(PROPERTY(DropBox, activeStipple))
         {
            DropBox_set_activeStipple = (void *)PROPERTY(DropBox, activeStipple)->Set;
            DropBox_get_activeStipple = (void *)PROPERTY(DropBox, activeStipple)->Get;
         }

         PROPERTY(DropBox, showButton) = Class_findProperty(CO(DropBox), "showButton", module);
         if(PROPERTY(DropBox, showButton))
         {
            DropBox_set_showButton = (void *)PROPERTY(DropBox, showButton)->Set;
            DropBox_get_showButton = (void *)PROPERTY(DropBox, showButton)->Get;
         }

         PROPERTY(DropBox, alignment) = Class_findProperty(CO(DropBox), "alignment", module);
         if(PROPERTY(DropBox, alignment))
         {
            DropBox_set_alignment = (void *)PROPERTY(DropBox, alignment)->Set;
            DropBox_get_alignment = (void *)PROPERTY(DropBox, alignment)->Get;
         }

         PROPERTY(DropBox, noHighlight) = Class_findProperty(CO(DropBox), "noHighlight", module);
         if(PROPERTY(DropBox, noHighlight))
         {
            DropBox_set_noHighlight = (void *)PROPERTY(DropBox, noHighlight)->Set;
            DropBox_get_noHighlight = (void *)PROPERTY(DropBox, noHighlight)->Get;
         }

         PROPERTY(DropBox, activeColor) = Class_findProperty(CO(DropBox), "activeColor", module);
         if(PROPERTY(DropBox, activeColor))
         {
            DropBox_set_activeColor = (void *)PROPERTY(DropBox, activeColor)->Set;
            DropBox_get_activeColor = (void *)PROPERTY(DropBox, activeColor)->Get;
         }

         PROPERTY(DropBox, currentRow) = Class_findProperty(CO(DropBox), "currentRow", module);
         if(PROPERTY(DropBox, currentRow))
         {
            DropBox_set_currentRow = (void *)PROPERTY(DropBox, currentRow)->Set;
            DropBox_get_currentRow = (void *)PROPERTY(DropBox, currentRow)->Get;
         }

         PROPERTY(DropBox, firstRow) = Class_findProperty(CO(DropBox), "firstRow", module);
         if(PROPERTY(DropBox, firstRow))
            DropBox_get_firstRow = (void *)PROPERTY(DropBox, firstRow)->Get;

         PROPERTY(DropBox, lastRow) = Class_findProperty(CO(DropBox), "lastRow", module);
         if(PROPERTY(DropBox, lastRow))
            DropBox_get_lastRow = (void *)PROPERTY(DropBox, lastRow)->Get;

         PROPERTY(DropBox, contents) = Class_findProperty(CO(DropBox), "contents", module);
         if(PROPERTY(DropBox, contents))
         {
            DropBox_set_contents = (void *)PROPERTY(DropBox, contents)->Set;
            DropBox_get_contents = (void *)PROPERTY(DropBox, contents)->Get;
         }

         PROPERTY(DropBox, editText) = Class_findProperty(CO(DropBox), "editText", module);
         if(PROPERTY(DropBox, editText))
         {
            DropBox_set_editText = (void *)PROPERTY(DropBox, editText)->Set;
            DropBox_get_editText = (void *)PROPERTY(DropBox, editText)->Get;
         }

         PROPERTY(DropBox, editBox) = Class_findProperty(CO(DropBox), "editBox", module);
         if(PROPERTY(DropBox, editBox))
            DropBox_get_editBox = (void *)PROPERTY(DropBox, editBox)->Get;

         PROPERTY(DropBox, typingTimeout) = Class_findProperty(CO(DropBox), "typingTimeout", module);
         if(PROPERTY(DropBox, typingTimeout))
         {
            DropBox_set_typingTimeout = (void *)PROPERTY(DropBox, typingTimeout)->Set;
            DropBox_get_typingTimeout = (void *)PROPERTY(DropBox, typingTimeout)->Get;
         }

         PROPERTY(DropBox, rowHeight) = Class_findProperty(CO(DropBox), "rowHeight", module);
         if(PROPERTY(DropBox, rowHeight))
         {
            DropBox_set_rowHeight = (void *)PROPERTY(DropBox, rowHeight)->Set;
            DropBox_get_rowHeight = (void *)PROPERTY(DropBox, rowHeight)->Get;
         }

         PROPERTY(DropBox, maxShown) = Class_findProperty(CO(DropBox), "maxShown", module);
         if(PROPERTY(DropBox, maxShown))
         {
            DropBox_set_maxShown = (void *)PROPERTY(DropBox, maxShown)->Set;
            DropBox_get_maxShown = (void *)PROPERTY(DropBox, maxShown)->Get;
         }

         PROPERTY(DropBox, pullDown) = Class_findProperty(CO(DropBox), "pullDown", module);
         if(PROPERTY(DropBox, pullDown))
            DropBox_get_pullDown = (void *)PROPERTY(DropBox, pullDown)->Get;

         PROPERTY(DropBox, showNone) = Class_findProperty(CO(DropBox), "showNone", module);
         if(PROPERTY(DropBox, showNone))
         {
            DropBox_set_showNone = (void *)PROPERTY(DropBox, showNone)->Set;
            DropBox_get_showNone = (void *)PROPERTY(DropBox, showNone)->Get;
         }

         PROPERTY(DropBox, selectionColor) = Class_findProperty(CO(DropBox), "selectionColor", module);
         if(PROPERTY(DropBox, selectionColor))
         {
            DropBox_set_selectionColor = (void *)PROPERTY(DropBox, selectionColor)->Set;
            DropBox_get_selectionColor = (void *)PROPERTY(DropBox, selectionColor)->Get;
            DropBox_isSet_selectionColor = (void *)PROPERTY(DropBox, selectionColor)->IsSet;
         }

         PROPERTY(DropBox, selectionText) = Class_findProperty(CO(DropBox), "selectionText", module);
         if(PROPERTY(DropBox, selectionText))
         {
            DropBox_set_selectionText = (void *)PROPERTY(DropBox, selectionText)->Set;
            DropBox_get_selectionText = (void *)PROPERTY(DropBox, selectionText)->Get;
            DropBox_isSet_selectionText = (void *)PROPERTY(DropBox, selectionText)->IsSet;
         }

         PROPERTY(DropBox, changeContents) = Class_findProperty(CO(DropBox), "changeContents", module);
         if(PROPERTY(DropBox, changeContents))
         {
            DropBox_set_changeContents = (void *)PROPERTY(DropBox, changeContents)->Set;
            DropBox_get_changeContents = (void *)PROPERTY(DropBox, changeContents)->Get;
         }

         PROPERTY(DropBox, listBox) = Class_findProperty(CO(DropBox), "listBox", module);
         if(PROPERTY(DropBox, listBox))
            DropBox_get_listBox = (void *)PROPERTY(DropBox, listBox)->Get;

         PROPERTY(DropBox, rowCount) = Class_findProperty(CO(DropBox), "rowCount", module);
         if(PROPERTY(DropBox, rowCount))
            DropBox_get_rowCount = (void *)PROPERTY(DropBox, rowCount)->Get;
      }
      CO(EditBox) = eC_findClass(module, "EditBox");
      if(CO(EditBox))
      {
         METHOD(EditBox, addCh) = Class_findMethod(CO(EditBox), "AddCh", module);
         if(METHOD(EditBox, addCh))
            EditBox_addCh = (C(bool) (*)(C(EditBox), unichar))METHOD(EditBox, addCh)->function;

         METHOD(EditBox, addS) = Class_findMethod(CO(EditBox), "AddS", module);
         if(METHOD(EditBox, addS))
            EditBox_addS = (C(bool) (*)(C(EditBox), const char *))METHOD(EditBox, addS)->function;

         METHOD(EditBox, backSpace) = Class_findMethod(CO(EditBox), "BackSpace", module);
         if(METHOD(EditBox, backSpace))
            EditBox_backSpace = (void (*)(C(EditBox)))METHOD(EditBox, backSpace)->function;

         METHOD(EditBox, centerOnCursor) = Class_findMethod(CO(EditBox), "CenterOnCursor", module);
         if(METHOD(EditBox, centerOnCursor))
            EditBox_centerOnCursor = (void (*)(C(EditBox)))METHOD(EditBox, centerOnCursor)->function;

         METHOD(EditBox, clear) = Class_findMethod(CO(EditBox), "Clear", module);
         if(METHOD(EditBox, clear))
            EditBox_clear = (void (*)(C(EditBox)))METHOD(EditBox, clear)->function;

         METHOD(EditBox, clearLine) = Class_findMethod(CO(EditBox), "ClearLine", module);
         if(METHOD(EditBox, clearLine))
            EditBox_clearLine = (void (*)(C(EditBox)))METHOD(EditBox, clearLine)->function;

         METHOD(EditBox, copy) = Class_findMethod(CO(EditBox), "Copy", module);
         if(METHOD(EditBox, copy))
            EditBox_copy = (void (*)(C(EditBox)))METHOD(EditBox, copy)->function;

         METHOD(EditBox, cut) = Class_findMethod(CO(EditBox), "Cut", module);
         if(METHOD(EditBox, cut))
            EditBox_cut = (void (*)(C(EditBox)))METHOD(EditBox, cut)->function;

         METHOD(EditBox, delete) = Class_findMethod(CO(EditBox), "Delete", module);
         if(METHOD(EditBox, delete))
            EditBox_delete = (void (*)(C(EditBox), C(EditLine) *, int, int, C(EditLine) *, int, int))METHOD(EditBox, delete)->function;

         METHOD(EditBox, deleteSelection) = Class_findMethod(CO(EditBox), "DeleteSelection", module);
         if(METHOD(EditBox, deleteSelection))
            EditBox_deleteSelection = (void (*)(C(EditBox)))METHOD(EditBox, deleteSelection)->function;

         METHOD(EditBox, deselect) = Class_findMethod(CO(EditBox), "Deselect", module);
         if(METHOD(EditBox, deselect))
            EditBox_deselect = (void (*)(C(EditBox)))METHOD(EditBox, deselect)->function;

         METHOD(EditBox, end) = Class_findMethod(CO(EditBox), "End", module);
         if(METHOD(EditBox, end))
            EditBox_end = (void (*)(C(EditBox)))METHOD(EditBox, end)->function;

         METHOD(EditBox, find) = Class_findMethod(CO(EditBox), "Find", module);
         if(METHOD(EditBox, find))
            EditBox_find = (C(EditBoxFindResult) (*)(C(EditBox), const char *, C(bool), C(bool), C(bool)))METHOD(EditBox, find)->function;

         METHOD(EditBox, findInSelection) = Class_findMethod(CO(EditBox), "FindInSelection", module);
         if(METHOD(EditBox, findInSelection))
            EditBox_findInSelection = (C(EditBoxFindResult) (*)(C(EditBox), const char *, C(bool), C(bool), C(EditLine) *, int, int))METHOD(EditBox, findInSelection)->function;

         METHOD(EditBox, getSel) = Class_findMethod(CO(EditBox), "GetSel", module);
         if(METHOD(EditBox, getSel))
            EditBox_getSel = (void (*)(C(EditBox), char *, C(bool)))METHOD(EditBox, getSel)->function;

         METHOD(EditBox, getSelPos) = Class_findMethod(CO(EditBox), "GetSelPos", module);
         if(METHOD(EditBox, getSelPos))
            EditBox_getSelPos = (void (*)(C(EditBox), C(EditLine) *, int *, int *, C(EditLine) *, int *, int *, C(bool)))METHOD(EditBox, getSelPos)->function;

         METHOD(EditBox, getText) = Class_findMethod(CO(EditBox), "GetText", module);
         if(METHOD(EditBox, getText))
            EditBox_getText = (int (*)(C(EditBox), char *, C(EditLine) *, int, int, C(EditLine) *, int, int, C(bool), C(bool)))METHOD(EditBox, getText)->function;

         METHOD(EditBox, goToLineNum) = Class_findMethod(CO(EditBox), "GoToLineNum", module);
         if(METHOD(EditBox, goToLineNum))
            EditBox_goToLineNum = (C(bool) (*)(C(EditBox), int))METHOD(EditBox, goToLineNum)->function;

         METHOD(EditBox, goToPosition) = Class_findMethod(CO(EditBox), "GoToPosition", module);
         if(METHOD(EditBox, goToPosition))
            EditBox_goToPosition = (C(bool) (*)(C(EditBox), C(EditLine) *, int, int))METHOD(EditBox, goToPosition)->function;

         METHOD(EditBox, home) = Class_findMethod(CO(EditBox), "Home", module);
         if(METHOD(EditBox, home))
            EditBox_home = (void (*)(C(EditBox)))METHOD(EditBox, home)->function;

         METHOD(EditBox, lineDown) = Class_findMethod(CO(EditBox), "LineDown", module);
         if(METHOD(EditBox, lineDown))
            EditBox_lineDown = (void (*)(C(EditBox)))METHOD(EditBox, lineDown)->function;

         METHOD(EditBox, lineUp) = Class_findMethod(CO(EditBox), "LineUp", module);
         if(METHOD(EditBox, lineUp))
            EditBox_lineUp = (void (*)(C(EditBox)))METHOD(EditBox, lineUp)->function;

         METHOD(EditBox, load) = Class_findMethod(CO(EditBox), "Load", module);
         if(METHOD(EditBox, load))
            EditBox_load = (void (*)(C(EditBox), C(File)))METHOD(EditBox, load)->function;

         METHOD(EditBox, modified) = Class_findMethod(CO(EditBox), "Modified", module);
         if(METHOD(EditBox, modified))
            EditBox_modified = (void (*)(C(EditBox)))METHOD(EditBox, modified)->function;

         METHOD(EditBox, notifyCaretMove) = Class_findMethod(CO(EditBox), "NotifyCaretMove", module);
         if(METHOD(EditBox, notifyCaretMove))
            M_VTBLID(EditBox, notifyCaretMove) = METHOD(EditBox, notifyCaretMove)->vid;

         METHOD(EditBox, notifyCharsAdded) = Class_findMethod(CO(EditBox), "NotifyCharsAdded", module);
         if(METHOD(EditBox, notifyCharsAdded))
            M_VTBLID(EditBox, notifyCharsAdded) = METHOD(EditBox, notifyCharsAdded)->vid;

         METHOD(EditBox, notifyCharsDeleted) = Class_findMethod(CO(EditBox), "NotifyCharsDeleted", module);
         if(METHOD(EditBox, notifyCharsDeleted))
            M_VTBLID(EditBox, notifyCharsDeleted) = METHOD(EditBox, notifyCharsDeleted)->vid;

         METHOD(EditBox, notifyDoubleClick) = Class_findMethod(CO(EditBox), "NotifyDoubleClick", module);
         if(METHOD(EditBox, notifyDoubleClick))
            M_VTBLID(EditBox, notifyDoubleClick) = METHOD(EditBox, notifyDoubleClick)->vid;

         METHOD(EditBox, notifyDropped) = Class_findMethod(CO(EditBox), "NotifyDropped", module);
         if(METHOD(EditBox, notifyDropped))
            M_VTBLID(EditBox, notifyDropped) = METHOD(EditBox, notifyDropped)->vid;

         METHOD(EditBox, notifyKeyDown) = Class_findMethod(CO(EditBox), "NotifyKeyDown", module);
         if(METHOD(EditBox, notifyKeyDown))
            M_VTBLID(EditBox, notifyKeyDown) = METHOD(EditBox, notifyKeyDown)->vid;

         METHOD(EditBox, notifyModified) = Class_findMethod(CO(EditBox), "NotifyModified", module);
         if(METHOD(EditBox, notifyModified))
            M_VTBLID(EditBox, notifyModified) = METHOD(EditBox, notifyModified)->vid;

         METHOD(EditBox, notifyOvrToggle) = Class_findMethod(CO(EditBox), "NotifyOvrToggle", module);
         if(METHOD(EditBox, notifyOvrToggle))
            M_VTBLID(EditBox, notifyOvrToggle) = METHOD(EditBox, notifyOvrToggle)->vid;

         METHOD(EditBox, notifyUnsetModified) = Class_findMethod(CO(EditBox), "NotifyUnsetModified", module);
         if(METHOD(EditBox, notifyUnsetModified))
            M_VTBLID(EditBox, notifyUnsetModified) = METHOD(EditBox, notifyUnsetModified)->vid;

         METHOD(EditBox, notifyUpdate) = Class_findMethod(CO(EditBox), "NotifyUpdate", module);
         if(METHOD(EditBox, notifyUpdate))
            M_VTBLID(EditBox, notifyUpdate) = METHOD(EditBox, notifyUpdate)->vid;

         METHOD(EditBox, pageDown) = Class_findMethod(CO(EditBox), "PageDown", module);
         if(METHOD(EditBox, pageDown))
            EditBox_pageDown = (void (*)(C(EditBox)))METHOD(EditBox, pageDown)->function;

         METHOD(EditBox, pageUp) = Class_findMethod(CO(EditBox), "PageUp", module);
         if(METHOD(EditBox, pageUp))
            EditBox_pageUp = (void (*)(C(EditBox)))METHOD(EditBox, pageUp)->function;

         METHOD(EditBox, paste) = Class_findMethod(CO(EditBox), "Paste", module);
         if(METHOD(EditBox, paste))
            EditBox_paste = (void (*)(C(EditBox)))METHOD(EditBox, paste)->function;

         METHOD(EditBox, printf) = Class_findMethod(CO(EditBox), "Printf", module);
         if(METHOD(EditBox, printf))
            EditBox_printf = (void (*)(C(EditBox), const char *, ...))METHOD(EditBox, printf)->function;

         METHOD(EditBox, putCh) = Class_findMethod(CO(EditBox), "PutCh", module);
         if(METHOD(EditBox, putCh))
            EditBox_putCh = (void (*)(C(EditBox), unichar))METHOD(EditBox, putCh)->function;

         METHOD(EditBox, putS) = Class_findMethod(CO(EditBox), "PutS", module);
         if(METHOD(EditBox, putS))
            EditBox_putS = (void (*)(C(EditBox), const char *))METHOD(EditBox, putS)->function;

         METHOD(EditBox, record) = Class_findMethod(CO(EditBox), "Record", module);
         if(METHOD(EditBox, record))
            EditBox_record = (void (*)(C(EditBox), C(UndoAction) *))METHOD(EditBox, record)->function;

         METHOD(EditBox, redo) = Class_findMethod(CO(EditBox), "Redo", module);
         if(METHOD(EditBox, redo))
            EditBox_redo = (void (*)(C(EditBox)))METHOD(EditBox, redo)->function;

         METHOD(EditBox, save) = Class_findMethod(CO(EditBox), "Save", module);
         if(METHOD(EditBox, save))
            EditBox_save = (void (*)(C(EditBox), C(File), C(bool)))METHOD(EditBox, save)->function;

         METHOD(EditBox, selSize) = Class_findMethod(CO(EditBox), "SelSize", module);
         if(METHOD(EditBox, selSize))
            EditBox_selSize = (uint (*)(C(EditBox)))METHOD(EditBox, selSize)->function;

         METHOD(EditBox, select) = Class_findMethod(CO(EditBox), "Select", module);
         if(METHOD(EditBox, select))
            EditBox_select = (void (*)(C(EditBox), C(EditLine) *, int, int, C(EditLine) *, int, int))METHOD(EditBox, select)->function;

         METHOD(EditBox, selectAll) = Class_findMethod(CO(EditBox), "SelectAll", module);
         if(METHOD(EditBox, selectAll))
            EditBox_selectAll = (void (*)(C(EditBox)))METHOD(EditBox, selectAll)->function;

         METHOD(EditBox, setContents) = Class_findMethod(CO(EditBox), "SetContents", module);
         if(METHOD(EditBox, setContents))
            EditBox_setContents = (void (*)(C(EditBox), const char *, ...))METHOD(EditBox, setContents)->function;

         METHOD(EditBox, setCursorToView) = Class_findMethod(CO(EditBox), "SetCursorToView", module);
         if(METHOD(EditBox, setCursorToView))
            EditBox_setCursorToView = (void (*)(C(EditBox)))METHOD(EditBox, setCursorToView)->function;

         METHOD(EditBox, setModified) = Class_findMethod(CO(EditBox), "SetModified", module);
         if(METHOD(EditBox, setModified))
            EditBox_setModified = (void (*)(C(EditBox), C(bool)))METHOD(EditBox, setModified)->function;

         METHOD(EditBox, setSelPos) = Class_findMethod(CO(EditBox), "SetSelPos", module);
         if(METHOD(EditBox, setSelPos))
            EditBox_setSelPos = (void (*)(C(EditBox), C(EditLine) *, int, int, C(EditLine) *, int, int))METHOD(EditBox, setSelPos)->function;

         METHOD(EditBox, setViewToCursor) = Class_findMethod(CO(EditBox), "SetViewToCursor", module);
         if(METHOD(EditBox, setViewToCursor))
            EditBox_setViewToCursor = (void (*)(C(EditBox), C(bool)))METHOD(EditBox, setViewToCursor)->function;

         METHOD(EditBox, undo) = Class_findMethod(CO(EditBox), "Undo", module);
         if(METHOD(EditBox, undo))
            EditBox_undo = (void (*)(C(EditBox)))METHOD(EditBox, undo)->function;

         PROPERTY(EditBox, textHorzScroll) = Class_findProperty(CO(EditBox), "textHorzScroll", module);
         if(PROPERTY(EditBox, textHorzScroll))
         {
            EditBox_set_textHorzScroll = (void *)PROPERTY(EditBox, textHorzScroll)->Set;
            EditBox_get_textHorzScroll = (void *)PROPERTY(EditBox, textHorzScroll)->Get;
         }

         PROPERTY(EditBox, textVertScroll) = Class_findProperty(CO(EditBox), "textVertScroll", module);
         if(PROPERTY(EditBox, textVertScroll))
         {
            EditBox_set_textVertScroll = (void *)PROPERTY(EditBox, textVertScroll)->Set;
            EditBox_get_textVertScroll = (void *)PROPERTY(EditBox, textVertScroll)->Get;
         }

         PROPERTY(EditBox, readOnly) = Class_findProperty(CO(EditBox), "readOnly", module);
         if(PROPERTY(EditBox, readOnly))
         {
            EditBox_set_readOnly = (void *)PROPERTY(EditBox, readOnly)->Set;
            EditBox_get_readOnly = (void *)PROPERTY(EditBox, readOnly)->Get;
         }

         PROPERTY(EditBox, multiLine) = Class_findProperty(CO(EditBox), "multiLine", module);
         if(PROPERTY(EditBox, multiLine))
         {
            EditBox_set_multiLine = (void *)PROPERTY(EditBox, multiLine)->Set;
            EditBox_get_multiLine = (void *)PROPERTY(EditBox, multiLine)->Get;
         }

         PROPERTY(EditBox, freeCaret) = Class_findProperty(CO(EditBox), "freeCaret", module);
         if(PROPERTY(EditBox, freeCaret))
         {
            EditBox_set_freeCaret = (void *)PROPERTY(EditBox, freeCaret)->Set;
            EditBox_get_freeCaret = (void *)PROPERTY(EditBox, freeCaret)->Get;
         }

         PROPERTY(EditBox, tabKey) = Class_findProperty(CO(EditBox), "tabKey", module);
         if(PROPERTY(EditBox, tabKey))
         {
            EditBox_set_tabKey = (void *)PROPERTY(EditBox, tabKey)->Set;
            EditBox_get_tabKey = (void *)PROPERTY(EditBox, tabKey)->Get;
         }

         PROPERTY(EditBox, tabSize) = Class_findProperty(CO(EditBox), "tabSize", module);
         if(PROPERTY(EditBox, tabSize))
         {
            EditBox_set_tabSize = (void *)PROPERTY(EditBox, tabSize)->Set;
            EditBox_get_tabSize = (void *)PROPERTY(EditBox, tabSize)->Get;
         }

         PROPERTY(EditBox, tabSelection) = Class_findProperty(CO(EditBox), "tabSelection", module);
         if(PROPERTY(EditBox, tabSelection))
         {
            EditBox_set_tabSelection = (void *)PROPERTY(EditBox, tabSelection)->Set;
            EditBox_get_tabSelection = (void *)PROPERTY(EditBox, tabSelection)->Get;
         }

         PROPERTY(EditBox, smartHome) = Class_findProperty(CO(EditBox), "smartHome", module);
         if(PROPERTY(EditBox, smartHome))
         {
            EditBox_set_smartHome = (void *)PROPERTY(EditBox, smartHome)->Set;
            EditBox_get_smartHome = (void *)PROPERTY(EditBox, smartHome)->Get;
         }

         PROPERTY(EditBox, autoEmpty) = Class_findProperty(CO(EditBox), "autoEmpty", module);
         if(PROPERTY(EditBox, autoEmpty))
         {
            EditBox_set_autoEmpty = (void *)PROPERTY(EditBox, autoEmpty)->Set;
            EditBox_get_autoEmpty = (void *)PROPERTY(EditBox, autoEmpty)->Get;
         }

         PROPERTY(EditBox, noCaret) = Class_findProperty(CO(EditBox), "noCaret", module);
         if(PROPERTY(EditBox, noCaret))
         {
            EditBox_set_noCaret = (void *)PROPERTY(EditBox, noCaret)->Set;
            EditBox_get_noCaret = (void *)PROPERTY(EditBox, noCaret)->Get;
         }

         PROPERTY(EditBox, maxLineSize) = Class_findProperty(CO(EditBox), "maxLineSize", module);
         if(PROPERTY(EditBox, maxLineSize))
         {
            EditBox_set_maxLineSize = (void *)PROPERTY(EditBox, maxLineSize)->Set;
            EditBox_get_maxLineSize = (void *)PROPERTY(EditBox, maxLineSize)->Get;
         }

         PROPERTY(EditBox, maxNumLines) = Class_findProperty(CO(EditBox), "maxNumLines", module);
         if(PROPERTY(EditBox, maxNumLines))
         {
            EditBox_set_maxNumLines = (void *)PROPERTY(EditBox, maxNumLines)->Set;
            EditBox_get_maxNumLines = (void *)PROPERTY(EditBox, maxNumLines)->Get;
         }

         PROPERTY(EditBox, useTab) = Class_findProperty(CO(EditBox), "useTab", module);
         if(PROPERTY(EditBox, useTab))
         {
            EditBox_set_useTab = (void *)PROPERTY(EditBox, useTab)->Set;
            EditBox_get_useTab = (void *)PROPERTY(EditBox, useTab)->Get;
         }

         PROPERTY(EditBox, syntaxHighlighting) = Class_findProperty(CO(EditBox), "syntaxHighlighting", module);
         if(PROPERTY(EditBox, syntaxHighlighting))
         {
            EditBox_set_syntaxHighlighting = (void *)PROPERTY(EditBox, syntaxHighlighting)->Set;
            EditBox_get_syntaxHighlighting = (void *)PROPERTY(EditBox, syntaxHighlighting)->Get;
         }

         PROPERTY(EditBox, noSelect) = Class_findProperty(CO(EditBox), "noSelect", module);
         if(PROPERTY(EditBox, noSelect))
         {
            EditBox_set_noSelect = (void *)PROPERTY(EditBox, noSelect)->Set;
            EditBox_get_noSelect = (void *)PROPERTY(EditBox, noSelect)->Get;
         }

         PROPERTY(EditBox, allCaps) = Class_findProperty(CO(EditBox), "allCaps", module);
         if(PROPERTY(EditBox, allCaps))
         {
            EditBox_set_allCaps = (void *)PROPERTY(EditBox, allCaps)->Set;
            EditBox_get_allCaps = (void *)PROPERTY(EditBox, allCaps)->Get;
         }

         PROPERTY(EditBox, autoSize) = Class_findProperty(CO(EditBox), "autoSize", module);
         if(PROPERTY(EditBox, autoSize))
         {
            EditBox_set_autoSize = (void *)PROPERTY(EditBox, autoSize)->Set;
            EditBox_get_autoSize = (void *)PROPERTY(EditBox, autoSize)->Get;
         }

         PROPERTY(EditBox, wrap) = Class_findProperty(CO(EditBox), "wrap", module);
         if(PROPERTY(EditBox, wrap))
         {
            EditBox_set_wrap = (void *)PROPERTY(EditBox, wrap)->Set;
            EditBox_get_wrap = (void *)PROPERTY(EditBox, wrap)->Get;
         }

         PROPERTY(EditBox, numLines) = Class_findProperty(CO(EditBox), "numLines", module);
         if(PROPERTY(EditBox, numLines))
            EditBox_get_numLines = (void *)PROPERTY(EditBox, numLines)->Get;

         PROPERTY(EditBox, lineNumber) = Class_findProperty(CO(EditBox), "lineNumber", module);
         if(PROPERTY(EditBox, lineNumber))
            EditBox_get_lineNumber = (void *)PROPERTY(EditBox, lineNumber)->Get;

         PROPERTY(EditBox, column) = Class_findProperty(CO(EditBox), "column", module);
         if(PROPERTY(EditBox, column))
            EditBox_get_column = (void *)PROPERTY(EditBox, column)->Get;

         PROPERTY(EditBox, charPos) = Class_findProperty(CO(EditBox), "charPos", module);
         if(PROPERTY(EditBox, charPos))
            EditBox_get_charPos = (void *)PROPERTY(EditBox, charPos)->Get;

         PROPERTY(EditBox, firstLine) = Class_findProperty(CO(EditBox), "firstLine", module);
         if(PROPERTY(EditBox, firstLine))
            EditBox_get_firstLine = (void *)PROPERTY(EditBox, firstLine)->Get;

         PROPERTY(EditBox, lastLine) = Class_findProperty(CO(EditBox), "lastLine", module);
         if(PROPERTY(EditBox, lastLine))
            EditBox_get_lastLine = (void *)PROPERTY(EditBox, lastLine)->Get;

         PROPERTY(EditBox, line) = Class_findProperty(CO(EditBox), "line", module);
         if(PROPERTY(EditBox, line))
            EditBox_get_line = (void *)PROPERTY(EditBox, line)->Get;

         PROPERTY(EditBox, contents) = Class_findProperty(CO(EditBox), "contents", module);
         if(PROPERTY(EditBox, contents))
         {
            EditBox_set_contents = (void *)PROPERTY(EditBox, contents)->Set;
            EditBox_get_contents = (void *)PROPERTY(EditBox, contents)->Get;
         }

         PROPERTY(EditBox, overwrite) = Class_findProperty(CO(EditBox), "overwrite", module);
         if(PROPERTY(EditBox, overwrite))
            EditBox_get_overwrite = (void *)PROPERTY(EditBox, overwrite)->Get;

         PROPERTY(EditBox, caretFollowsScrolling) = Class_findProperty(CO(EditBox), "caretFollowsScrolling", module);
         if(PROPERTY(EditBox, caretFollowsScrolling))
         {
            EditBox_set_caretFollowsScrolling = (void *)PROPERTY(EditBox, caretFollowsScrolling)->Set;
            EditBox_get_caretFollowsScrolling = (void *)PROPERTY(EditBox, caretFollowsScrolling)->Get;
         }

         PROPERTY(EditBox, multiLineContents) = Class_findProperty(CO(EditBox), "multiLineContents", module);
         if(PROPERTY(EditBox, multiLineContents))
            EditBox_get_multiLineContents = (void *)PROPERTY(EditBox, multiLineContents)->Get;

         PROPERTY(EditBox, selectionColor) = Class_findProperty(CO(EditBox), "selectionColor", module);
         if(PROPERTY(EditBox, selectionColor))
         {
            EditBox_set_selectionColor = (void *)PROPERTY(EditBox, selectionColor)->Set;
            EditBox_get_selectionColor = (void *)PROPERTY(EditBox, selectionColor)->Get;
            EditBox_isSet_selectionColor = (void *)PROPERTY(EditBox, selectionColor)->IsSet;
         }

         PROPERTY(EditBox, selectionText) = Class_findProperty(CO(EditBox), "selectionText", module);
         if(PROPERTY(EditBox, selectionText))
         {
            EditBox_set_selectionText = (void *)PROPERTY(EditBox, selectionText)->Set;
            EditBox_get_selectionText = (void *)PROPERTY(EditBox, selectionText)->Get;
            EditBox_isSet_selectionText = (void *)PROPERTY(EditBox, selectionText)->IsSet;
         }

         PROPERTY(EditBox, syntaxColorScheme) = Class_findProperty(CO(EditBox), "syntaxColorScheme", module);
         if(PROPERTY(EditBox, syntaxColorScheme))
            EditBox_set_syntaxColorScheme = (void *)PROPERTY(EditBox, syntaxColorScheme)->Set;

         PROPERTY(EditBox, recordUndoEvent) = Class_findProperty(CO(EditBox), "recordUndoEvent", module);
         if(PROPERTY(EditBox, recordUndoEvent))
         {
            EditBox_set_recordUndoEvent = (void *)PROPERTY(EditBox, recordUndoEvent)->Set;
            EditBox_get_recordUndoEvent = (void *)PROPERTY(EditBox, recordUndoEvent)->Get;
         }
      }
      CO(EditBoxFindResult) = eC_findClass(module, "EditBoxFindResult");
      CO(EditBoxStream) = eC_findClass(module, "EditBoxStream");
      if(CO(EditBoxStream))
      {
         METHOD(EditBoxStream, deleteBytes) = Class_findMethod(CO(EditBoxStream), "DeleteBytes", module);
         if(METHOD(EditBoxStream, deleteBytes))
            EditBoxStream_deleteBytes = (void (*)(C(EditBoxStream), uint))METHOD(EditBoxStream, deleteBytes)->function;

         PROPERTY(EditBoxStream, editBox) = Class_findProperty(CO(EditBoxStream), "editBox", module);
         if(PROPERTY(EditBoxStream, editBox))
         {
            EditBoxStream_set_editBox = (void *)PROPERTY(EditBoxStream, editBox)->Set;
            EditBoxStream_get_editBox = (void *)PROPERTY(EditBoxStream, editBox)->Get;
         }
      }
      CO(EditLine) = eC_findClass(module, "EditLine");
      if(CO(EditLine))
      {
         PROPERTY(EditLine, text) = Class_findProperty(CO(EditLine), "text", module);
         if(PROPERTY(EditLine, text))
         {
            EditLine_set_text = (void *)PROPERTY(EditLine, text)->Set;
            EditLine_get_text = (void *)PROPERTY(EditLine, text)->Get;
         }

         PROPERTY(EditLine, prev) = Class_findProperty(CO(EditLine), "prev", module);
         if(PROPERTY(EditLine, prev))
            EditLine_get_prev = (void *)PROPERTY(EditLine, prev)->Get;

         PROPERTY(EditLine, next) = Class_findProperty(CO(EditLine), "next", module);
         if(PROPERTY(EditLine, next))
            EditLine_get_next = (void *)PROPERTY(EditLine, next)->Get;

         PROPERTY(EditLine, count) = Class_findProperty(CO(EditLine), "count", module);
         if(PROPERTY(EditLine, count))
            EditLine_get_count = (void *)PROPERTY(EditLine, count)->Get;
      }
      CO(EditableSelectorButton) = eC_findClass(module, "EditableSelectorButton");
      if(CO(EditableSelectorButton))
      {
         METHOD(EditableSelectorButton, onRename) = Class_findMethod(CO(EditableSelectorButton), "OnRename", module);
         if(METHOD(EditableSelectorButton, onRename))
            M_VTBLID(EditableSelectorButton, onRename) = METHOD(EditableSelectorButton, onRename)->vid;

         PROPERTY(EditableSelectorButton, renameable) = Class_findProperty(CO(EditableSelectorButton), "renameable", module);
         if(PROPERTY(EditableSelectorButton, renameable))
         {
            EditableSelectorButton_set_renameable = (void *)PROPERTY(EditableSelectorButton, renameable)->Set;
            EditableSelectorButton_get_renameable = (void *)PROPERTY(EditableSelectorButton, renameable)->Get;
         }

         PROPERTY(EditableSelectorButton, editBox) = Class_findProperty(CO(EditableSelectorButton), "editBox", module);
         if(PROPERTY(EditableSelectorButton, editBox))
            EditableSelectorButton_get_editBox = (void *)PROPERTY(EditableSelectorButton, editBox)->Get;
      }
      CO(FilePath) = eC_findClass(module, "FilePath");
      CO(Label) = eC_findClass(module, "Label");
      if(CO(Label))
      {
         PROPERTY(Label, labeledWindow) = Class_findProperty(CO(Label), "labeledWindow", module);
         if(PROPERTY(Label, labeledWindow))
         {
            Label_set_labeledWindow = (void *)PROPERTY(Label, labeledWindow)->Set;
            Label_get_labeledWindow = (void *)PROPERTY(Label, labeledWindow)->Get;
         }

         PROPERTY(Label, isGroupBox) = Class_findProperty(CO(Label), "isGroupBox", module);
         if(PROPERTY(Label, isGroupBox))
         {
            Label_set_isGroupBox = (void *)PROPERTY(Label, isGroupBox)->Set;
            Label_get_isGroupBox = (void *)PROPERTY(Label, isGroupBox)->Get;
         }
      }
      CO(ListBox) = eC_findClass(module, "ListBox");
      if(CO(ListBox))
      {
         METHOD(ListBox, addField) = Class_findMethod(CO(ListBox), "AddField", module);
         if(METHOD(ListBox, addField))
            ListBox_addField = (void (*)(C(ListBox), C(DataField)))METHOD(ListBox, addField)->function;

         METHOD(ListBox, addRow) = Class_findMethod(CO(ListBox), "AddRow", module);
         if(METHOD(ListBox, addRow))
            ListBox_addRow = (C(DataRow) (*)(C(ListBox)))METHOD(ListBox, addRow)->function;

         METHOD(ListBox, addRowAfter) = Class_findMethod(CO(ListBox), "AddRowAfter", module);
         if(METHOD(ListBox, addRowAfter))
            ListBox_addRowAfter = (C(DataRow) (*)(C(ListBox), C(DataRow)))METHOD(ListBox, addRowAfter)->function;

         METHOD(ListBox, addRowNone) = Class_findMethod(CO(ListBox), "AddRowNone", module);
         if(METHOD(ListBox, addRowNone))
            ListBox_addRowNone = (C(DataRow) (*)(C(ListBox)))METHOD(ListBox, addRowNone)->function;

         METHOD(ListBox, addString) = Class_findMethod(CO(ListBox), "AddString", module);
         if(METHOD(ListBox, addString))
            ListBox_addString = (C(DataRow) (*)(C(ListBox), const char *))METHOD(ListBox, addString)->function;

         METHOD(ListBox, addStringf) = Class_findMethod(CO(ListBox), "AddStringf", module);
         if(METHOD(ListBox, addStringf))
            ListBox_addStringf = (C(DataRow) (*)(C(ListBox), const char *, ...))METHOD(ListBox, addStringf)->function;

         METHOD(ListBox, clear) = Class_findMethod(CO(ListBox), "Clear", module);
         if(METHOD(ListBox, clear))
            ListBox_clear = (void (*)(C(ListBox)))METHOD(ListBox, clear)->function;

         METHOD(ListBox, clearFields) = Class_findMethod(CO(ListBox), "ClearFields", module);
         if(METHOD(ListBox, clearFields))
            ListBox_clearFields = (void (*)(C(ListBox)))METHOD(ListBox, clearFields)->function;

         METHOD(ListBox, deleteRow) = Class_findMethod(CO(ListBox), "DeleteRow", module);
         if(METHOD(ListBox, deleteRow))
            ListBox_deleteRow = (void (*)(C(ListBox), C(DataRow)))METHOD(ListBox, deleteRow)->function;

         METHOD(ListBox, findRow) = Class_findMethod(CO(ListBox), "FindRow", module);
         if(METHOD(ListBox, findRow))
            ListBox_findRow = (C(DataRow) (*)(C(ListBox), int64))METHOD(ListBox, findRow)->function;

         METHOD(ListBox, findString) = Class_findMethod(CO(ListBox), "FindString", module);
         if(METHOD(ListBox, findString))
            ListBox_findString = (C(DataRow) (*)(C(ListBox), const char *))METHOD(ListBox, findString)->function;

         METHOD(ListBox, findSubRow) = Class_findMethod(CO(ListBox), "FindSubRow", module);
         if(METHOD(ListBox, findSubRow))
            ListBox_findSubRow = (C(DataRow) (*)(C(ListBox), int64))METHOD(ListBox, findSubRow)->function;

         METHOD(ListBox, findSubString) = Class_findMethod(CO(ListBox), "FindSubString", module);
         if(METHOD(ListBox, findSubString))
            ListBox_findSubString = (C(DataRow) (*)(C(ListBox), const char *))METHOD(ListBox, findSubString)->function;

         METHOD(ListBox, findSubStringAfter) = Class_findMethod(CO(ListBox), "FindSubStringAfter", module);
         if(METHOD(ListBox, findSubStringAfter))
            ListBox_findSubStringAfter = (C(DataRow) (*)(C(ListBox), C(DataRow), const char *))METHOD(ListBox, findSubStringAfter)->function;

         METHOD(ListBox, findSubStringi) = Class_findMethod(CO(ListBox), "FindSubStringi", module);
         if(METHOD(ListBox, findSubStringi))
            ListBox_findSubStringi = (C(DataRow) (*)(C(ListBox), const char *))METHOD(ListBox, findSubStringi)->function;

         METHOD(ListBox, getData) = Class_findMethod(CO(ListBox), "GetData", module);
         if(METHOD(ListBox, getData))
            ListBox_getData = (any_object (*)(C(ListBox), C(DataField)))METHOD(ListBox, getData)->function;

         METHOD(ListBox, getMultiSelection) = Class_findMethod(CO(ListBox), "GetMultiSelection", module);
         if(METHOD(ListBox, getMultiSelection))
            ListBox_getMultiSelection = (void (*)(C(ListBox), C(OldList) *))METHOD(ListBox, getMultiSelection)->function;

         METHOD(ListBox, getTag) = Class_findMethod(CO(ListBox), "GetTag", module);
         if(METHOD(ListBox, getTag))
            ListBox_getTag = (int64 (*)(C(ListBox)))METHOD(ListBox, getTag)->function;

         METHOD(ListBox, notifyChanged) = Class_findMethod(CO(ListBox), "NotifyChanged", module);
         if(METHOD(ListBox, notifyChanged))
            M_VTBLID(ListBox, notifyChanged) = METHOD(ListBox, notifyChanged)->vid;

         METHOD(ListBox, notifyCollapse) = Class_findMethod(CO(ListBox), "NotifyCollapse", module);
         if(METHOD(ListBox, notifyCollapse))
            M_VTBLID(ListBox, notifyCollapse) = METHOD(ListBox, notifyCollapse)->vid;

         METHOD(ListBox, notifyDoubleClick) = Class_findMethod(CO(ListBox), "NotifyDoubleClick", module);
         if(METHOD(ListBox, notifyDoubleClick))
            M_VTBLID(ListBox, notifyDoubleClick) = METHOD(ListBox, notifyDoubleClick)->vid;

         METHOD(ListBox, notifyEditDone) = Class_findMethod(CO(ListBox), "NotifyEditDone", module);
         if(METHOD(ListBox, notifyEditDone))
            M_VTBLID(ListBox, notifyEditDone) = METHOD(ListBox, notifyEditDone)->vid;

         METHOD(ListBox, notifyEdited) = Class_findMethod(CO(ListBox), "NotifyEdited", module);
         if(METHOD(ListBox, notifyEdited))
            M_VTBLID(ListBox, notifyEdited) = METHOD(ListBox, notifyEdited)->vid;

         METHOD(ListBox, notifyEditing) = Class_findMethod(CO(ListBox), "NotifyEditing", module);
         if(METHOD(ListBox, notifyEditing))
            M_VTBLID(ListBox, notifyEditing) = METHOD(ListBox, notifyEditing)->vid;

         METHOD(ListBox, notifyHighlight) = Class_findMethod(CO(ListBox), "NotifyHighlight", module);
         if(METHOD(ListBox, notifyHighlight))
            M_VTBLID(ListBox, notifyHighlight) = METHOD(ListBox, notifyHighlight)->vid;

         METHOD(ListBox, notifyKeyDown) = Class_findMethod(CO(ListBox), "NotifyKeyDown", module);
         if(METHOD(ListBox, notifyKeyDown))
            M_VTBLID(ListBox, notifyKeyDown) = METHOD(ListBox, notifyKeyDown)->vid;

         METHOD(ListBox, notifyKeyHit) = Class_findMethod(CO(ListBox), "NotifyKeyHit", module);
         if(METHOD(ListBox, notifyKeyHit))
            M_VTBLID(ListBox, notifyKeyHit) = METHOD(ListBox, notifyKeyHit)->vid;

         METHOD(ListBox, notifyModified) = Class_findMethod(CO(ListBox), "NotifyModified", module);
         if(METHOD(ListBox, notifyModified))
            M_VTBLID(ListBox, notifyModified) = METHOD(ListBox, notifyModified)->vid;

         METHOD(ListBox, notifyMove) = Class_findMethod(CO(ListBox), "NotifyMove", module);
         if(METHOD(ListBox, notifyMove))
            M_VTBLID(ListBox, notifyMove) = METHOD(ListBox, notifyMove)->vid;

         METHOD(ListBox, notifyMoved) = Class_findMethod(CO(ListBox), "NotifyMoved", module);
         if(METHOD(ListBox, notifyMoved))
            M_VTBLID(ListBox, notifyMoved) = METHOD(ListBox, notifyMoved)->vid;

         METHOD(ListBox, notifyMovedField) = Class_findMethod(CO(ListBox), "NotifyMovedField", module);
         if(METHOD(ListBox, notifyMovedField))
            M_VTBLID(ListBox, notifyMovedField) = METHOD(ListBox, notifyMovedField)->vid;

         METHOD(ListBox, notifyReclick) = Class_findMethod(CO(ListBox), "NotifyReclick", module);
         if(METHOD(ListBox, notifyReclick))
            M_VTBLID(ListBox, notifyReclick) = METHOD(ListBox, notifyReclick)->vid;

         METHOD(ListBox, notifyResized) = Class_findMethod(CO(ListBox), "NotifyResized", module);
         if(METHOD(ListBox, notifyResized))
            M_VTBLID(ListBox, notifyResized) = METHOD(ListBox, notifyResized)->vid;

         METHOD(ListBox, notifyRightClick) = Class_findMethod(CO(ListBox), "NotifyRightClick", module);
         if(METHOD(ListBox, notifyRightClick))
            M_VTBLID(ListBox, notifyRightClick) = METHOD(ListBox, notifyRightClick)->vid;

         METHOD(ListBox, notifySelect) = Class_findMethod(CO(ListBox), "NotifySelect", module);
         if(METHOD(ListBox, notifySelect))
            M_VTBLID(ListBox, notifySelect) = METHOD(ListBox, notifySelect)->vid;

         METHOD(ListBox, notifySort) = Class_findMethod(CO(ListBox), "NotifySort", module);
         if(METHOD(ListBox, notifySort))
            M_VTBLID(ListBox, notifySort) = METHOD(ListBox, notifySort)->vid;

         METHOD(ListBox, removeField) = Class_findMethod(CO(ListBox), "RemoveField", module);
         if(METHOD(ListBox, removeField))
            ListBox_removeField = (void (*)(C(ListBox), C(DataField)))METHOD(ListBox, removeField)->function;

         METHOD(ListBox, selectRow) = Class_findMethod(CO(ListBox), "SelectRow", module);
         if(METHOD(ListBox, selectRow))
            ListBox_selectRow = (void (*)(C(ListBox), C(DataRow)))METHOD(ListBox, selectRow)->function;

         METHOD(ListBox, setData) = Class_findMethod(CO(ListBox), "SetData", module);
         if(METHOD(ListBox, setData))
            ListBox_setData = (void * (*)(C(ListBox), C(DataField), any_object))METHOD(ListBox, setData)->function;

         METHOD(ListBox, sort) = Class_findMethod(CO(ListBox), "Sort", module);
         if(METHOD(ListBox, sort))
            ListBox_sort = (void (*)(C(ListBox), C(DataField), int))METHOD(ListBox, sort)->function;

         METHOD(ListBox, stopEditing) = Class_findMethod(CO(ListBox), "StopEditing", module);
         if(METHOD(ListBox, stopEditing))
            ListBox_stopEditing = (void (*)(C(ListBox), C(bool)))METHOD(ListBox, stopEditing)->function;

         PROPERTY(ListBox, freeSelect) = Class_findProperty(CO(ListBox), "freeSelect", module);
         if(PROPERTY(ListBox, freeSelect))
         {
            ListBox_set_freeSelect = (void *)PROPERTY(ListBox, freeSelect)->Set;
            ListBox_get_freeSelect = (void *)PROPERTY(ListBox, freeSelect)->Get;
         }

         PROPERTY(ListBox, currentRow) = Class_findProperty(CO(ListBox), "currentRow", module);
         if(PROPERTY(ListBox, currentRow))
         {
            ListBox_set_currentRow = (void *)PROPERTY(ListBox, currentRow)->Set;
            ListBox_get_currentRow = (void *)PROPERTY(ListBox, currentRow)->Get;
         }

         PROPERTY(ListBox, currentField) = Class_findProperty(CO(ListBox), "currentField", module);
         if(PROPERTY(ListBox, currentField))
         {
            ListBox_set_currentField = (void *)PROPERTY(ListBox, currentField)->Set;
            ListBox_get_currentField = (void *)PROPERTY(ListBox, currentField)->Get;
         }

         PROPERTY(ListBox, rowHeight) = Class_findProperty(CO(ListBox), "rowHeight", module);
         if(PROPERTY(ListBox, rowHeight))
         {
            ListBox_set_rowHeight = (void *)PROPERTY(ListBox, rowHeight)->Set;
            ListBox_get_rowHeight = (void *)PROPERTY(ListBox, rowHeight)->Get;
            ListBox_isSet_rowHeight = (void *)PROPERTY(ListBox, rowHeight)->IsSet;
         }

         PROPERTY(ListBox, typingTimeout) = Class_findProperty(CO(ListBox), "typingTimeout", module);
         if(PROPERTY(ListBox, typingTimeout))
         {
            ListBox_set_typingTimeout = (void *)PROPERTY(ListBox, typingTimeout)->Set;
            ListBox_get_typingTimeout = (void *)PROPERTY(ListBox, typingTimeout)->Get;
         }

         PROPERTY(ListBox, moveRows) = Class_findProperty(CO(ListBox), "moveRows", module);
         if(PROPERTY(ListBox, moveRows))
         {
            ListBox_set_moveRows = (void *)PROPERTY(ListBox, moveRows)->Set;
            ListBox_get_moveRows = (void *)PROPERTY(ListBox, moveRows)->Get;
         }

         PROPERTY(ListBox, moveFields) = Class_findProperty(CO(ListBox), "moveFields", module);
         if(PROPERTY(ListBox, moveFields))
         {
            ListBox_set_moveFields = (void *)PROPERTY(ListBox, moveFields)->Set;
            ListBox_get_moveFields = (void *)PROPERTY(ListBox, moveFields)->Get;
         }

         PROPERTY(ListBox, resizable) = Class_findProperty(CO(ListBox), "resizable", module);
         if(PROPERTY(ListBox, resizable))
         {
            ListBox_set_resizable = (void *)PROPERTY(ListBox, resizable)->Set;
            ListBox_get_resizable = (void *)PROPERTY(ListBox, resizable)->Get;
         }

         PROPERTY(ListBox, autoScroll) = Class_findProperty(CO(ListBox), "autoScroll", module);
         if(PROPERTY(ListBox, autoScroll))
         {
            ListBox_set_autoScroll = (void *)PROPERTY(ListBox, autoScroll)->Set;
            ListBox_get_autoScroll = (void *)PROPERTY(ListBox, autoScroll)->Get;
         }

         PROPERTY(ListBox, alwaysHighLight) = Class_findProperty(CO(ListBox), "alwaysHighLight", module);
         if(PROPERTY(ListBox, alwaysHighLight))
         {
            ListBox_set_alwaysHighLight = (void *)PROPERTY(ListBox, alwaysHighLight)->Set;
            ListBox_get_alwaysHighLight = (void *)PROPERTY(ListBox, alwaysHighLight)->Get;
         }

         PROPERTY(ListBox, hasClearHeader) = Class_findProperty(CO(ListBox), "hasClearHeader", module);
         if(PROPERTY(ListBox, hasClearHeader))
         {
            ListBox_set_hasClearHeader = (void *)PROPERTY(ListBox, hasClearHeader)->Set;
            ListBox_get_hasClearHeader = (void *)PROPERTY(ListBox, hasClearHeader)->Get;
         }

         PROPERTY(ListBox, hasHeader) = Class_findProperty(CO(ListBox), "hasHeader", module);
         if(PROPERTY(ListBox, hasHeader))
         {
            ListBox_set_hasHeader = (void *)PROPERTY(ListBox, hasHeader)->Set;
            ListBox_get_hasHeader = (void *)PROPERTY(ListBox, hasHeader)->Get;
         }

         PROPERTY(ListBox, multiSelect) = Class_findProperty(CO(ListBox), "multiSelect", module);
         if(PROPERTY(ListBox, multiSelect))
         {
            ListBox_set_multiSelect = (void *)PROPERTY(ListBox, multiSelect)->Set;
            ListBox_get_multiSelect = (void *)PROPERTY(ListBox, multiSelect)->Get;
         }

         PROPERTY(ListBox, alwaysEdit) = Class_findProperty(CO(ListBox), "alwaysEdit", module);
         if(PROPERTY(ListBox, alwaysEdit))
         {
            ListBox_set_alwaysEdit = (void *)PROPERTY(ListBox, alwaysEdit)->Set;
            ListBox_get_alwaysEdit = (void *)PROPERTY(ListBox, alwaysEdit)->Get;
         }

         PROPERTY(ListBox, fullRowSelect) = Class_findProperty(CO(ListBox), "fullRowSelect", module);
         if(PROPERTY(ListBox, fullRowSelect))
         {
            ListBox_set_fullRowSelect = (void *)PROPERTY(ListBox, fullRowSelect)->Set;
            ListBox_get_fullRowSelect = (void *)PROPERTY(ListBox, fullRowSelect)->Get;
         }

         PROPERTY(ListBox, collapseControl) = Class_findProperty(CO(ListBox), "collapseControl", module);
         if(PROPERTY(ListBox, collapseControl))
         {
            ListBox_set_collapseControl = (void *)PROPERTY(ListBox, collapseControl)->Set;
            ListBox_get_collapseControl = (void *)PROPERTY(ListBox, collapseControl)->Get;
         }

         PROPERTY(ListBox, treeBranches) = Class_findProperty(CO(ListBox), "treeBranches", module);
         if(PROPERTY(ListBox, treeBranches))
         {
            ListBox_set_treeBranches = (void *)PROPERTY(ListBox, treeBranches)->Set;
            ListBox_get_treeBranches = (void *)PROPERTY(ListBox, treeBranches)->Get;
         }

         PROPERTY(ListBox, rootCollapseButton) = Class_findProperty(CO(ListBox), "rootCollapseButton", module);
         if(PROPERTY(ListBox, rootCollapseButton))
         {
            ListBox_set_rootCollapseButton = (void *)PROPERTY(ListBox, rootCollapseButton)->Set;
            ListBox_get_rootCollapseButton = (void *)PROPERTY(ListBox, rootCollapseButton)->Get;
         }

         PROPERTY(ListBox, sortable) = Class_findProperty(CO(ListBox), "sortable", module);
         if(PROPERTY(ListBox, sortable))
         {
            ListBox_set_sortable = (void *)PROPERTY(ListBox, sortable)->Set;
            ListBox_get_sortable = (void *)PROPERTY(ListBox, sortable)->Get;
         }

         PROPERTY(ListBox, noDragging) = Class_findProperty(CO(ListBox), "noDragging", module);
         if(PROPERTY(ListBox, noDragging))
         {
            ListBox_set_noDragging = (void *)PROPERTY(ListBox, noDragging)->Set;
            ListBox_get_noDragging = (void *)PROPERTY(ListBox, noDragging)->Get;
         }

         PROPERTY(ListBox, fillLastField) = Class_findProperty(CO(ListBox), "fillLastField", module);
         if(PROPERTY(ListBox, fillLastField))
         {
            ListBox_set_fillLastField = (void *)PROPERTY(ListBox, fillLastField)->Set;
            ListBox_get_fillLastField = (void *)PROPERTY(ListBox, fillLastField)->Get;
         }

         PROPERTY(ListBox, numSelections) = Class_findProperty(CO(ListBox), "numSelections", module);
         if(PROPERTY(ListBox, numSelections))
            ListBox_get_numSelections = (void *)PROPERTY(ListBox, numSelections)->Get;

         PROPERTY(ListBox, currentIndex) = Class_findProperty(CO(ListBox), "currentIndex", module);
         if(PROPERTY(ListBox, currentIndex))
            ListBox_get_currentIndex = (void *)PROPERTY(ListBox, currentIndex)->Get;

         PROPERTY(ListBox, lastRow) = Class_findProperty(CO(ListBox), "lastRow", module);
         if(PROPERTY(ListBox, lastRow))
            ListBox_get_lastRow = (void *)PROPERTY(ListBox, lastRow)->Get;

         PROPERTY(ListBox, firstRow) = Class_findProperty(CO(ListBox), "firstRow", module);
         if(PROPERTY(ListBox, firstRow))
            ListBox_get_firstRow = (void *)PROPERTY(ListBox, firstRow)->Get;

         PROPERTY(ListBox, rowCount) = Class_findProperty(CO(ListBox), "rowCount", module);
         if(PROPERTY(ListBox, rowCount))
            ListBox_get_rowCount = (void *)PROPERTY(ListBox, rowCount)->Get;

         PROPERTY(ListBox, firstField) = Class_findProperty(CO(ListBox), "firstField", module);
         if(PROPERTY(ListBox, firstField))
            ListBox_get_firstField = (void *)PROPERTY(ListBox, firstField)->Get;

         PROPERTY(ListBox, selectionColor) = Class_findProperty(CO(ListBox), "selectionColor", module);
         if(PROPERTY(ListBox, selectionColor))
         {
            ListBox_set_selectionColor = (void *)PROPERTY(ListBox, selectionColor)->Set;
            ListBox_get_selectionColor = (void *)PROPERTY(ListBox, selectionColor)->Get;
            ListBox_isSet_selectionColor = (void *)PROPERTY(ListBox, selectionColor)->IsSet;
         }

         PROPERTY(ListBox, selectionText) = Class_findProperty(CO(ListBox), "selectionText", module);
         if(PROPERTY(ListBox, selectionText))
         {
            ListBox_set_selectionText = (void *)PROPERTY(ListBox, selectionText)->Set;
            ListBox_get_selectionText = (void *)PROPERTY(ListBox, selectionText)->Get;
            ListBox_isSet_selectionText = (void *)PROPERTY(ListBox, selectionText)->IsSet;
         }

         PROPERTY(ListBox, stippleColor) = Class_findProperty(CO(ListBox), "stippleColor", module);
         if(PROPERTY(ListBox, stippleColor))
         {
            ListBox_set_stippleColor = (void *)PROPERTY(ListBox, stippleColor)->Set;
            ListBox_get_stippleColor = (void *)PROPERTY(ListBox, stippleColor)->Get;
         }

         PROPERTY(ListBox, expandOnAdd) = Class_findProperty(CO(ListBox), "expandOnAdd", module);
         if(PROPERTY(ListBox, expandOnAdd))
         {
            ListBox_set_expandOnAdd = (void *)PROPERTY(ListBox, expandOnAdd)->Set;
            ListBox_get_expandOnAdd = (void *)PROPERTY(ListBox, expandOnAdd)->Get;
         }
      }
      CO(Menu) = eC_findClass(module, "Menu");
      if(CO(Menu))
      {
         METHOD(Menu, addDynamic) = Class_findMethod(CO(Menu), "AddDynamic", module);
         if(METHOD(Menu, addDynamic))
            Menu_addDynamic = (void (*)(C(Menu), C(MenuItem), C(Window), C(bool)))METHOD(Menu, addDynamic)->function;

         METHOD(Menu, addItem) = Class_findMethod(CO(Menu), "AddItem", module);
         if(METHOD(Menu, addItem))
            Menu_addItem = (void (*)(C(Menu), C(MenuItem)))METHOD(Menu, addItem)->function;

         METHOD(Menu, addSubMenu) = Class_findMethod(CO(Menu), "AddSubMenu", module);
         if(METHOD(Menu, addSubMenu))
            Menu_addSubMenu = (void (*)(C(Menu), C(Menu)))METHOD(Menu, addSubMenu)->function;

         METHOD(Menu, clean) = Class_findMethod(CO(Menu), "Clean", module);
         if(METHOD(Menu, clean))
            Menu_clean = (void (*)(C(Menu), C(Window)))METHOD(Menu, clean)->function;

         METHOD(Menu, clear) = Class_findMethod(CO(Menu), "Clear", module);
         if(METHOD(Menu, clear))
            Menu_clear = (void (*)(C(Menu)))METHOD(Menu, clear)->function;

         METHOD(Menu, findItem) = Class_findMethod(CO(Menu), "FindItem", module);
         if(METHOD(Menu, findItem))
            Menu_findItem = (C(MenuItem) (*)(C(Menu), C(bool) (*)(C(MenuItem), C(Modifiers)), uint64))METHOD(Menu, findItem)->function;

         METHOD(Menu, findMenu) = Class_findMethod(CO(Menu), "FindMenu", module);
         if(METHOD(Menu, findMenu))
            Menu_findMenu = (C(Menu) (*)(C(Menu), const char *))METHOD(Menu, findMenu)->function;

         METHOD(Menu, merge) = Class_findMethod(CO(Menu), "Merge", module);
         if(METHOD(Menu, merge))
            Menu_merge = (void (*)(C(Menu), C(Menu), C(bool), C(Window)))METHOD(Menu, merge)->function;

         METHOD(Menu, removeItem) = Class_findMethod(CO(Menu), "RemoveItem", module);
         if(METHOD(Menu, removeItem))
            Menu_removeItem = (void (*)(C(Menu), C(MenuItem)))METHOD(Menu, removeItem)->function;

         PROPERTY(Menu, parent) = Class_findProperty(CO(Menu), "parent", module);
         if(PROPERTY(Menu, parent))
            Menu_set_parent = (void *)PROPERTY(Menu, parent)->Set;

         PROPERTY(Menu, text) = Class_findProperty(CO(Menu), "text", module);
         if(PROPERTY(Menu, text))
            Menu_set_text = (void *)PROPERTY(Menu, text)->Set;

         PROPERTY(Menu, hotKey) = Class_findProperty(CO(Menu), "hotKey", module);
         if(PROPERTY(Menu, hotKey))
            Menu_set_hotKey = (void *)PROPERTY(Menu, hotKey)->Set;

         PROPERTY(Menu, hasMargin) = Class_findProperty(CO(Menu), "hasMargin", module);
         if(PROPERTY(Menu, hasMargin))
            Menu_set_hasMargin = (void *)PROPERTY(Menu, hasMargin)->Set;

         PROPERTY(Menu, copyText) = Class_findProperty(CO(Menu), "copyText", module);
         if(PROPERTY(Menu, copyText))
            Menu_set_copyText = (void *)PROPERTY(Menu, copyText)->Set;
      }
      CO(MenuDivider) = eC_findClass(module, "MenuDivider");
      CO(MenuItem) = eC_findClass(module, "MenuItem");
      if(CO(MenuItem))
      {
         METHOD(MenuItem, notifySelect) = Class_findMethod(CO(MenuItem), "NotifySelect", module);
         if(METHOD(MenuItem, notifySelect))
            M_VTBLID(MenuItem, notifySelect) = METHOD(MenuItem, notifySelect)->vid;

         PROPERTY(MenuItem, parent) = Class_findProperty(CO(MenuItem), "parent", module);
         if(PROPERTY(MenuItem, parent))
            MenuItem_set_parent = (void *)PROPERTY(MenuItem, parent)->Set;

         PROPERTY(MenuItem, text) = Class_findProperty(CO(MenuItem), "text", module);
         if(PROPERTY(MenuItem, text))
            MenuItem_set_text = (void *)PROPERTY(MenuItem, text)->Set;

         PROPERTY(MenuItem, hotKey) = Class_findProperty(CO(MenuItem), "hotKey", module);
         if(PROPERTY(MenuItem, hotKey))
            MenuItem_set_hotKey = (void *)PROPERTY(MenuItem, hotKey)->Set;

         PROPERTY(MenuItem, accelerator) = Class_findProperty(CO(MenuItem), "accelerator", module);
         if(PROPERTY(MenuItem, accelerator))
            MenuItem_set_accelerator = (void *)PROPERTY(MenuItem, accelerator)->Set;

         PROPERTY(MenuItem, checked) = Class_findProperty(CO(MenuItem), "checked", module);
         if(PROPERTY(MenuItem, checked))
         {
            MenuItem_set_checked = (void *)PROPERTY(MenuItem, checked)->Set;
            MenuItem_get_checked = (void *)PROPERTY(MenuItem, checked)->Get;
         }

         PROPERTY(MenuItem, disabled) = Class_findProperty(CO(MenuItem), "disabled", module);
         if(PROPERTY(MenuItem, disabled))
            MenuItem_set_disabled = (void *)PROPERTY(MenuItem, disabled)->Set;

         PROPERTY(MenuItem, checkable) = Class_findProperty(CO(MenuItem), "checkable", module);
         if(PROPERTY(MenuItem, checkable))
            MenuItem_set_checkable = (void *)PROPERTY(MenuItem, checkable)->Set;

         PROPERTY(MenuItem, isRadio) = Class_findProperty(CO(MenuItem), "isRadio", module);
         if(PROPERTY(MenuItem, isRadio))
            MenuItem_set_isRadio = (void *)PROPERTY(MenuItem, isRadio)->Set;

         PROPERTY(MenuItem, id) = Class_findProperty(CO(MenuItem), "id", module);
         if(PROPERTY(MenuItem, id))
         {
            MenuItem_set_id = (void *)PROPERTY(MenuItem, id)->Set;
            MenuItem_get_id = (void *)PROPERTY(MenuItem, id)->Get;
         }

         PROPERTY(MenuItem, bitmap) = Class_findProperty(CO(MenuItem), "bitmap", module);
         if(PROPERTY(MenuItem, bitmap))
         {
            MenuItem_set_bitmap = (void *)PROPERTY(MenuItem, bitmap)->Set;
            MenuItem_get_bitmap = (void *)PROPERTY(MenuItem, bitmap)->Get;
         }

         PROPERTY(MenuItem, copyText) = Class_findProperty(CO(MenuItem), "copyText", module);
         if(PROPERTY(MenuItem, copyText))
            MenuItem_set_copyText = (void *)PROPERTY(MenuItem, copyText)->Set;

         PROPERTY(MenuItem, bold) = Class_findProperty(CO(MenuItem), "bold", module);
         if(PROPERTY(MenuItem, bold))
         {
            MenuItem_set_bold = (void *)PROPERTY(MenuItem, bold)->Set;
            MenuItem_get_bold = (void *)PROPERTY(MenuItem, bold)->Get;
         }
      }
      CO(MenuPlacement) = eC_findClass(module, "MenuPlacement");
      CO(OldArray) = eC_findClass(module, "OldArray");
      if(CO(OldArray))
      {
         PROPERTY(OldArray, size) = Class_findProperty(CO(OldArray), "size", module);
         if(PROPERTY(OldArray, size))
         {
            OldArray_set_size = (void *)PROPERTY(OldArray, size)->Set;
            OldArray_get_size = (void *)PROPERTY(OldArray, size)->Get;
         }

         PROPERTY(OldArray, data) = Class_findProperty(CO(OldArray), "data", module);
         if(PROPERTY(OldArray, data))
            OldArray_set_data = (void *)PROPERTY(OldArray, data)->Set;
      }
      CO(PaneSplitter) = eC_findClass(module, "PaneSplitter");
      if(CO(PaneSplitter))
      {
         METHOD(PaneSplitter, notifyResized) = Class_findMethod(CO(PaneSplitter), "NotifyResized", module);
         if(METHOD(PaneSplitter, notifyResized))
            M_VTBLID(PaneSplitter, notifyResized) = METHOD(PaneSplitter, notifyResized)->vid;

         PROPERTY(PaneSplitter, toolSize) = Class_findProperty(CO(PaneSplitter), "toolSize", module);
         if(PROPERTY(PaneSplitter, toolSize))
         {
            PaneSplitter_set_toolSize = (void *)PROPERTY(PaneSplitter, toolSize)->Set;
            PaneSplitter_get_toolSize = (void *)PROPERTY(PaneSplitter, toolSize)->Get;
         }

         PROPERTY(PaneSplitter, toolGap) = Class_findProperty(CO(PaneSplitter), "toolGap", module);
         if(PROPERTY(PaneSplitter, toolGap))
         {
            PaneSplitter_set_toolGap = (void *)PROPERTY(PaneSplitter, toolGap)->Set;
            PaneSplitter_get_toolGap = (void *)PROPERTY(PaneSplitter, toolGap)->Get;
         }

         PROPERTY(PaneSplitter, leftPane) = Class_findProperty(CO(PaneSplitter), "leftPane", module);
         if(PROPERTY(PaneSplitter, leftPane))
         {
            PaneSplitter_set_leftPane = (void *)PROPERTY(PaneSplitter, leftPane)->Set;
            PaneSplitter_get_leftPane = (void *)PROPERTY(PaneSplitter, leftPane)->Get;
         }

         PROPERTY(PaneSplitter, rightPane) = Class_findProperty(CO(PaneSplitter), "rightPane", module);
         if(PROPERTY(PaneSplitter, rightPane))
         {
            PaneSplitter_set_rightPane = (void *)PROPERTY(PaneSplitter, rightPane)->Set;
            PaneSplitter_get_rightPane = (void *)PROPERTY(PaneSplitter, rightPane)->Get;
         }

         PROPERTY(PaneSplitter, topPane) = Class_findProperty(CO(PaneSplitter), "topPane", module);
         if(PROPERTY(PaneSplitter, topPane))
         {
            PaneSplitter_set_topPane = (void *)PROPERTY(PaneSplitter, topPane)->Set;
            PaneSplitter_get_topPane = (void *)PROPERTY(PaneSplitter, topPane)->Get;
         }

         PROPERTY(PaneSplitter, bottomPane) = Class_findProperty(CO(PaneSplitter), "bottomPane", module);
         if(PROPERTY(PaneSplitter, bottomPane))
         {
            PaneSplitter_set_bottomPane = (void *)PROPERTY(PaneSplitter, bottomPane)->Set;
            PaneSplitter_get_bottomPane = (void *)PROPERTY(PaneSplitter, bottomPane)->Get;
         }

         PROPERTY(PaneSplitter, scaleSplit) = Class_findProperty(CO(PaneSplitter), "scaleSplit", module);
         if(PROPERTY(PaneSplitter, scaleSplit))
         {
            PaneSplitter_set_scaleSplit = (void *)PROPERTY(PaneSplitter, scaleSplit)->Set;
            PaneSplitter_get_scaleSplit = (void *)PROPERTY(PaneSplitter, scaleSplit)->Get;
         }

         PROPERTY(PaneSplitter, orientation) = Class_findProperty(CO(PaneSplitter), "orientation", module);
         if(PROPERTY(PaneSplitter, orientation))
         {
            PaneSplitter_set_orientation = (void *)PROPERTY(PaneSplitter, orientation)->Set;
            PaneSplitter_get_orientation = (void *)PROPERTY(PaneSplitter, orientation)->Get;
         }

         PROPERTY(PaneSplitter, split) = Class_findProperty(CO(PaneSplitter), "split", module);
         if(PROPERTY(PaneSplitter, split))
         {
            PaneSplitter_set_split = (void *)PROPERTY(PaneSplitter, split)->Set;
            PaneSplitter_get_split = (void *)PROPERTY(PaneSplitter, split)->Get;
         }
      }
      CO(PathBox) = eC_findClass(module, "PathBox");
      if(CO(PathBox))
      {
         METHOD(PathBox, deselect) = Class_findMethod(CO(PathBox), "Deselect", module);
         if(METHOD(PathBox, deselect))
            PathBox_deselect = (void (*)(C(PathBox)))METHOD(PathBox, deselect)->function;

         METHOD(PathBox, end) = Class_findMethod(CO(PathBox), "End", module);
         if(METHOD(PathBox, end))
            PathBox_end = (void (*)(C(PathBox)))METHOD(PathBox, end)->function;

         METHOD(PathBox, home) = Class_findMethod(CO(PathBox), "Home", module);
         if(METHOD(PathBox, home))
            PathBox_home = (void (*)(C(PathBox)))METHOD(PathBox, home)->function;

         METHOD(PathBox, notifyModified) = Class_findMethod(CO(PathBox), "NotifyModified", module);
         if(METHOD(PathBox, notifyModified))
            M_VTBLID(PathBox, notifyModified) = METHOD(PathBox, notifyModified)->vid;

         METHOD(PathBox, selectAll) = Class_findMethod(CO(PathBox), "SelectAll", module);
         if(METHOD(PathBox, selectAll))
            PathBox_selectAll = (void (*)(C(PathBox)))METHOD(PathBox, selectAll)->function;

         PROPERTY(PathBox, editBox) = Class_findProperty(CO(PathBox), "editBox", module);
         if(PROPERTY(PathBox, editBox))
            PathBox_get_editBox = (void *)PROPERTY(PathBox, editBox)->Get;

         PROPERTY(PathBox, typeExpected) = Class_findProperty(CO(PathBox), "typeExpected", module);
         if(PROPERTY(PathBox, typeExpected))
            PathBox_set_typeExpected = (void *)PROPERTY(PathBox, typeExpected)->Set;

         PROPERTY(PathBox, browseDialog) = Class_findProperty(CO(PathBox), "browseDialog", module);
         if(PROPERTY(PathBox, browseDialog))
         {
            PathBox_set_browseDialog = (void *)PROPERTY(PathBox, browseDialog)->Set;
            PathBox_get_browseDialog = (void *)PROPERTY(PathBox, browseDialog)->Get;
         }

         PROPERTY(PathBox, path) = Class_findProperty(CO(PathBox), "path", module);
         if(PROPERTY(PathBox, path))
         {
            PathBox_set_path = (void *)PROPERTY(PathBox, path)->Set;
            PathBox_get_path = (void *)PROPERTY(PathBox, path)->Get;
         }

         PROPERTY(PathBox, slashPath) = Class_findProperty(CO(PathBox), "slashPath", module);
         if(PROPERTY(PathBox, slashPath))
            PathBox_get_slashPath = (void *)PROPERTY(PathBox, slashPath)->Get;

         PROPERTY(PathBox, systemPath) = Class_findProperty(CO(PathBox), "systemPath", module);
         if(PROPERTY(PathBox, systemPath))
            PathBox_get_systemPath = (void *)PROPERTY(PathBox, systemPath)->Get;

         PROPERTY(PathBox, selectionColor) = Class_findProperty(CO(PathBox), "selectionColor", module);
         if(PROPERTY(PathBox, selectionColor))
         {
            PathBox_set_selectionColor = (void *)PROPERTY(PathBox, selectionColor)->Set;
            PathBox_get_selectionColor = (void *)PROPERTY(PathBox, selectionColor)->Get;
         }

         PROPERTY(PathBox, selectionText) = Class_findProperty(CO(PathBox), "selectionText", module);
         if(PROPERTY(PathBox, selectionText))
         {
            PathBox_set_selectionText = (void *)PROPERTY(PathBox, selectionText)->Set;
            PathBox_get_selectionText = (void *)PROPERTY(PathBox, selectionText)->Get;
         }
      }
      CO(PathTypeExpected) = eC_findClass(module, "PathTypeExpected");
      CO(Picture) = eC_findClass(module, "Picture");
      if(CO(Picture))
      {
         PROPERTY(Picture, tint) = Class_findProperty(CO(Picture), "tint", module);
         if(PROPERTY(Picture, tint))
            Picture_set_tint = (void *)PROPERTY(Picture, tint)->Set;

         PROPERTY(Picture, image) = Class_findProperty(CO(Picture), "image", module);
         if(PROPERTY(Picture, image))
         {
            Picture_set_image = (void *)PROPERTY(Picture, image)->Set;
            Picture_get_image = (void *)PROPERTY(Picture, image)->Get;
         }

         PROPERTY(Picture, filter) = Class_findProperty(CO(Picture), "filter", module);
         if(PROPERTY(Picture, filter))
         {
            Picture_set_filter = (void *)PROPERTY(Picture, filter)->Set;
            Picture_get_filter = (void *)PROPERTY(Picture, filter)->Get;
         }

         PROPERTY(Picture, bitmapImage) = Class_findProperty(CO(Picture), "bitmapImage", module);
         if(PROPERTY(Picture, bitmapImage))
            Picture_set_bitmapImage = (void *)PROPERTY(Picture, bitmapImage)->Set;
      }
      CO(PopupMenu) = eC_findClass(module, "PopupMenu");
      if(CO(PopupMenu))
      {
         PROPERTY(PopupMenu, menu) = Class_findProperty(CO(PopupMenu), "menu", module);
         if(PROPERTY(PopupMenu, menu))
         {
            PopupMenu_set_menu = (void *)PROPERTY(PopupMenu, menu)->Set;
            PopupMenu_get_menu = (void *)PROPERTY(PopupMenu, menu)->Get;
         }

         PROPERTY(PopupMenu, isMenuBar) = Class_findProperty(CO(PopupMenu), "isMenuBar", module);
         if(PROPERTY(PopupMenu, isMenuBar))
            PopupMenu_set_isMenuBar = (void *)PROPERTY(PopupMenu, isMenuBar)->Set;

         PROPERTY(PopupMenu, focus) = Class_findProperty(CO(PopupMenu), "focus", module);
         if(PROPERTY(PopupMenu, focus))
            PopupMenu_get_focus = (void *)PROPERTY(PopupMenu, focus)->Get;
      }
      CO(ProgressBar) = eC_findClass(module, "ProgressBar");
      if(CO(ProgressBar))
      {
         PROPERTY(ProgressBar, progress) = Class_findProperty(CO(ProgressBar), "progress", module);
         if(PROPERTY(ProgressBar, progress))
         {
            ProgressBar_set_progress = (void *)PROPERTY(ProgressBar, progress)->Set;
            ProgressBar_get_progress = (void *)PROPERTY(ProgressBar, progress)->Get;
         }

         PROPERTY(ProgressBar, range) = Class_findProperty(CO(ProgressBar), "range", module);
         if(PROPERTY(ProgressBar, range))
         {
            ProgressBar_set_range = (void *)PROPERTY(ProgressBar, range)->Set;
            ProgressBar_get_range = (void *)PROPERTY(ProgressBar, range)->Get;
         }
      }
      CO(SavingDataBox) = eC_findClass(module, "SavingDataBox");
      CO(ScrollBar) = eC_findClass(module, "ScrollBar");
      if(CO(ScrollBar))
      {
         METHOD(ScrollBar, action) = Class_findMethod(CO(ScrollBar), "Action", module);
         if(METHOD(ScrollBar, action))
            ScrollBar_action = (C(bool) (*)(C(ScrollBar), C(ScrollBarAction), int, C(Key)))METHOD(ScrollBar, action)->function;

         METHOD(ScrollBar, notifyScrolling) = Class_findMethod(CO(ScrollBar), "NotifyScrolling", module);
         if(METHOD(ScrollBar, notifyScrolling))
            M_VTBLID(ScrollBar, notifyScrolling) = METHOD(ScrollBar, notifyScrolling)->vid;

         PROPERTY(ScrollBar, direction) = Class_findProperty(CO(ScrollBar), "direction", module);
         if(PROPERTY(ScrollBar, direction))
         {
            ScrollBar_set_direction = (void *)PROPERTY(ScrollBar, direction)->Set;
            ScrollBar_get_direction = (void *)PROPERTY(ScrollBar, direction)->Get;
         }

         PROPERTY(ScrollBar, windowOwned) = Class_findProperty(CO(ScrollBar), "windowOwned", module);
         if(PROPERTY(ScrollBar, windowOwned))
            ScrollBar_set_windowOwned = (void *)PROPERTY(ScrollBar, windowOwned)->Set;

         PROPERTY(ScrollBar, snap) = Class_findProperty(CO(ScrollBar), "snap", module);
         if(PROPERTY(ScrollBar, snap))
         {
            ScrollBar_set_snap = (void *)PROPERTY(ScrollBar, snap)->Set;
            ScrollBar_get_snap = (void *)PROPERTY(ScrollBar, snap)->Get;
         }

         PROPERTY(ScrollBar, range) = Class_findProperty(CO(ScrollBar), "range", module);
         if(PROPERTY(ScrollBar, range))
         {
            ScrollBar_set_range = (void *)PROPERTY(ScrollBar, range)->Set;
            ScrollBar_get_range = (void *)PROPERTY(ScrollBar, range)->Get;
         }

         PROPERTY(ScrollBar, seen) = Class_findProperty(CO(ScrollBar), "seen", module);
         if(PROPERTY(ScrollBar, seen))
         {
            ScrollBar_set_seen = (void *)PROPERTY(ScrollBar, seen)->Set;
            ScrollBar_get_seen = (void *)PROPERTY(ScrollBar, seen)->Get;
         }

         PROPERTY(ScrollBar, total) = Class_findProperty(CO(ScrollBar), "total", module);
         if(PROPERTY(ScrollBar, total))
         {
            ScrollBar_set_total = (void *)PROPERTY(ScrollBar, total)->Set;
            ScrollBar_get_total = (void *)PROPERTY(ScrollBar, total)->Get;
         }

         PROPERTY(ScrollBar, lineStep) = Class_findProperty(CO(ScrollBar), "lineStep", module);
         if(PROPERTY(ScrollBar, lineStep))
         {
            ScrollBar_set_lineStep = (void *)PROPERTY(ScrollBar, lineStep)->Set;
            ScrollBar_get_lineStep = (void *)PROPERTY(ScrollBar, lineStep)->Get;
         }

         PROPERTY(ScrollBar, pageStep) = Class_findProperty(CO(ScrollBar), "pageStep", module);
         if(PROPERTY(ScrollBar, pageStep))
         {
            ScrollBar_set_pageStep = (void *)PROPERTY(ScrollBar, pageStep)->Set;
            ScrollBar_get_pageStep = (void *)PROPERTY(ScrollBar, pageStep)->Get;
         }

         PROPERTY(ScrollBar, thumbPosition) = Class_findProperty(CO(ScrollBar), "thumbPosition", module);
         if(PROPERTY(ScrollBar, thumbPosition))
         {
            ScrollBar_set_thumbPosition = (void *)PROPERTY(ScrollBar, thumbPosition)->Set;
            ScrollBar_get_thumbPosition = (void *)PROPERTY(ScrollBar, thumbPosition)->Get;
         }
      }
      CO(ScrollBarAction) = eC_findClass(module, "ScrollBarAction");
      CO(ScrollDirection) = eC_findClass(module, "ScrollDirection");
      CO(SelectorBar) = eC_findClass(module, "SelectorBar");
      if(CO(SelectorBar))
      {
         METHOD(SelectorBar, addButton) = Class_findMethod(CO(SelectorBar), "AddButton", module);
         if(METHOD(SelectorBar, addButton))
            SelectorBar_addButton = (void (*)(C(SelectorBar), C(SelectorButton)))METHOD(SelectorBar, addButton)->function;

         METHOD(SelectorBar, clear) = Class_findMethod(CO(SelectorBar), "Clear", module);
         if(METHOD(SelectorBar, clear))
            SelectorBar_clear = (void (*)(C(SelectorBar)))METHOD(SelectorBar, clear)->function;

         METHOD(SelectorBar, findButtonByID) = Class_findMethod(CO(SelectorBar), "FindButtonByID", module);
         if(METHOD(SelectorBar, findButtonByID))
            SelectorBar_findButtonByID = (C(SelectorButton) (*)(C(SelectorBar), int64))METHOD(SelectorBar, findButtonByID)->function;

         METHOD(SelectorBar, removeButton) = Class_findMethod(CO(SelectorBar), "RemoveButton", module);
         if(METHOD(SelectorBar, removeButton))
            SelectorBar_removeButton = (void (*)(C(SelectorBar), C(SelectorButton)))METHOD(SelectorBar, removeButton)->function;

         METHOD(SelectorBar, select) = Class_findMethod(CO(SelectorBar), "Select", module);
         if(METHOD(SelectorBar, select))
            SelectorBar_select = (void (*)(C(SelectorBar), C(SelectorButton)))METHOD(SelectorBar, select)->function;

         PROPERTY(SelectorBar, selectedButton) = Class_findProperty(CO(SelectorBar), "selectedButton", module);
         if(PROPERTY(SelectorBar, selectedButton))
            SelectorBar_get_selectedButton = (void *)PROPERTY(SelectorBar, selectedButton)->Get;
      }
      CO(SelectorButton) = eC_findClass(module, "SelectorButton");
      CO(Stacker) = eC_findClass(module, "Stacker");
      if(CO(Stacker))
      {
         METHOD(Stacker, destroyChildren) = Class_findMethod(CO(Stacker), "DestroyChildren", module);
         if(METHOD(Stacker, destroyChildren))
            Stacker_destroyChildren = (void (*)(C(Stacker)))METHOD(Stacker, destroyChildren)->function;

         METHOD(Stacker, getNextStackedItem) = Class_findMethod(CO(Stacker), "GetNextStackedItem", module);
         if(METHOD(Stacker, getNextStackedItem))
            Stacker_getNextStackedItem = (C(Window) (*)(C(Stacker), C(Window), C(bool), C(Class) *))METHOD(Stacker, getNextStackedItem)->function;

         METHOD(Stacker, makeControlVisible) = Class_findMethod(CO(Stacker), "MakeControlVisible", module);
         if(METHOD(Stacker, makeControlVisible))
            Stacker_makeControlVisible = (void (*)(C(Stacker), C(Window)))METHOD(Stacker, makeControlVisible)->function;

         PROPERTY(Stacker, direction) = Class_findProperty(CO(Stacker), "direction", module);
         if(PROPERTY(Stacker, direction))
         {
            Stacker_set_direction = (void *)PROPERTY(Stacker, direction)->Set;
            Stacker_get_direction = (void *)PROPERTY(Stacker, direction)->Get;
         }

         PROPERTY(Stacker, gap) = Class_findProperty(CO(Stacker), "gap", module);
         if(PROPERTY(Stacker, gap))
         {
            Stacker_set_gap = (void *)PROPERTY(Stacker, gap)->Set;
            Stacker_get_gap = (void *)PROPERTY(Stacker, gap)->Get;
         }

         PROPERTY(Stacker, reverse) = Class_findProperty(CO(Stacker), "reverse", module);
         if(PROPERTY(Stacker, reverse))
         {
            Stacker_set_reverse = (void *)PROPERTY(Stacker, reverse)->Set;
            Stacker_get_reverse = (void *)PROPERTY(Stacker, reverse)->Get;
         }

         PROPERTY(Stacker, scrollable) = Class_findProperty(CO(Stacker), "scrollable", module);
         if(PROPERTY(Stacker, scrollable))
         {
            Stacker_set_scrollable = (void *)PROPERTY(Stacker, scrollable)->Set;
            Stacker_get_scrollable = (void *)PROPERTY(Stacker, scrollable)->Get;
         }

         PROPERTY(Stacker, controls) = Class_findProperty(CO(Stacker), "controls", module);
         if(PROPERTY(Stacker, controls))
            Stacker_get_controls = (void *)PROPERTY(Stacker, controls)->Get;

         PROPERTY(Stacker, flipper) = Class_findProperty(CO(Stacker), "flipper", module);
         if(PROPERTY(Stacker, flipper))
         {
            Stacker_set_flipper = (void *)PROPERTY(Stacker, flipper)->Set;
            Stacker_get_flipper = (void *)PROPERTY(Stacker, flipper)->Get;
         }

         PROPERTY(Stacker, flipSpring) = Class_findProperty(CO(Stacker), "flipSpring", module);
         if(PROPERTY(Stacker, flipSpring))
         {
            Stacker_set_flipSpring = (void *)PROPERTY(Stacker, flipSpring)->Set;
            Stacker_get_flipSpring = (void *)PROPERTY(Stacker, flipSpring)->Get;
         }

         PROPERTY(Stacker, autoSize) = Class_findProperty(CO(Stacker), "autoSize", module);
         if(PROPERTY(Stacker, autoSize))
         {
            Stacker_set_autoSize = (void *)PROPERTY(Stacker, autoSize)->Set;
            Stacker_get_autoSize = (void *)PROPERTY(Stacker, autoSize)->Get;
         }

         PROPERTY(Stacker, margin) = Class_findProperty(CO(Stacker), "margin", module);
         if(PROPERTY(Stacker, margin))
         {
            Stacker_set_margin = (void *)PROPERTY(Stacker, margin)->Set;
            Stacker_get_margin = (void *)PROPERTY(Stacker, margin)->Get;
         }

         PROPERTY(Stacker, endButtons) = Class_findProperty(CO(Stacker), "endButtons", module);
         if(PROPERTY(Stacker, endButtons))
         {
            Stacker_set_endButtons = (void *)PROPERTY(Stacker, endButtons)->Set;
            Stacker_get_endButtons = (void *)PROPERTY(Stacker, endButtons)->Get;
         }

         PROPERTY(Stacker, hoverScroll) = Class_findProperty(CO(Stacker), "hoverScroll", module);
         if(PROPERTY(Stacker, hoverScroll))
         {
            Stacker_set_hoverScroll = (void *)PROPERTY(Stacker, hoverScroll)->Set;
            Stacker_get_hoverScroll = (void *)PROPERTY(Stacker, hoverScroll)->Get;
         }
      }
      CO(StatusBar) = eC_findClass(module, "StatusBar");
      if(CO(StatusBar))
      {
         METHOD(StatusBar, addField) = Class_findMethod(CO(StatusBar), "AddField", module);
         if(METHOD(StatusBar, addField))
            StatusBar_addField = (void (*)(C(StatusBar), C(StatusField)))METHOD(StatusBar, addField)->function;

         METHOD(StatusBar, clear) = Class_findMethod(CO(StatusBar), "Clear", module);
         if(METHOD(StatusBar, clear))
            StatusBar_clear = (void (*)(C(StatusBar)))METHOD(StatusBar, clear)->function;

         METHOD(StatusBar, removeField) = Class_findMethod(CO(StatusBar), "RemoveField", module);
         if(METHOD(StatusBar, removeField))
            StatusBar_removeField = (void (*)(C(StatusBar), C(StatusField)))METHOD(StatusBar, removeField)->function;

         PROPERTY(StatusBar, minInfoWidth) = Class_findProperty(CO(StatusBar), "minInfoWidth", module);
         if(PROPERTY(StatusBar, minInfoWidth))
         {
            StatusBar_set_minInfoWidth = (void *)PROPERTY(StatusBar, minInfoWidth)->Set;
            StatusBar_get_minInfoWidth = (void *)PROPERTY(StatusBar, minInfoWidth)->Get;
         }
      }
      CO(StatusField) = eC_findClass(module, "StatusField");
      if(CO(StatusField))
      {
         METHOD(StatusField, setTextf) = Class_findMethod(CO(StatusField), "SetTextf", module);
         if(METHOD(StatusField, setTextf))
            StatusField_setTextf = (void (*)(C(StatusField), const char *, ...))METHOD(StatusField, setTextf)->function;

         PROPERTY(StatusField, statusBar) = Class_findProperty(CO(StatusField), "statusBar", module);
         if(PROPERTY(StatusField, statusBar))
            StatusField_set_statusBar = (void *)PROPERTY(StatusField, statusBar)->Set;

         PROPERTY(StatusField, color) = Class_findProperty(CO(StatusField), "color", module);
         if(PROPERTY(StatusField, color))
            StatusField_set_color = (void *)PROPERTY(StatusField, color)->Set;

         PROPERTY(StatusField, backColor) = Class_findProperty(CO(StatusField), "backColor", module);
         if(PROPERTY(StatusField, backColor))
            StatusField_set_backColor = (void *)PROPERTY(StatusField, backColor)->Set;

         PROPERTY(StatusField, bold) = Class_findProperty(CO(StatusField), "bold", module);
         if(PROPERTY(StatusField, bold))
            StatusField_set_bold = (void *)PROPERTY(StatusField, bold)->Set;

         PROPERTY(StatusField, text) = Class_findProperty(CO(StatusField), "text", module);
         if(PROPERTY(StatusField, text))
            StatusField_set_text = (void *)PROPERTY(StatusField, text)->Set;

         PROPERTY(StatusField, width) = Class_findProperty(CO(StatusField), "width", module);
         if(PROPERTY(StatusField, width))
            StatusField_set_width = (void *)PROPERTY(StatusField, width)->Set;
      }
      CO(SyntaxColorScheme) = eC_findClass(module, "SyntaxColorScheme");
      if(CO(SyntaxColorScheme))
      {
         PROPERTY(SyntaxColorScheme, keywordColors) = Class_findProperty(CO(SyntaxColorScheme), "keywordColors", module);
         if(PROPERTY(SyntaxColorScheme, keywordColors))
         {
            SyntaxColorScheme_set_keywordColors = (void *)PROPERTY(SyntaxColorScheme, keywordColors)->Set;
            SyntaxColorScheme_get_keywordColors = (void *)PROPERTY(SyntaxColorScheme, keywordColors)->Get;
         }
      }
      CO(Tab) = eC_findClass(module, "Tab");
      if(CO(Tab))
      {
         METHOD(Tab, selectTab) = Class_findMethod(CO(Tab), "SelectTab", module);
         if(METHOD(Tab, selectTab))
            Tab_selectTab = (void (*)(C(Tab)))METHOD(Tab, selectTab)->function;

         PROPERTY(Tab, tabControl) = Class_findProperty(CO(Tab), "tabControl", module);
         if(PROPERTY(Tab, tabControl))
         {
            Tab_set_tabControl = (void *)PROPERTY(Tab, tabControl)->Set;
            Tab_get_tabControl = (void *)PROPERTY(Tab, tabControl)->Get;
         }

         PROPERTY(Tab, isAdded) = Class_findProperty(CO(Tab), "isAdded", module);
         if(PROPERTY(Tab, isAdded))
            Tab_get_isAdded = (void *)PROPERTY(Tab, isAdded)->Get;
      }
      CO(TabControl) = eC_findClass(module, "TabControl");
      if(CO(TabControl))
      {
         METHOD(TabControl, addTab) = Class_findMethod(CO(TabControl), "AddTab", module);
         if(METHOD(TabControl, addTab))
            TabControl_addTab = (void (*)(C(TabControl), C(Tab)))METHOD(TabControl, addTab)->function;

         METHOD(TabControl, removeTab) = Class_findMethod(CO(TabControl), "RemoveTab", module);
         if(METHOD(TabControl, removeTab))
            TabControl_removeTab = (void (*)(C(TabControl), C(Tab)))METHOD(TabControl, removeTab)->function;

         PROPERTY(TabControl, placement) = Class_findProperty(CO(TabControl), "placement", module);
         if(PROPERTY(TabControl, placement))
         {
            TabControl_set_placement = (void *)PROPERTY(TabControl, placement)->Set;
            TabControl_get_placement = (void *)PROPERTY(TabControl, placement)->Get;
         }

         PROPERTY(TabControl, buttonsOffset) = Class_findProperty(CO(TabControl), "buttonsOffset", module);
         if(PROPERTY(TabControl, buttonsOffset))
         {
            TabControl_set_buttonsOffset = (void *)PROPERTY(TabControl, buttonsOffset)->Set;
            TabControl_get_buttonsOffset = (void *)PROPERTY(TabControl, buttonsOffset)->Get;
         }

         PROPERTY(TabControl, curTab) = Class_findProperty(CO(TabControl), "curTab", module);
         if(PROPERTY(TabControl, curTab))
         {
            TabControl_set_curTab = (void *)PROPERTY(TabControl, curTab)->Set;
            TabControl_get_curTab = (void *)PROPERTY(TabControl, curTab)->Get;
         }
      }
      CO(TabsPlacement) = eC_findClass(module, "TabsPlacement");
      CO(ToolBar) = eC_findClass(module, "ToolBar");
      CO(ToolButton) = eC_findClass(module, "ToolButton");
      if(CO(ToolButton))
      {
         PROPERTY(ToolButton, menuItemPtr) = Class_findProperty(CO(ToolButton), "menuItemPtr", module);
         if(PROPERTY(ToolButton, menuItemPtr))
            ToolButton_set_menuItemPtr = (void *)PROPERTY(ToolButton, menuItemPtr)->Set;

         PROPERTY(ToolButton, menuItem) = Class_findProperty(CO(ToolButton), "menuItem", module);
         if(PROPERTY(ToolButton, menuItem))
            ToolButton_get_menuItem = (void *)PROPERTY(ToolButton, menuItem)->Get;
      }
      CO(ToolSeparator) = eC_findClass(module, "ToolSeparator");
      CO(ToolTip) = eC_findClass(module, "ToolTip");
      if(CO(ToolTip))
      {
         PROPERTY(ToolTip, tip) = Class_findProperty(CO(ToolTip), "tip", module);
         if(PROPERTY(ToolTip, tip))
         {
            ToolTip_set_tip = (void *)PROPERTY(ToolTip, tip)->Set;
            ToolTip_get_tip = (void *)PROPERTY(ToolTip, tip)->Get;
         }
      }
      CO(UndoAction) = eC_findClass(module, "UndoAction");
      if(CO(UndoAction))
      {
         METHOD(UndoAction, redo) = Class_findMethod(CO(UndoAction), "Redo", module);
         if(METHOD(UndoAction, redo))
            M_VTBLID(UndoAction, redo) = METHOD(UndoAction, redo)->vid;

         METHOD(UndoAction, undo) = Class_findMethod(CO(UndoAction), "Undo", module);
         if(METHOD(UndoAction, undo))
            M_VTBLID(UndoAction, undo) = METHOD(UndoAction, undo)->vid;
      }
      CO(UndoBuffer) = eC_findClass(module, "UndoBuffer");
      if(CO(UndoBuffer))
      {
         METHOD(UndoBuffer, clear) = Class_findMethod(CO(UndoBuffer), "Clear", module);
         if(METHOD(UndoBuffer, clear))
            UndoBuffer_clear = (void (*)(C(UndoBuffer)))METHOD(UndoBuffer, clear)->function;

         METHOD(UndoBuffer, record) = Class_findMethod(CO(UndoBuffer), "Record", module);
         if(METHOD(UndoBuffer, record))
            UndoBuffer_record = (void (*)(C(UndoBuffer), C(UndoAction) *))METHOD(UndoBuffer, record)->function;

         METHOD(UndoBuffer, redo) = Class_findMethod(CO(UndoBuffer), "Redo", module);
         if(METHOD(UndoBuffer, redo))
            UndoBuffer_redo = (void (*)(C(UndoBuffer)))METHOD(UndoBuffer, redo)->function;

         METHOD(UndoBuffer, undo) = Class_findMethod(CO(UndoBuffer), "Undo", module);
         if(METHOD(UndoBuffer, undo))
            UndoBuffer_undo = (void (*)(C(UndoBuffer)))METHOD(UndoBuffer, undo)->function;
      }
      CO(ColorPicker) = eC_findClass(module, "ColorPicker");
      if(CO(ColorPicker))
      {
         PROPERTY(ColorPicker, color) = Class_findProperty(CO(ColorPicker), "color", module);
         if(PROPERTY(ColorPicker, color))
         {
            ColorPicker_set_color = (void *)PROPERTY(ColorPicker, color)->Set;
            ColorPicker_get_color = (void *)PROPERTY(ColorPicker, color)->Get;
         }

         PROPERTY(ColorPicker, hasAlpha) = Class_findProperty(CO(ColorPicker), "hasAlpha", module);
         if(PROPERTY(ColorPicker, hasAlpha))
         {
            ColorPicker_set_hasAlpha = (void *)PROPERTY(ColorPicker, hasAlpha)->Set;
            ColorPicker_get_hasAlpha = (void *)PROPERTY(ColorPicker, hasAlpha)->Get;
         }
      }
      CO(CreateDirectoryDialog) = eC_findClass(module, "CreateDirectoryDialog");
      if(CO(CreateDirectoryDialog))
      {
         PROPERTY(CreateDirectoryDialog, currentDirectory) = Class_findProperty(CO(CreateDirectoryDialog), "currentDirectory", module);
         if(PROPERTY(CreateDirectoryDialog, currentDirectory))
         {
            CreateDirectoryDialog_set_currentDirectory = (void *)PROPERTY(CreateDirectoryDialog, currentDirectory)->Set;
            CreateDirectoryDialog_get_currentDirectory = (void *)PROPERTY(CreateDirectoryDialog, currentDirectory)->Get;
         }
      }
      CO(FileDialog) = eC_findClass(module, "FileDialog");
      if(CO(FileDialog))
      {
         PROPERTY(FileDialog, type) = Class_findProperty(CO(FileDialog), "type", module);
         if(PROPERTY(FileDialog, type))
         {
            FileDialog_set_type = (void *)PROPERTY(FileDialog, type)->Set;
            FileDialog_get_type = (void *)PROPERTY(FileDialog, type)->Get;
         }

         PROPERTY(FileDialog, filePath) = Class_findProperty(CO(FileDialog), "filePath", module);
         if(PROPERTY(FileDialog, filePath))
         {
            FileDialog_set_filePath = (void *)PROPERTY(FileDialog, filePath)->Set;
            FileDialog_get_filePath = (void *)PROPERTY(FileDialog, filePath)->Get;
         }

         PROPERTY(FileDialog, currentDirectory) = Class_findProperty(CO(FileDialog), "currentDirectory", module);
         if(PROPERTY(FileDialog, currentDirectory))
         {
            FileDialog_set_currentDirectory = (void *)PROPERTY(FileDialog, currentDirectory)->Set;
            FileDialog_get_currentDirectory = (void *)PROPERTY(FileDialog, currentDirectory)->Get;
         }

         PROPERTY(FileDialog, filters) = Class_findProperty(CO(FileDialog), "filters", module);
         if(PROPERTY(FileDialog, filters))
         {
            FileDialog_set_filters = (void *)PROPERTY(FileDialog, filters)->Set;
            FileDialog_get_filters = (void *)PROPERTY(FileDialog, filters)->Get;
         }

         PROPERTY(FileDialog, types) = Class_findProperty(CO(FileDialog), "types", module);
         if(PROPERTY(FileDialog, types))
         {
            FileDialog_set_types = (void *)PROPERTY(FileDialog, types)->Set;
            FileDialog_get_types = (void *)PROPERTY(FileDialog, types)->Get;
         }

         PROPERTY(FileDialog, sizeFilters) = Class_findProperty(CO(FileDialog), "sizeFilters", module);
         if(PROPERTY(FileDialog, sizeFilters))
         {
            FileDialog_set_sizeFilters = (void *)PROPERTY(FileDialog, sizeFilters)->Set;
            FileDialog_get_sizeFilters = (void *)PROPERTY(FileDialog, sizeFilters)->Get;
         }

         PROPERTY(FileDialog, sizeTypes) = Class_findProperty(CO(FileDialog), "sizeTypes", module);
         if(PROPERTY(FileDialog, sizeTypes))
         {
            FileDialog_set_sizeTypes = (void *)PROPERTY(FileDialog, sizeTypes)->Set;
            FileDialog_get_sizeTypes = (void *)PROPERTY(FileDialog, sizeTypes)->Get;
         }

         PROPERTY(FileDialog, filter) = Class_findProperty(CO(FileDialog), "filter", module);
         if(PROPERTY(FileDialog, filter))
         {
            FileDialog_set_filter = (void *)PROPERTY(FileDialog, filter)->Set;
            FileDialog_get_filter = (void *)PROPERTY(FileDialog, filter)->Get;
         }

         PROPERTY(FileDialog, fileType) = Class_findProperty(CO(FileDialog), "fileType", module);
         if(PROPERTY(FileDialog, fileType))
         {
            FileDialog_set_fileType = (void *)PROPERTY(FileDialog, fileType)->Set;
            FileDialog_get_fileType = (void *)PROPERTY(FileDialog, fileType)->Get;
         }

         PROPERTY(FileDialog, mayNotExist) = Class_findProperty(CO(FileDialog), "mayNotExist", module);
         if(PROPERTY(FileDialog, mayNotExist))
         {
            FileDialog_set_mayNotExist = (void *)PROPERTY(FileDialog, mayNotExist)->Set;
            FileDialog_get_mayNotExist = (void *)PROPERTY(FileDialog, mayNotExist)->Get;
         }

         PROPERTY(FileDialog, numSelections) = Class_findProperty(CO(FileDialog), "numSelections", module);
         if(PROPERTY(FileDialog, numSelections))
            FileDialog_get_numSelections = (void *)PROPERTY(FileDialog, numSelections)->Get;

         PROPERTY(FileDialog, multiFilePaths) = Class_findProperty(CO(FileDialog), "multiFilePaths", module);
         if(PROPERTY(FileDialog, multiFilePaths))
            FileDialog_get_multiFilePaths = (void *)PROPERTY(FileDialog, multiFilePaths)->Get;
      }
      CO(FileDialogType) = eC_findClass(module, "FileDialogType");
      CO(FileFilter) = eC_findClass(module, "FileFilter");
      if(CO(FileFilter))
      {
         METHOD(FileFilter, validateFileName) = Class_findMethod(CO(FileFilter), "ValidateFileName", module);
         if(METHOD(FileFilter, validateFileName))
            FileFilter_validateFileName = (C(bool) (*)(C(FileFilter) *, const char *))METHOD(FileFilter, validateFileName)->function;
      }
      CO(FileForceExtension) = eC_findClass(module, "FileForceExtension");
      CO(FileName) = eC_findClass(module, "FileName");
      CO(FileNameType) = eC_findClass(module, "FileNameType");
      if(CO(FileNameType))
      {
         METHOD(FileNameType, selectByExtension) = Class_findMethod(CO(FileNameType), "SelectByExtension", module);
         if(METHOD(FileNameType, selectByExtension))
            FileNameType_selectByExtension = (C(FileNameType) (*)(const char *))METHOD(FileNameType, selectByExtension)->function;

         PROPERTY(FileNameType, isFolderType) = Class_findProperty(CO(FileNameType), "isFolderType", module);
         if(PROPERTY(FileNameType, isFolderType))
            FileNameType_get_isFolderType = (void *)PROPERTY(FileNameType, isFolderType)->Get;

         PROPERTY(FileNameType, isFileType) = Class_findProperty(CO(FileNameType), "isFileType", module);
         if(PROPERTY(FileNameType, isFileType))
            FileNameType_get_isFileType = (void *)PROPERTY(FileNameType, isFileType)->Get;
      }
      CO(FileType) = eC_findClass(module, "FileType");
      CO(FindDialog) = eC_findClass(module, "FindDialog");
      if(CO(FindDialog))
      {
         PROPERTY(FindDialog, editBox) = Class_findProperty(CO(FindDialog), "editBox", module);
         if(PROPERTY(FindDialog, editBox))
            FindDialog_set_editBox = (void *)PROPERTY(FindDialog, editBox)->Set;

         PROPERTY(FindDialog, searchString) = Class_findProperty(CO(FindDialog), "searchString", module);
         if(PROPERTY(FindDialog, searchString))
         {
            FindDialog_set_searchString = (void *)PROPERTY(FindDialog, searchString)->Set;
            FindDialog_get_searchString = (void *)PROPERTY(FindDialog, searchString)->Get;
         }

         PROPERTY(FindDialog, wholeWord) = Class_findProperty(CO(FindDialog), "wholeWord", module);
         if(PROPERTY(FindDialog, wholeWord))
         {
            FindDialog_set_wholeWord = (void *)PROPERTY(FindDialog, wholeWord)->Set;
            FindDialog_get_wholeWord = (void *)PROPERTY(FindDialog, wholeWord)->Get;
         }

         PROPERTY(FindDialog, matchCase) = Class_findProperty(CO(FindDialog), "matchCase", module);
         if(PROPERTY(FindDialog, matchCase))
         {
            FindDialog_set_matchCase = (void *)PROPERTY(FindDialog, matchCase)->Set;
            FindDialog_get_matchCase = (void *)PROPERTY(FindDialog, matchCase)->Get;
         }

         PROPERTY(FindDialog, searchUp) = Class_findProperty(CO(FindDialog), "searchUp", module);
         if(PROPERTY(FindDialog, searchUp))
         {
            FindDialog_set_searchUp = (void *)PROPERTY(FindDialog, searchUp)->Set;
            FindDialog_get_searchUp = (void *)PROPERTY(FindDialog, searchUp)->Get;
         }
      }
      CO(GoToDialog) = eC_findClass(module, "GoToDialog");
      if(CO(GoToDialog))
      {
         PROPERTY(GoToDialog, line) = Class_findProperty(CO(GoToDialog), "line", module);
         if(PROPERTY(GoToDialog, line))
         {
            GoToDialog_set_line = (void *)PROPERTY(GoToDialog, line)->Set;
            GoToDialog_get_line = (void *)PROPERTY(GoToDialog, line)->Get;
         }

         PROPERTY(GoToDialog, editBox) = Class_findProperty(CO(GoToDialog), "editBox", module);
         if(PROPERTY(GoToDialog, editBox))
         {
            GoToDialog_set_editBox = (void *)PROPERTY(GoToDialog, editBox)->Set;
            GoToDialog_get_editBox = (void *)PROPERTY(GoToDialog, editBox)->Get;
         }
      }
      CO(MessageBox) = eC_findClass(module, "MessageBox");
      if(CO(MessageBox))
      {
         PROPERTY(MessageBox, type) = Class_findProperty(CO(MessageBox), "type", module);
         if(PROPERTY(MessageBox, type))
            MessageBox_set_type = (void *)PROPERTY(MessageBox, type)->Set;

         PROPERTY(MessageBox, contents) = Class_findProperty(CO(MessageBox), "contents", module);
         if(PROPERTY(MessageBox, contents))
            MessageBox_set_contents = (void *)PROPERTY(MessageBox, contents)->Set;
      }
      CO(MessageBoxType) = eC_findClass(module, "MessageBoxType");
      CO(ReplaceDialog) = eC_findClass(module, "ReplaceDialog");
      if(CO(ReplaceDialog))
      {
         PROPERTY(ReplaceDialog, editBox) = Class_findProperty(CO(ReplaceDialog), "editBox", module);
         if(PROPERTY(ReplaceDialog, editBox))
            ReplaceDialog_set_editBox = (void *)PROPERTY(ReplaceDialog, editBox)->Set;

         PROPERTY(ReplaceDialog, searchString) = Class_findProperty(CO(ReplaceDialog), "searchString", module);
         if(PROPERTY(ReplaceDialog, searchString))
         {
            ReplaceDialog_set_searchString = (void *)PROPERTY(ReplaceDialog, searchString)->Set;
            ReplaceDialog_get_searchString = (void *)PROPERTY(ReplaceDialog, searchString)->Get;
         }

         PROPERTY(ReplaceDialog, replaceString) = Class_findProperty(CO(ReplaceDialog), "replaceString", module);
         if(PROPERTY(ReplaceDialog, replaceString))
         {
            ReplaceDialog_set_replaceString = (void *)PROPERTY(ReplaceDialog, replaceString)->Set;
            ReplaceDialog_get_replaceString = (void *)PROPERTY(ReplaceDialog, replaceString)->Get;
         }

         PROPERTY(ReplaceDialog, wholeWord) = Class_findProperty(CO(ReplaceDialog), "wholeWord", module);
         if(PROPERTY(ReplaceDialog, wholeWord))
         {
            ReplaceDialog_set_wholeWord = (void *)PROPERTY(ReplaceDialog, wholeWord)->Set;
            ReplaceDialog_get_wholeWord = (void *)PROPERTY(ReplaceDialog, wholeWord)->Get;
         }

         PROPERTY(ReplaceDialog, matchCase) = Class_findProperty(CO(ReplaceDialog), "matchCase", module);
         if(PROPERTY(ReplaceDialog, matchCase))
         {
            ReplaceDialog_set_matchCase = (void *)PROPERTY(ReplaceDialog, matchCase)->Set;
            ReplaceDialog_get_matchCase = (void *)PROPERTY(ReplaceDialog, matchCase)->Get;
         }
      }
      CO(WindowList) = eC_findClass(module, "WindowList");
      CO(TVisionSkin_Window) = eC_findClass(module, "TVisionSkin_Window");
      CO(WindowsSkin_Button) = eC_findClass(module, "WindowsSkin_Button");
      CO(WindowsSkin_Window) = eC_findClass(module, "WindowsSkin_Window");
      CO(DCOMClientObject) = eC_findClass(module, "DCOMClientObject");
      if(CO(DCOMClientObject))
      {
         METHOD(DCOMClientObject, callMethod) = Class_findMethod(CO(DCOMClientObject), "CallMethod", module);
         if(METHOD(DCOMClientObject, callMethod))
            DCOMClientObject_callMethod = (C(bool) (*)(C(DCOMClientObject), uint))METHOD(DCOMClientObject, callMethod)->function;

         METHOD(DCOMClientObject, callVirtualMethod) = Class_findMethod(CO(DCOMClientObject), "CallVirtualMethod", module);
         if(METHOD(DCOMClientObject, callVirtualMethod))
            M_VTBLID(DCOMClientObject, callVirtualMethod) = METHOD(DCOMClientObject, callVirtualMethod)->vid;

         METHOD(DCOMClientObject, connect) = Class_findMethod(CO(DCOMClientObject), "Connect", module);
         if(METHOD(DCOMClientObject, connect))
            DCOMClientObject_connect = (C(bool) (*)(C(DCOMClientObject), const char *, int))METHOD(DCOMClientObject, connect)->function;
      }
      CO(DCOMSendControl) = eC_findClass(module, "DCOMSendControl");
      if(CO(DCOMSendControl))
      {
         METHOD(DCOMSendControl, resume) = Class_findMethod(CO(DCOMSendControl), "Resume", module);
         if(METHOD(DCOMSendControl, resume))
            DCOMSendControl_resume = (void (*)(C(DCOMSendControl)))METHOD(DCOMSendControl, resume)->function;

         METHOD(DCOMSendControl, stop) = Class_findMethod(CO(DCOMSendControl), "Stop", module);
         if(METHOD(DCOMSendControl, stop))
            DCOMSendControl_stop = (void (*)(C(DCOMSendControl)))METHOD(DCOMSendControl, stop)->function;
      }
      CO(DCOMServerObject) = eC_findClass(module, "DCOMServerObject");
      if(CO(DCOMServerObject))
      {
         METHOD(DCOMServerObject, callMethod) = Class_findMethod(CO(DCOMServerObject), "CallMethod", module);
         if(METHOD(DCOMServerObject, callMethod))
            M_VTBLID(DCOMServerObject, callMethod) = METHOD(DCOMServerObject, callMethod)->vid;

         METHOD(DCOMServerObject, callVirtualMethod) = Class_findMethod(CO(DCOMServerObject), "CallVirtualMethod", module);
         if(METHOD(DCOMServerObject, callVirtualMethod))
            DCOMServerObject_callVirtualMethod = (C(bool) (*)(C(DCOMServerObject), uint, C(bool)))METHOD(DCOMServerObject, callVirtualMethod)->function;
      }
      CO(DCOMServerSocket) = eC_findClass(module, "DCOMServerSocket");
      CO(DCOMService) = eC_findClass(module, "DCOMService");
      if(CO(DCOMService))
      {
         METHOD(DCOMService, start) = Class_findMethod(CO(DCOMService), "Start", module);
         if(METHOD(DCOMService, start))
            DCOMService_start = (C(bool) (*)(C(DCOMService)))METHOD(DCOMService, start)->function;

         METHOD(DCOMService, stop) = Class_findMethod(CO(DCOMService), "Stop", module);
         if(METHOD(DCOMService, stop))
            DCOMService_stop = (C(bool) (*)(C(DCOMService)))METHOD(DCOMService, stop)->function;
      }
      CO(DisconnectCode) = eC_findClass(module, "DisconnectCode");
      CO(FileServerConnection) = eC_findClass(module, "FileServerConnection");
      if(CO(FileServerConnection))
      {
         METHOD(FileServerConnection, open) = Class_findMethod(CO(FileServerConnection), "Open", module);
         if(METHOD(FileServerConnection, open))
            FileServerConnection_open = (C(NetworkClientFile) (*)(C(FileServerConnection), const char *, C(FileOpenMode)))METHOD(FileServerConnection, open)->function;
      }
      CO(HTTPFile) = eC_findClass(module, "HTTPFile");
      if(CO(HTTPFile))
      {
         METHOD(HTTPFile, openURL) = Class_findMethod(CO(HTTPFile), "OpenURL", module);
         if(METHOD(HTTPFile, openURL))
            HTTPFile_openURL = (C(bool) (*)(C(HTTPFile), const char *, const char *, char *))METHOD(HTTPFile, openURL)->function;

         PROPERTY(HTTPFile, reuseConnection) = Class_findProperty(CO(HTTPFile), "reuseConnection", module);
         if(PROPERTY(HTTPFile, reuseConnection))
         {
            HTTPFile_set_reuseConnection = (void *)PROPERTY(HTTPFile, reuseConnection)->Set;
            HTTPFile_get_reuseConnection = (void *)PROPERTY(HTTPFile, reuseConnection)->Get;
         }

         PROPERTY(HTTPFile, contentType) = Class_findProperty(CO(HTTPFile), "contentType", module);
         if(PROPERTY(HTTPFile, contentType))
            HTTPFile_get_contentType = (void *)PROPERTY(HTTPFile, contentType)->Get;

         PROPERTY(HTTPFile, contentDisposition) = Class_findProperty(CO(HTTPFile), "contentDisposition", module);
         if(PROPERTY(HTTPFile, contentDisposition))
            HTTPFile_get_contentDisposition = (void *)PROPERTY(HTTPFile, contentDisposition)->Get;
      }
      CO(NetworkClientFile) = eC_findClass(module, "NetworkClientFile");
      CO(Packet) = eC_findClass(module, "Packet");
      CO(SSLSocket) = eC_findClass(module, "SSLSocket");
      if(CO(SSLSocket))
      {
         METHOD(SSLSocket, establishConnection) = Class_findMethod(CO(SSLSocket), "EstablishConnection", module);
         if(METHOD(SSLSocket, establishConnection))
            SSLSocket_establishConnection = (C(bool) (*)(C(SSLSocket)))METHOD(SSLSocket, establishConnection)->function;

         PROPERTY(SSLSocket, autoEstablish) = Class_findProperty(CO(SSLSocket), "autoEstablish", module);
         if(PROPERTY(SSLSocket, autoEstablish))
         {
            SSLSocket_set_autoEstablish = (void *)PROPERTY(SSLSocket, autoEstablish)->Set;
            SSLSocket_get_autoEstablish = (void *)PROPERTY(SSLSocket, autoEstablish)->Get;
         }
      }
      CO(Service) = eC_findClass(module, "Service");
      if(CO(Service))
      {
         METHOD(Service, onAccept) = Class_findMethod(CO(Service), "OnAccept", module);
         if(METHOD(Service, onAccept))
            M_VTBLID(Service, onAccept) = METHOD(Service, onAccept)->vid;

         METHOD(Service, process) = Class_findMethod(CO(Service), "Process", module);
         if(METHOD(Service, process))
            Service_process = (C(bool) (*)(C(Service)))METHOD(Service, process)->function;

         METHOD(Service, processTimeOut) = Class_findMethod(CO(Service), "ProcessTimeOut", module);
         if(METHOD(Service, processTimeOut))
            Service_processTimeOut = (C(bool) (*)(C(Service), C(Time)))METHOD(Service, processTimeOut)->function;

         METHOD(Service, start) = Class_findMethod(CO(Service), "Start", module);
         if(METHOD(Service, start))
            Service_start = (C(bool) (*)(C(Service)))METHOD(Service, start)->function;

         METHOD(Service, stop) = Class_findMethod(CO(Service), "Stop", module);
         if(METHOD(Service, stop))
            Service_stop = (C(bool) (*)(C(Service)))METHOD(Service, stop)->function;

         PROPERTY(Service, port) = Class_findProperty(CO(Service), "port", module);
         if(PROPERTY(Service, port))
         {
            Service_set_port = (void *)PROPERTY(Service, port)->Set;
            Service_get_port = (void *)PROPERTY(Service, port)->Get;
         }

         PROPERTY(Service, firstClient) = Class_findProperty(CO(Service), "firstClient", module);
         if(PROPERTY(Service, firstClient))
            Service_get_firstClient = (void *)PROPERTY(Service, firstClient)->Get;

         PROPERTY(Service, processAlone) = Class_findProperty(CO(Service), "processAlone", module);
         if(PROPERTY(Service, processAlone))
         {
            Service_set_processAlone = (void *)PROPERTY(Service, processAlone)->Set;
            Service_get_processAlone = (void *)PROPERTY(Service, processAlone)->Get;
         }
      }
      CO(Socket) = eC_findClass(module, "Socket");
      if(CO(Socket))
      {
         METHOD(Socket, connect) = Class_findMethod(CO(Socket), "Connect", module);
         if(METHOD(Socket, connect))
            Socket_connect = (C(bool) (*)(C(Socket), const char *, int))METHOD(Socket, connect)->function;

         METHOD(Socket, datagramConnect) = Class_findMethod(CO(Socket), "DatagramConnect", module);
         if(METHOD(Socket, datagramConnect))
            Socket_datagramConnect = (C(bool) (*)(C(Socket), const char *, int))METHOD(Socket, datagramConnect)->function;

         METHOD(Socket, datagramHost) = Class_findMethod(CO(Socket), "DatagramHost", module);
         if(METHOD(Socket, datagramHost))
            Socket_datagramHost = (C(bool) (*)(C(Socket), int))METHOD(Socket, datagramHost)->function;

         METHOD(Socket, disconnect) = Class_findMethod(CO(Socket), "Disconnect", module);
         if(METHOD(Socket, disconnect))
            Socket_disconnect = (void (*)(C(Socket), C(DisconnectCode)))METHOD(Socket, disconnect)->function;

         METHOD(Socket, onConnect) = Class_findMethod(CO(Socket), "OnConnect", module);
         if(METHOD(Socket, onConnect))
            M_VTBLID(Socket, onConnect) = METHOD(Socket, onConnect)->vid;

         METHOD(Socket, onDisconnect) = Class_findMethod(CO(Socket), "OnDisconnect", module);
         if(METHOD(Socket, onDisconnect))
            M_VTBLID(Socket, onDisconnect) = METHOD(Socket, onDisconnect)->vid;

         METHOD(Socket, onEstablishConnection) = Class_findMethod(CO(Socket), "OnEstablishConnection", module);
         if(METHOD(Socket, onEstablishConnection))
            M_VTBLID(Socket, onEstablishConnection) = METHOD(Socket, onEstablishConnection)->vid;

         METHOD(Socket, onReceive) = Class_findMethod(CO(Socket), "OnReceive", module);
         if(METHOD(Socket, onReceive))
            M_VTBLID(Socket, onReceive) = METHOD(Socket, onReceive)->vid;

         METHOD(Socket, onReceivePacket) = Class_findMethod(CO(Socket), "OnReceivePacket", module);
         if(METHOD(Socket, onReceivePacket))
            M_VTBLID(Socket, onReceivePacket) = METHOD(Socket, onReceivePacket)->vid;

         METHOD(Socket, process) = Class_findMethod(CO(Socket), "Process", module);
         if(METHOD(Socket, process))
            Socket_process = (C(bool) (*)(C(Socket)))METHOD(Socket, process)->function;

         METHOD(Socket, processTimeOut) = Class_findMethod(CO(Socket), "ProcessTimeOut", module);
         if(METHOD(Socket, processTimeOut))
            Socket_processTimeOut = (C(bool) (*)(C(Socket), C(Time)))METHOD(Socket, processTimeOut)->function;

         METHOD(Socket, receiveData) = Class_findMethod(CO(Socket), "ReceiveData", module);
         if(METHOD(Socket, receiveData))
            M_VTBLID(Socket, receiveData) = METHOD(Socket, receiveData)->vid;

         METHOD(Socket, send) = Class_findMethod(CO(Socket), "Send", module);
         if(METHOD(Socket, send))
            Socket_send = (C(bool) (*)(C(Socket), const void *, int))METHOD(Socket, send)->function;

         METHOD(Socket, sendData) = Class_findMethod(CO(Socket), "SendData", module);
         if(METHOD(Socket, sendData))
            M_VTBLID(Socket, sendData) = METHOD(Socket, sendData)->vid;

         METHOD(Socket, sendPacket) = Class_findMethod(CO(Socket), "SendPacket", module);
         if(METHOD(Socket, sendPacket))
            Socket_sendPacket = (C(bool) (*)(C(Socket), C(Packet) *))METHOD(Socket, sendPacket)->function;

         METHOD(Socket, sendString) = Class_findMethod(CO(Socket), "SendString", module);
         if(METHOD(Socket, sendString))
            Socket_sendString = (C(bool) (*)(C(Socket), const char *))METHOD(Socket, sendString)->function;

         METHOD(Socket, sendf) = Class_findMethod(CO(Socket), "Sendf", module);
         if(METHOD(Socket, sendf))
            Socket_sendf = (C(bool) (*)(C(Socket), const char *, ...))METHOD(Socket, sendf)->function;

         METHOD(Socket, safeDecRef) = Class_findMethod(CO(Socket), "safeDecRef", module);
         if(METHOD(Socket, safeDecRef))
            Socket_safeDecRef = (void (*)(C(Socket)))METHOD(Socket, safeDecRef)->function;

         METHOD(Socket, safeIncRef) = Class_findMethod(CO(Socket), "safeIncRef", module);
         if(METHOD(Socket, safeIncRef))
            Socket_safeIncRef = (void (*)(C(Socket)))METHOD(Socket, safeIncRef)->function;

         PROPERTY(Socket, service) = Class_findProperty(CO(Socket), "service", module);
         if(PROPERTY(Socket, service))
         {
            Socket_set_service = (void *)PROPERTY(Socket, service)->Set;
            Socket_get_service = (void *)PROPERTY(Socket, service)->Get;
         }

         PROPERTY(Socket, inetAddress) = Class_findProperty(CO(Socket), "inetAddress", module);
         if(PROPERTY(Socket, inetAddress))
            Socket_get_inetAddress = (void *)PROPERTY(Socket, inetAddress)->Get;

         PROPERTY(Socket, inetPort) = Class_findProperty(CO(Socket), "inetPort", module);
         if(PROPERTY(Socket, inetPort))
            Socket_get_inetPort = (void *)PROPERTY(Socket, inetPort)->Get;

         PROPERTY(Socket, next) = Class_findProperty(CO(Socket), "next", module);
         if(PROPERTY(Socket, next))
            Socket_get_next = (void *)PROPERTY(Socket, next)->Get;

         PROPERTY(Socket, connected) = Class_findProperty(CO(Socket), "connected", module);
         if(PROPERTY(Socket, connected))
            Socket_get_connected = (void *)PROPERTY(Socket, connected)->Get;

         PROPERTY(Socket, processAlone) = Class_findProperty(CO(Socket), "processAlone", module);
         if(PROPERTY(Socket, processAlone))
         {
            Socket_set_processAlone = (void *)PROPERTY(Socket, processAlone)->Set;
            Socket_get_processAlone = (void *)PROPERTY(Socket, processAlone)->Get;
         }
      }
      CO(SocketType) = eC_findClass(module, "SocketType");
      CO(Archive) = eC_findClass(module, "Archive");
      if(CO(Archive))
      {
         METHOD(Archive, clear) = Class_findMethod(CO(Archive), "Clear", module);
         if(METHOD(Archive, clear))
            M_VTBLID(Archive, clear) = METHOD(Archive, clear)->vid;

         METHOD(Archive, fileExists) = Class_findMethod(CO(Archive), "FileExists", module);
         if(METHOD(Archive, fileExists))
            M_VTBLID(Archive, fileExists) = METHOD(Archive, fileExists)->vid;

         METHOD(Archive, fileOpen) = Class_findMethod(CO(Archive), "FileOpen", module);
         if(METHOD(Archive, fileOpen))
            M_VTBLID(Archive, fileOpen) = METHOD(Archive, fileOpen)->vid;

         METHOD(Archive, fileOpenAtPosition) = Class_findMethod(CO(Archive), "FileOpenAtPosition", module);
         if(METHOD(Archive, fileOpenAtPosition))
            M_VTBLID(Archive, fileOpenAtPosition) = METHOD(Archive, fileOpenAtPosition)->vid;

         METHOD(Archive, openDirectory) = Class_findMethod(CO(Archive), "OpenDirectory", module);
         if(METHOD(Archive, openDirectory))
            M_VTBLID(Archive, openDirectory) = METHOD(Archive, openDirectory)->vid;

         METHOD(Archive, setBufferRead) = Class_findMethod(CO(Archive), "SetBufferRead", module);
         if(METHOD(Archive, setBufferRead))
            M_VTBLID(Archive, setBufferRead) = METHOD(Archive, setBufferRead)->vid;

         METHOD(Archive, setBufferSize) = Class_findMethod(CO(Archive), "SetBufferSize", module);
         if(METHOD(Archive, setBufferSize))
            M_VTBLID(Archive, setBufferSize) = METHOD(Archive, setBufferSize)->vid;

         PROPERTY(Archive, totalSize) = Class_findProperty(CO(Archive), "totalSize", module);
         if(PROPERTY(Archive, totalSize))
         {
            Archive_set_totalSize = (void *)PROPERTY(Archive, totalSize)->Set;
            Archive_get_totalSize = (void *)PROPERTY(Archive, totalSize)->Get;
         }

         PROPERTY(Archive, bufferSize) = Class_findProperty(CO(Archive), "bufferSize", module);
         if(PROPERTY(Archive, bufferSize))
            Archive_set_bufferSize = (void *)PROPERTY(Archive, bufferSize)->Set;

         PROPERTY(Archive, bufferRead) = Class_findProperty(CO(Archive), "bufferRead", module);
         if(PROPERTY(Archive, bufferRead))
            Archive_set_bufferRead = (void *)PROPERTY(Archive, bufferRead)->Set;
      }
      CO(ArchiveAddMode) = eC_findClass(module, "ArchiveAddMode");
      CO(ArchiveDir) = eC_findClass(module, "ArchiveDir");
      if(CO(ArchiveDir))
      {
         METHOD(ArchiveDir, add) = Class_findMethod(CO(ArchiveDir), "Add", module);
         if(METHOD(ArchiveDir, add))
            ArchiveDir_add = (C(bool) (*)(C(ArchiveDir), const char *, const char *, C(ArchiveAddMode), int, int *, uint *))METHOD(ArchiveDir, add)->function;

         METHOD(ArchiveDir, addFromFile) = Class_findMethod(CO(ArchiveDir), "AddFromFile", module);
         if(METHOD(ArchiveDir, addFromFile))
            M_VTBLID(ArchiveDir, addFromFile) = METHOD(ArchiveDir, addFromFile)->vid;

         METHOD(ArchiveDir, addFromFileAtPosition) = Class_findMethod(CO(ArchiveDir), "AddFromFileAtPosition", module);
         if(METHOD(ArchiveDir, addFromFileAtPosition))
            M_VTBLID(ArchiveDir, addFromFileAtPosition) = METHOD(ArchiveDir, addFromFileAtPosition)->vid;

         METHOD(ArchiveDir, delete) = Class_findMethod(CO(ArchiveDir), "Delete", module);
         if(METHOD(ArchiveDir, delete))
            M_VTBLID(ArchiveDir, delete) = METHOD(ArchiveDir, delete)->vid;

         METHOD(ArchiveDir, fileExists) = Class_findMethod(CO(ArchiveDir), "FileExists", module);
         if(METHOD(ArchiveDir, fileExists))
            M_VTBLID(ArchiveDir, fileExists) = METHOD(ArchiveDir, fileExists)->vid;

         METHOD(ArchiveDir, fileOpen) = Class_findMethod(CO(ArchiveDir), "FileOpen", module);
         if(METHOD(ArchiveDir, fileOpen))
            M_VTBLID(ArchiveDir, fileOpen) = METHOD(ArchiveDir, fileOpen)->vid;

         METHOD(ArchiveDir, move) = Class_findMethod(CO(ArchiveDir), "Move", module);
         if(METHOD(ArchiveDir, move))
            M_VTBLID(ArchiveDir, move) = METHOD(ArchiveDir, move)->vid;

         METHOD(ArchiveDir, openDirectory) = Class_findMethod(CO(ArchiveDir), "OpenDirectory", module);
         if(METHOD(ArchiveDir, openDirectory))
            M_VTBLID(ArchiveDir, openDirectory) = METHOD(ArchiveDir, openDirectory)->vid;

         METHOD(ArchiveDir, rename) = Class_findMethod(CO(ArchiveDir), "Rename", module);
         if(METHOD(ArchiveDir, rename))
            M_VTBLID(ArchiveDir, rename) = METHOD(ArchiveDir, rename)->vid;
      }
      CO(ArchiveOpenFlags) = eC_findClass(module, "ArchiveOpenFlags");
      CO(Box) = eC_findClass(module, "Box");
      if(CO(Box))
      {
         METHOD(Box, clip) = Class_findMethod(CO(Box), "Clip", module);
         if(METHOD(Box, clip))
            Box_clip = (void (*)(C(Box) *, C(Box) *))METHOD(Box, clip)->function;

         METHOD(Box, clipOffset) = Class_findMethod(CO(Box), "ClipOffset", module);
         if(METHOD(Box, clipOffset))
            Box_clipOffset = (void (*)(C(Box) *, C(Box) *, int, int))METHOD(Box, clipOffset)->function;

         METHOD(Box, isPointInside) = Class_findMethod(CO(Box), "IsPointInside", module);
         if(METHOD(Box, isPointInside))
            Box_isPointInside = (C(bool) (*)(C(Box) *, C(Point) *))METHOD(Box, isPointInside)->function;

         METHOD(Box, overlap) = Class_findMethod(CO(Box), "Overlap", module);
         if(METHOD(Box, overlap))
            Box_overlap = (C(bool) (*)(C(Box) *, C(Box) *))METHOD(Box, overlap)->function;

         PROPERTY(Box, width) = Class_findProperty(CO(Box), "width", module);
         if(PROPERTY(Box, width))
         {
            Box_set_width = (void *)PROPERTY(Box, width)->Set;
            Box_get_width = (void *)PROPERTY(Box, width)->Get;
         }

         PROPERTY(Box, height) = Class_findProperty(CO(Box), "height", module);
         if(PROPERTY(Box, height))
         {
            Box_set_height = (void *)PROPERTY(Box, height)->Set;
            Box_get_height = (void *)PROPERTY(Box, height)->Get;
         }
      }
      CO(BufferedFile) = eC_findClass(module, "BufferedFile");
      if(CO(BufferedFile))
      {
         PROPERTY(BufferedFile, handle) = Class_findProperty(CO(BufferedFile), "handle", module);
         if(PROPERTY(BufferedFile, handle))
         {
            BufferedFile_set_handle = (void *)PROPERTY(BufferedFile, handle)->Set;
            BufferedFile_get_handle = (void *)PROPERTY(BufferedFile, handle)->Get;
         }

         PROPERTY(BufferedFile, bufferSize) = Class_findProperty(CO(BufferedFile), "bufferSize", module);
         if(PROPERTY(BufferedFile, bufferSize))
         {
            BufferedFile_set_bufferSize = (void *)PROPERTY(BufferedFile, bufferSize)->Set;
            BufferedFile_get_bufferSize = (void *)PROPERTY(BufferedFile, bufferSize)->Get;
         }

         PROPERTY(BufferedFile, bufferRead) = Class_findProperty(CO(BufferedFile), "bufferRead", module);
         if(PROPERTY(BufferedFile, bufferRead))
         {
            BufferedFile_set_bufferRead = (void *)PROPERTY(BufferedFile, bufferRead)->Set;
            BufferedFile_get_bufferRead = (void *)PROPERTY(BufferedFile, bufferRead)->Get;
         }
      }
      CO(Centimeters) = eC_findClass(module, "Centimeters");
      if(CO(Centimeters))
      {
         PROPERTY(Centimeters, Meters) = Class_findProperty(CO(Centimeters), "ecere::sys::Meters", module);
         if(PROPERTY(Centimeters, Meters))
         {
            Centimeters_from_Meters = (void *)PROPERTY(Centimeters, Meters)->Set;
            Centimeters_to_Meters = (void *)PROPERTY(Centimeters, Meters)->Get;
         }
      }
      CO(CharCategories) = eC_findClass(module, "CharCategories");
      CO(CharCategory) = eC_findClass(module, "CharCategory");
      CO(Condition) = eC_findClass(module, "Condition");
      if(CO(Condition))
      {
         METHOD(Condition, signal) = Class_findMethod(CO(Condition), "Signal", module);
         if(METHOD(Condition, signal))
            Condition_signal = (void (*)(C(Condition) *))METHOD(Condition, signal)->function;

         METHOD(Condition, wait) = Class_findMethod(CO(Condition), "Wait", module);
         if(METHOD(Condition, wait))
            Condition_wait = (void (*)(C(Condition) *, C(Mutex) *))METHOD(Condition, wait)->function;

         PROPERTY(Condition, name) = Class_findProperty(CO(Condition), "name", module);
         if(PROPERTY(Condition, name))
         {
            Condition_set_name = (void *)PROPERTY(Condition, name)->Set;
            Condition_get_name = (void *)PROPERTY(Condition, name)->Get;
         }
      }
      CO(ConsoleFile) = eC_findClass(module, "ConsoleFile");
      CO(Date) = eC_findClass(module, "Date");
      if(CO(Date))
      {
         METHOD(Date, onGetStringEn) = Class_findMethod(CO(Date), "OnGetStringEn", module);
         if(METHOD(Date, onGetStringEn))
            Date_onGetStringEn = (const char * (*)(C(Date) *, char *, void *, C(bool) *))METHOD(Date, onGetStringEn)->function;

         PROPERTY(Date, dayOfTheWeek) = Class_findProperty(CO(Date), "dayOfTheWeek", module);
         if(PROPERTY(Date, dayOfTheWeek))
            Date_get_dayOfTheWeek = (void *)PROPERTY(Date, dayOfTheWeek)->Get;
      }
      CO(DateTime) = eC_findClass(module, "DateTime");
      if(CO(DateTime))
      {
         METHOD(DateTime, fixDayOfYear) = Class_findMethod(CO(DateTime), "FixDayOfYear", module);
         if(METHOD(DateTime, fixDayOfYear))
            DateTime_fixDayOfYear = (C(bool) (*)(C(DateTime) *))METHOD(DateTime, fixDayOfYear)->function;

         METHOD(DateTime, getLocalTime) = Class_findMethod(CO(DateTime), "GetLocalTime", module);
         if(METHOD(DateTime, getLocalTime))
            DateTime_getLocalTime = (C(bool) (*)(C(DateTime) *))METHOD(DateTime, getLocalTime)->function;

         PROPERTY(DateTime, SecSince1970) = Class_findProperty(CO(DateTime), "ecere::sys::SecSince1970", module);
         if(PROPERTY(DateTime, SecSince1970))
         {
            DateTime_from_SecSince1970 = (void *)PROPERTY(DateTime, SecSince1970)->Set;
            DateTime_to_SecSince1970 = (void *)PROPERTY(DateTime, SecSince1970)->Get;
         }

         PROPERTY(DateTime, Date) = Class_findProperty(CO(DateTime), "ecere::sys::Date", module);
         if(PROPERTY(DateTime, Date))
         {
            DateTime_from_Date = (void *)PROPERTY(DateTime, Date)->Set;
            DateTime_to_Date = (void *)PROPERTY(DateTime, Date)->Get;
         }

         PROPERTY(DateTime, global) = Class_findProperty(CO(DateTime), "global", module);
         if(PROPERTY(DateTime, global))
         {
            DateTime_set_global = (void *)PROPERTY(DateTime, global)->Set;
            DateTime_get_global = (void *)PROPERTY(DateTime, global)->Get;
         }

         PROPERTY(DateTime, local) = Class_findProperty(CO(DateTime), "local", module);
         if(PROPERTY(DateTime, local))
         {
            DateTime_set_local = (void *)PROPERTY(DateTime, local)->Set;
            DateTime_get_local = (void *)PROPERTY(DateTime, local)->Get;
         }

         PROPERTY(DateTime, daysSince1970) = Class_findProperty(CO(DateTime), "daysSince1970", module);
         if(PROPERTY(DateTime, daysSince1970))
            DateTime_get_daysSince1970 = (void *)PROPERTY(DateTime, daysSince1970)->Get;
      }
      CO(DayOfTheWeek) = eC_findClass(module, "DayOfTheWeek");
      CO(Degrees) = eC_findClass(module, "Degrees");
      if(CO(Degrees))
      {
         PROPERTY(Degrees, Radians) = Class_findProperty(CO(Degrees), "ecere::sys::Radians", module);
         if(PROPERTY(Degrees, Radians))
         {
            Degrees_from_Radians = (void *)PROPERTY(Degrees, Radians)->Set;
            Degrees_to_Radians = (void *)PROPERTY(Degrees, Radians)->Get;
         }
      }
      CO(Distance) = eC_findClass(module, "Distance");
      CO(DualPipe) = eC_findClass(module, "DualPipe");
      if(CO(DualPipe))
      {
         METHOD(DualPipe, getExitCode) = Class_findMethod(CO(DualPipe), "GetExitCode", module);
         if(METHOD(DualPipe, getExitCode))
            DualPipe_getExitCode = (int (*)(C(DualPipe)))METHOD(DualPipe, getExitCode)->function;

         METHOD(DualPipe, getLinePeek) = Class_findMethod(CO(DualPipe), "GetLinePeek", module);
         if(METHOD(DualPipe, getLinePeek))
            DualPipe_getLinePeek = (C(bool) (*)(C(DualPipe), char *, int, int *))METHOD(DualPipe, getLinePeek)->function;

         METHOD(DualPipe, getProcessID) = Class_findMethod(CO(DualPipe), "GetProcessID", module);
         if(METHOD(DualPipe, getProcessID))
            DualPipe_getProcessID = (int (*)(C(DualPipe)))METHOD(DualPipe, getProcessID)->function;

         METHOD(DualPipe, peek) = Class_findMethod(CO(DualPipe), "Peek", module);
         if(METHOD(DualPipe, peek))
            DualPipe_peek = (C(bool) (*)(C(DualPipe)))METHOD(DualPipe, peek)->function;

         METHOD(DualPipe, terminate) = Class_findMethod(CO(DualPipe), "Terminate", module);
         if(METHOD(DualPipe, terminate))
            DualPipe_terminate = (void (*)(C(DualPipe)))METHOD(DualPipe, terminate)->function;

         METHOD(DualPipe, wait) = Class_findMethod(CO(DualPipe), "Wait", module);
         if(METHOD(DualPipe, wait))
            DualPipe_wait = (void (*)(C(DualPipe)))METHOD(DualPipe, wait)->function;
      }
      CO(ECONGlobalSettings) = eC_findClass(module, "ECONGlobalSettings");
      CO(ECONParser) = eC_findClass(module, "ECONParser");
      CO(ErrorCode) = eC_findClass(module, "ErrorCode");
      CO(ErrorLevel) = eC_findClass(module, "ErrorLevel");
      CO(Feet) = eC_findClass(module, "Feet");
      if(CO(Feet))
      {
         PROPERTY(Feet, Meters) = Class_findProperty(CO(Feet), "ecere::sys::Meters", module);
         if(PROPERTY(Feet, Meters))
         {
            Feet_from_Meters = (void *)PROPERTY(Feet, Meters)->Set;
            Feet_to_Meters = (void *)PROPERTY(Feet, Meters)->Get;
         }
      }
      CO(File) = eC_findClass(module, "File");
      if(CO(File))
      {
         METHOD(File, close) = Class_findMethod(CO(File), "Close", module);
         if(METHOD(File, close))
            M_VTBLID(File, close) = METHOD(File, close)->vid;

         METHOD(File, closeInput) = Class_findMethod(CO(File), "CloseInput", module);
         if(METHOD(File, closeInput))
            M_VTBLID(File, closeInput) = METHOD(File, closeInput)->vid;

         METHOD(File, closeOutput) = Class_findMethod(CO(File), "CloseOutput", module);
         if(METHOD(File, closeOutput))
            M_VTBLID(File, closeOutput) = METHOD(File, closeOutput)->vid;

         METHOD(File, copyTo) = Class_findMethod(CO(File), "CopyTo", module);
         if(METHOD(File, copyTo))
            File_copyTo = (C(bool) (*)(C(File), const char *))METHOD(File, copyTo)->function;

         METHOD(File, eof) = Class_findMethod(CO(File), "Eof", module);
         if(METHOD(File, eof))
            M_VTBLID(File, eof) = METHOD(File, eof)->vid;

         METHOD(File, flush) = Class_findMethod(CO(File), "Flush", module);
         if(METHOD(File, flush))
            File_flush = (C(bool) (*)(C(File)))METHOD(File, flush)->function;

         METHOD(File, getDouble) = Class_findMethod(CO(File), "GetDouble", module);
         if(METHOD(File, getDouble))
            File_getDouble = (double (*)(C(File)))METHOD(File, getDouble)->function;

         METHOD(File, getFloat) = Class_findMethod(CO(File), "GetFloat", module);
         if(METHOD(File, getFloat))
            File_getFloat = (float (*)(C(File)))METHOD(File, getFloat)->function;

         METHOD(File, getHexValue) = Class_findMethod(CO(File), "GetHexValue", module);
         if(METHOD(File, getHexValue))
            File_getHexValue = (uint (*)(C(File)))METHOD(File, getHexValue)->function;

         METHOD(File, getLine) = Class_findMethod(CO(File), "GetLine", module);
         if(METHOD(File, getLine))
            File_getLine = (C(bool) (*)(C(File), char *, int))METHOD(File, getLine)->function;

         METHOD(File, getLineEx) = Class_findMethod(CO(File), "GetLineEx", module);
         if(METHOD(File, getLineEx))
            File_getLineEx = (int (*)(C(File), char *, int, C(bool) *))METHOD(File, getLineEx)->function;

         METHOD(File, getSize) = Class_findMethod(CO(File), "GetSize", module);
         if(METHOD(File, getSize))
            M_VTBLID(File, getSize) = METHOD(File, getSize)->vid;

         METHOD(File, getString) = Class_findMethod(CO(File), "GetString", module);
         if(METHOD(File, getString))
            File_getString = (C(bool) (*)(C(File), char *, int))METHOD(File, getString)->function;

         METHOD(File, getValue) = Class_findMethod(CO(File), "GetValue", module);
         if(METHOD(File, getValue))
            File_getValue = (int (*)(C(File)))METHOD(File, getValue)->function;

         METHOD(File, getc) = Class_findMethod(CO(File), "Getc", module);
         if(METHOD(File, getc))
            M_VTBLID(File, getc) = METHOD(File, getc)->vid;

         METHOD(File, lock) = Class_findMethod(CO(File), "Lock", module);
         if(METHOD(File, lock))
            M_VTBLID(File, lock) = METHOD(File, lock)->vid;

         METHOD(File, print) = Class_findMethod(CO(File), "Print", module);
         if(METHOD(File, print))
            File_print = (void (*)(C(File), C(Class) *, void *, ...))METHOD(File, print)->function;

         METHOD(File, printLn) = Class_findMethod(CO(File), "PrintLn", module);
         if(METHOD(File, printLn))
            File_printLn = (void (*)(C(File), C(Class) *, void *, ...))METHOD(File, printLn)->function;

         METHOD(File, printf) = Class_findMethod(CO(File), "Printf", module);
         if(METHOD(File, printf))
            File_printf = (int (*)(C(File), const char *, ...))METHOD(File, printf)->function;

         METHOD(File, putc) = Class_findMethod(CO(File), "Putc", module);
         if(METHOD(File, putc))
            M_VTBLID(File, putc) = METHOD(File, putc)->vid;

         METHOD(File, puts) = Class_findMethod(CO(File), "Puts", module);
         if(METHOD(File, puts))
            M_VTBLID(File, puts) = METHOD(File, puts)->vid;

         METHOD(File, read) = Class_findMethod(CO(File), "Read", module);
         if(METHOD(File, read))
            M_VTBLID(File, read) = METHOD(File, read)->vid;

         METHOD(File, seek) = Class_findMethod(CO(File), "Seek", module);
         if(METHOD(File, seek))
            M_VTBLID(File, seek) = METHOD(File, seek)->vid;

         METHOD(File, seek64) = Class_findMethod(CO(File), "Seek64", module);
         if(METHOD(File, seek64))
            M_VTBLID(File, seek64) = METHOD(File, seek64)->vid;

         METHOD(File, tell) = Class_findMethod(CO(File), "Tell", module);
         if(METHOD(File, tell))
            M_VTBLID(File, tell) = METHOD(File, tell)->vid;

         METHOD(File, truncate) = Class_findMethod(CO(File), "Truncate", module);
         if(METHOD(File, truncate))
            M_VTBLID(File, truncate) = METHOD(File, truncate)->vid;

         METHOD(File, unlock) = Class_findMethod(CO(File), "Unlock", module);
         if(METHOD(File, unlock))
            M_VTBLID(File, unlock) = METHOD(File, unlock)->vid;

         METHOD(File, write) = Class_findMethod(CO(File), "Write", module);
         if(METHOD(File, write))
            M_VTBLID(File, write) = METHOD(File, write)->vid;

         PROPERTY(File, input) = Class_findProperty(CO(File), "input", module);
         if(PROPERTY(File, input))
         {
            File_set_input = (void *)PROPERTY(File, input)->Set;
            File_get_input = (void *)PROPERTY(File, input)->Get;
         }

         PROPERTY(File, output) = Class_findProperty(CO(File), "output", module);
         if(PROPERTY(File, output))
         {
            File_set_output = (void *)PROPERTY(File, output)->Set;
            File_get_output = (void *)PROPERTY(File, output)->Get;
         }

         PROPERTY(File, buffered) = Class_findProperty(CO(File), "buffered", module);
         if(PROPERTY(File, buffered))
            File_set_buffered = (void *)PROPERTY(File, buffered)->Set;

         PROPERTY(File, eof) = Class_findProperty(CO(File), "eof", module);
         if(PROPERTY(File, eof))
            File_get_eof = (void *)PROPERTY(File, eof)->Get;
      }
      CO(FileAttribs) = eC_findClass(module, "FileAttribs");
      CO(FileChange) = eC_findClass(module, "FileChange");
      CO(FileListing) = eC_findClass(module, "FileListing");
      if(CO(FileListing))
      {
         METHOD(FileListing, find) = Class_findMethod(CO(FileListing), "Find", module);
         if(METHOD(FileListing, find))
            FileListing_find = (C(bool) (*)(C(FileListing) *))METHOD(FileListing, find)->function;

         METHOD(FileListing, stop) = Class_findMethod(CO(FileListing), "Stop", module);
         if(METHOD(FileListing, stop))
            FileListing_stop = (void (*)(C(FileListing) *))METHOD(FileListing, stop)->function;

         PROPERTY(FileListing, name) = Class_findProperty(CO(FileListing), "name", module);
         if(PROPERTY(FileListing, name))
            FileListing_get_name = (void *)PROPERTY(FileListing, name)->Get;

         PROPERTY(FileListing, path) = Class_findProperty(CO(FileListing), "path", module);
         if(PROPERTY(FileListing, path))
            FileListing_get_path = (void *)PROPERTY(FileListing, path)->Get;

         PROPERTY(FileListing, stats) = Class_findProperty(CO(FileListing), "stats", module);
         if(PROPERTY(FileListing, stats))
            FileListing_get_stats = (void *)PROPERTY(FileListing, stats)->Get;
      }
      CO(FileLock) = eC_findClass(module, "FileLock");
      CO(FileMonitor) = eC_findClass(module, "FileMonitor");
      if(CO(FileMonitor))
      {
         METHOD(FileMonitor, onDirNotify) = Class_findMethod(CO(FileMonitor), "OnDirNotify", module);
         if(METHOD(FileMonitor, onDirNotify))
            M_VTBLID(FileMonitor, onDirNotify) = METHOD(FileMonitor, onDirNotify)->vid;

         METHOD(FileMonitor, onFileNotify) = Class_findMethod(CO(FileMonitor), "OnFileNotify", module);
         if(METHOD(FileMonitor, onFileNotify))
            M_VTBLID(FileMonitor, onFileNotify) = METHOD(FileMonitor, onFileNotify)->vid;

         METHOD(FileMonitor, startMonitoring) = Class_findMethod(CO(FileMonitor), "StartMonitoring", module);
         if(METHOD(FileMonitor, startMonitoring))
            FileMonitor_startMonitoring = (void (*)(C(FileMonitor)))METHOD(FileMonitor, startMonitoring)->function;

         METHOD(FileMonitor, stopMonitoring) = Class_findMethod(CO(FileMonitor), "StopMonitoring", module);
         if(METHOD(FileMonitor, stopMonitoring))
            FileMonitor_stopMonitoring = (void (*)(C(FileMonitor)))METHOD(FileMonitor, stopMonitoring)->function;

         PROPERTY(FileMonitor, userData) = Class_findProperty(CO(FileMonitor), "userData", module);
         if(PROPERTY(FileMonitor, userData))
            FileMonitor_set_userData = (void *)PROPERTY(FileMonitor, userData)->Set;

         PROPERTY(FileMonitor, fileChange) = Class_findProperty(CO(FileMonitor), "fileChange", module);
         if(PROPERTY(FileMonitor, fileChange))
            FileMonitor_set_fileChange = (void *)PROPERTY(FileMonitor, fileChange)->Set;

         PROPERTY(FileMonitor, fileName) = Class_findProperty(CO(FileMonitor), "fileName", module);
         if(PROPERTY(FileMonitor, fileName))
         {
            FileMonitor_set_fileName = (void *)PROPERTY(FileMonitor, fileName)->Set;
            FileMonitor_get_fileName = (void *)PROPERTY(FileMonitor, fileName)->Get;
         }

         PROPERTY(FileMonitor, directoryName) = Class_findProperty(CO(FileMonitor), "directoryName", module);
         if(PROPERTY(FileMonitor, directoryName))
         {
            FileMonitor_set_directoryName = (void *)PROPERTY(FileMonitor, directoryName)->Set;
            FileMonitor_get_directoryName = (void *)PROPERTY(FileMonitor, directoryName)->Get;
         }
      }
      CO(FileOpenMode) = eC_findClass(module, "FileOpenMode");
      CO(FileSeekMode) = eC_findClass(module, "FileSeekMode");
      CO(FileSize) = eC_findClass(module, "FileSize");
      CO(FileSize64) = eC_findClass(module, "FileSize64");
      CO(FileStats) = eC_findClass(module, "FileStats");
      CO(GlobalAppSettings) = eC_findClass(module, "GlobalAppSettings");
      if(CO(GlobalAppSettings))
      {
         METHOD(GlobalAppSettings, getGlobalValue) = Class_findMethod(CO(GlobalAppSettings), "GetGlobalValue", module);
         if(METHOD(GlobalAppSettings, getGlobalValue))
            GlobalAppSettings_getGlobalValue = (C(bool) (*)(C(GlobalAppSettings), const char *, const char *, C(GlobalSettingType), void *))METHOD(GlobalAppSettings, getGlobalValue)->function;

         METHOD(GlobalAppSettings, putGlobalValue) = Class_findMethod(CO(GlobalAppSettings), "PutGlobalValue", module);
         if(METHOD(GlobalAppSettings, putGlobalValue))
            GlobalAppSettings_putGlobalValue = (C(bool) (*)(C(GlobalAppSettings), const char *, const char *, C(GlobalSettingType), const void *))METHOD(GlobalAppSettings, putGlobalValue)->function;
      }
      CO(GlobalSettingType) = eC_findClass(module, "GlobalSettingType");
      CO(GlobalSettings) = eC_findClass(module, "GlobalSettings");
      if(CO(GlobalSettings))
      {
         METHOD(GlobalSettings, close) = Class_findMethod(CO(GlobalSettings), "Close", module);
         if(METHOD(GlobalSettings, close))
            GlobalSettings_close = (void (*)(C(GlobalSettings)))METHOD(GlobalSettings, close)->function;

         METHOD(GlobalSettings, closeAndMonitor) = Class_findMethod(CO(GlobalSettings), "CloseAndMonitor", module);
         if(METHOD(GlobalSettings, closeAndMonitor))
            GlobalSettings_closeAndMonitor = (void (*)(C(GlobalSettings)))METHOD(GlobalSettings, closeAndMonitor)->function;

         METHOD(GlobalSettings, load) = Class_findMethod(CO(GlobalSettings), "Load", module);
         if(METHOD(GlobalSettings, load))
            M_VTBLID(GlobalSettings, load) = METHOD(GlobalSettings, load)->vid;

         METHOD(GlobalSettings, onAskReloadSettings) = Class_findMethod(CO(GlobalSettings), "OnAskReloadSettings", module);
         if(METHOD(GlobalSettings, onAskReloadSettings))
            M_VTBLID(GlobalSettings, onAskReloadSettings) = METHOD(GlobalSettings, onAskReloadSettings)->vid;

         METHOD(GlobalSettings, openAndLock) = Class_findMethod(CO(GlobalSettings), "OpenAndLock", module);
         if(METHOD(GlobalSettings, openAndLock))
            GlobalSettings_openAndLock = (C(bool) (*)(C(GlobalSettings), C(FileSize) *))METHOD(GlobalSettings, openAndLock)->function;

         METHOD(GlobalSettings, save) = Class_findMethod(CO(GlobalSettings), "Save", module);
         if(METHOD(GlobalSettings, save))
            M_VTBLID(GlobalSettings, save) = METHOD(GlobalSettings, save)->vid;

         PROPERTY(GlobalSettings, settingsName) = Class_findProperty(CO(GlobalSettings), "settingsName", module);
         if(PROPERTY(GlobalSettings, settingsName))
         {
            GlobalSettings_set_settingsName = (void *)PROPERTY(GlobalSettings, settingsName)->Set;
            GlobalSettings_get_settingsName = (void *)PROPERTY(GlobalSettings, settingsName)->Get;
         }

         PROPERTY(GlobalSettings, settingsExtension) = Class_findProperty(CO(GlobalSettings), "settingsExtension", module);
         if(PROPERTY(GlobalSettings, settingsExtension))
         {
            GlobalSettings_set_settingsExtension = (void *)PROPERTY(GlobalSettings, settingsExtension)->Set;
            GlobalSettings_get_settingsExtension = (void *)PROPERTY(GlobalSettings, settingsExtension)->Get;
         }

         PROPERTY(GlobalSettings, settingsDirectory) = Class_findProperty(CO(GlobalSettings), "settingsDirectory", module);
         if(PROPERTY(GlobalSettings, settingsDirectory))
         {
            GlobalSettings_set_settingsDirectory = (void *)PROPERTY(GlobalSettings, settingsDirectory)->Set;
            GlobalSettings_get_settingsDirectory = (void *)PROPERTY(GlobalSettings, settingsDirectory)->Get;
         }

         PROPERTY(GlobalSettings, settingsLocation) = Class_findProperty(CO(GlobalSettings), "settingsLocation", module);
         if(PROPERTY(GlobalSettings, settingsLocation))
         {
            GlobalSettings_set_settingsLocation = (void *)PROPERTY(GlobalSettings, settingsLocation)->Set;
            GlobalSettings_get_settingsLocation = (void *)PROPERTY(GlobalSettings, settingsLocation)->Get;
         }

         PROPERTY(GlobalSettings, settingsFilePath) = Class_findProperty(CO(GlobalSettings), "settingsFilePath", module);
         if(PROPERTY(GlobalSettings, settingsFilePath))
         {
            GlobalSettings_set_settingsFilePath = (void *)PROPERTY(GlobalSettings, settingsFilePath)->Set;
            GlobalSettings_get_settingsFilePath = (void *)PROPERTY(GlobalSettings, settingsFilePath)->Get;
         }

         PROPERTY(GlobalSettings, allowDefaultLocations) = Class_findProperty(CO(GlobalSettings), "allowDefaultLocations", module);
         if(PROPERTY(GlobalSettings, allowDefaultLocations))
         {
            GlobalSettings_set_allowDefaultLocations = (void *)PROPERTY(GlobalSettings, allowDefaultLocations)->Set;
            GlobalSettings_get_allowDefaultLocations = (void *)PROPERTY(GlobalSettings, allowDefaultLocations)->Get;
         }

         PROPERTY(GlobalSettings, allUsers) = Class_findProperty(CO(GlobalSettings), "allUsers", module);
         if(PROPERTY(GlobalSettings, allUsers))
         {
            GlobalSettings_set_allUsers = (void *)PROPERTY(GlobalSettings, allUsers)->Set;
            GlobalSettings_get_allUsers = (void *)PROPERTY(GlobalSettings, allUsers)->Get;
         }

         PROPERTY(GlobalSettings, portable) = Class_findProperty(CO(GlobalSettings), "portable", module);
         if(PROPERTY(GlobalSettings, portable))
         {
            GlobalSettings_set_portable = (void *)PROPERTY(GlobalSettings, portable)->Set;
            GlobalSettings_get_portable = (void *)PROPERTY(GlobalSettings, portable)->Get;
         }

         PROPERTY(GlobalSettings, driver) = Class_findProperty(CO(GlobalSettings), "driver", module);
         if(PROPERTY(GlobalSettings, driver))
         {
            GlobalSettings_set_driver = (void *)PROPERTY(GlobalSettings, driver)->Set;
            GlobalSettings_get_driver = (void *)PROPERTY(GlobalSettings, driver)->Get;
         }

         PROPERTY(GlobalSettings, isGlobalPath) = Class_findProperty(CO(GlobalSettings), "isGlobalPath", module);
         if(PROPERTY(GlobalSettings, isGlobalPath))
            GlobalSettings_get_isGlobalPath = (void *)PROPERTY(GlobalSettings, isGlobalPath)->Get;
      }
      CO(GlobalSettingsData) = eC_findClass(module, "GlobalSettingsData");
      CO(GlobalSettingsDriver) = eC_findClass(module, "GlobalSettingsDriver");
      if(CO(GlobalSettingsDriver))
      {
         METHOD(GlobalSettingsDriver, load) = Class_findMethod(CO(GlobalSettingsDriver), "Load", module);
         if(METHOD(GlobalSettingsDriver, load))
            M_VTBLID(GlobalSettingsDriver, load) = METHOD(GlobalSettingsDriver, load)->vid;

         METHOD(GlobalSettingsDriver, save) = Class_findMethod(CO(GlobalSettingsDriver), "Save", module);
         if(METHOD(GlobalSettingsDriver, save))
            M_VTBLID(GlobalSettingsDriver, save) = METHOD(GlobalSettingsDriver, save)->vid;
      }
      CO(GuiErrorCode) = eC_findClass(module, "GuiErrorCode");
      CO(JSONGlobalSettings) = eC_findClass(module, "JSONGlobalSettings");
      CO(JSONParser) = eC_findClass(module, "JSONParser");
      if(CO(JSONParser))
      {
         METHOD(JSONParser, getObject) = Class_findMethod(CO(JSONParser), "GetObject", module);
         if(METHOD(JSONParser, getObject))
            JSONParser_getObject = (C(JSONResult) (*)(C(JSONParser), C(Class) *, void **))METHOD(JSONParser, getObject)->function;
      }
      CO(JSONResult) = eC_findClass(module, "JSONResult");
      CO(LoggingMode) = eC_findClass(module, "LoggingMode");
      CO(Meters) = eC_findClass(module, "Meters");
      if(CO(Meters))
      {
      }
      CO(MinMaxValue) = eC_findClass(module, "MinMaxValue");
      CO(Month) = eC_findClass(module, "Month");
      if(CO(Month))
      {
         METHOD(Month, getNumDays) = Class_findMethod(CO(Month), "getNumDays", module);
         if(METHOD(Month, getNumDays))
            Month_getNumDays = (int (*)(C(Month), int))METHOD(Month, getNumDays)->function;
      }
      CO(MoveFileOptions) = eC_findClass(module, "MoveFileOptions");
      CO(PipeOpenMode) = eC_findClass(module, "PipeOpenMode");
      CO(Point) = eC_findClass(module, "Point");
      CO(Pointf) = eC_findClass(module, "Pointf");
      CO(PredefinedCharCategories) = eC_findClass(module, "PredefinedCharCategories");
      CO(Radians) = eC_findClass(module, "Radians");
      if(CO(Radians))
      {
      }
      CO(RepButton) = eC_findClass(module, "RepButton");
      if(CO(RepButton))
      {
         PROPERTY(RepButton, delay) = Class_findProperty(CO(RepButton), "delay", module);
         if(PROPERTY(RepButton, delay))
            RepButton_set_delay = (void *)PROPERTY(RepButton, delay)->Set;

         PROPERTY(RepButton, delay0) = Class_findProperty(CO(RepButton), "delay0", module);
         if(PROPERTY(RepButton, delay0))
            RepButton_set_delay0 = (void *)PROPERTY(RepButton, delay0)->Set;
      }
      CO(SecSince1970) = eC_findClass(module, "SecSince1970");
      if(CO(SecSince1970))
      {
         PROPERTY(SecSince1970, global) = Class_findProperty(CO(SecSince1970), "global", module);
         if(PROPERTY(SecSince1970, global))
            SecSince1970_get_global = (void *)PROPERTY(SecSince1970, global)->Get;

         PROPERTY(SecSince1970, local) = Class_findProperty(CO(SecSince1970), "local", module);
         if(PROPERTY(SecSince1970, local))
            SecSince1970_get_local = (void *)PROPERTY(SecSince1970, local)->Get;
      }
      CO(Seconds) = eC_findClass(module, "Seconds");
      if(CO(Seconds))
      {
      }
      CO(Semaphore) = eC_findClass(module, "Semaphore");
      if(CO(Semaphore))
      {
         METHOD(Semaphore, release) = Class_findMethod(CO(Semaphore), "Release", module);
         if(METHOD(Semaphore, release))
            Semaphore_release = (void (*)(C(Semaphore) *))METHOD(Semaphore, release)->function;

         METHOD(Semaphore, tryWait) = Class_findMethod(CO(Semaphore), "TryWait", module);
         if(METHOD(Semaphore, tryWait))
            Semaphore_tryWait = (C(bool) (*)(C(Semaphore) *))METHOD(Semaphore, tryWait)->function;

         METHOD(Semaphore, wait) = Class_findMethod(CO(Semaphore), "Wait", module);
         if(METHOD(Semaphore, wait))
            Semaphore_wait = (void (*)(C(Semaphore) *))METHOD(Semaphore, wait)->function;

         PROPERTY(Semaphore, initCount) = Class_findProperty(CO(Semaphore), "initCount", module);
         if(PROPERTY(Semaphore, initCount))
         {
            Semaphore_set_initCount = (void *)PROPERTY(Semaphore, initCount)->Set;
            Semaphore_get_initCount = (void *)PROPERTY(Semaphore, initCount)->Get;
         }

         PROPERTY(Semaphore, maxCount) = Class_findProperty(CO(Semaphore), "maxCount", module);
         if(PROPERTY(Semaphore, maxCount))
         {
            Semaphore_set_maxCount = (void *)PROPERTY(Semaphore, maxCount)->Set;
            Semaphore_get_maxCount = (void *)PROPERTY(Semaphore, maxCount)->Get;
         }
      }
      CO(SetBool) = eC_findClass(module, "SetBool");
      CO(SettingsIOResult) = eC_findClass(module, "SettingsIOResult");
      CO(Size) = eC_findClass(module, "Size");
      CO(SysErrorCode) = eC_findClass(module, "SysErrorCode");
      CO(TempFile) = eC_findClass(module, "TempFile");
      if(CO(TempFile))
      {
         PROPERTY(TempFile, openMode) = Class_findProperty(CO(TempFile), "openMode", module);
         if(PROPERTY(TempFile, openMode))
         {
            TempFile_set_openMode = (void *)PROPERTY(TempFile, openMode)->Set;
            TempFile_get_openMode = (void *)PROPERTY(TempFile, openMode)->Get;
         }

         PROPERTY(TempFile, buffer) = Class_findProperty(CO(TempFile), "buffer", module);
         if(PROPERTY(TempFile, buffer))
            TempFile_get_buffer = (void *)PROPERTY(TempFile, buffer)->Get;
      }
      CO(Thread) = eC_findClass(module, "Thread");
      if(CO(Thread))
      {
         METHOD(Thread, create) = Class_findMethod(CO(Thread), "Create", module);
         if(METHOD(Thread, create))
            Thread_create = (void (*)(C(Thread)))METHOD(Thread, create)->function;

         METHOD(Thread, kill) = Class_findMethod(CO(Thread), "Kill", module);
         if(METHOD(Thread, kill))
            Thread_kill = (void (*)(C(Thread)))METHOD(Thread, kill)->function;

         METHOD(Thread, main) = Class_findMethod(CO(Thread), "Main", module);
         if(METHOD(Thread, main))
            M_VTBLID(Thread, main) = METHOD(Thread, main)->vid;

         METHOD(Thread, setPriority) = Class_findMethod(CO(Thread), "SetPriority", module);
         if(METHOD(Thread, setPriority))
            Thread_setPriority = (void (*)(C(Thread), C(ThreadPriority)))METHOD(Thread, setPriority)->function;

         METHOD(Thread, wait) = Class_findMethod(CO(Thread), "Wait", module);
         if(METHOD(Thread, wait))
            Thread_wait = (void (*)(C(Thread)))METHOD(Thread, wait)->function;

         PROPERTY(Thread, created) = Class_findProperty(CO(Thread), "created", module);
         if(PROPERTY(Thread, created))
            Thread_get_created = (void *)PROPERTY(Thread, created)->Get;
      }
      CO(ThreadPriority) = eC_findClass(module, "ThreadPriority");
      CO(Time) = eC_findClass(module, "Time");
      CO(TimeStamp) = eC_findClass(module, "TimeStamp");
      if(CO(TimeStamp))
      {
      }
      CO(TimeStamp32) = eC_findClass(module, "TimeStamp32");



         // Set up all the function pointers, ...

      FUNCTION(bestColorMatch) = eC_findFunction(module, "BestColorMatch");
      if(FUNCTION(bestColorMatch))
         bestColorMatch = (void *)FUNCTION(bestColorMatch)->function;

      FUNCTION(getColorDepthShifts) = eC_findFunction(module, "GetColorDepthShifts");
      if(FUNCTION(getColorDepthShifts))
         getColorDepthShifts = (void *)FUNCTION(getColorDepthShifts)->function;

      FUNCTION(getDefaultMaterial) = eC_findFunction(module, "GetDefaultMaterial");
      if(FUNCTION(getDefaultMaterial))
         getDefaultMaterial = (void *)FUNCTION(getDefaultMaterial)->function;

      FUNCTION(getDefaultPalette) = eC_findFunction(module, "GetDefaultPalette");
      if(FUNCTION(getDefaultPalette))
         getDefaultPalette = (void *)FUNCTION(getDefaultPalette)->function;

      FUNCTION(getDepthBits) = eC_findFunction(module, "GetDepthBits");
      if(FUNCTION(getDepthBits))
         getDepthBits = (void *)FUNCTION(getDepthBits)->function;

      FUNCTION(getResolutionHeight) = eC_findFunction(module, "GetResolutionHeight");
      if(FUNCTION(getResolutionHeight))
         getResolutionHeight = (void *)FUNCTION(getResolutionHeight)->function;

      FUNCTION(getResolutionWidth) = eC_findFunction(module, "GetResolutionWidth");
      if(FUNCTION(getResolutionWidth))
         getResolutionWidth = (void *)FUNCTION(getResolutionWidth)->function;

      FUNCTION(listAvailableFonts) = eC_findFunction(module, "ListAvailableFonts");
      if(FUNCTION(listAvailableFonts))
         listAvailableFonts = (void *)FUNCTION(listAvailableFonts)->function;

      FUNCTION(loadPalette) = eC_findFunction(module, "LoadPalette");
      if(FUNCTION(loadPalette))
         loadPalette = (void *)FUNCTION(loadPalette)->function;

      FUNCTION(paletteGradient) = eC_findFunction(module, "PaletteGradient");
      if(FUNCTION(paletteGradient))
         paletteGradient = (void *)FUNCTION(paletteGradient)->function;

      FUNCTION(resolveCharFont) = eC_findFunction(module, "ResolveCharFont");
      if(FUNCTION(resolveCharFont))
         resolveCharFont = (void *)FUNCTION(resolveCharFont)->function;

      FUNCTION(resolveFont) = eC_findFunction(module, "ResolveFont");
      if(FUNCTION(resolveFont))
         resolveFont = (void *)FUNCTION(resolveFont)->function;

      FUNCTION(setPrintingDocumentName) = eC_findFunction(module, "SetPrintingDocumentName");
      if(FUNCTION(setPrintingDocumentName))
         setPrintingDocumentName = (void *)FUNCTION(setPrintingDocumentName)->function;

      FUNCTION(gLABBindBuffer) = eC_findFunction(module, "GLABBindBuffer");
      if(FUNCTION(gLABBindBuffer))
         gLABBindBuffer = (void *)FUNCTION(gLABBindBuffer)->function;

      FUNCTION(gLSetupFog) = eC_findFunction(module, "GLSetupFog");
      if(FUNCTION(gLSetupFog))
         gLSetupFog = (void *)FUNCTION(gLSetupFog)->function;

      FUNCTION(gLSetupLighting) = eC_findFunction(module, "GLSetupLighting");
      if(FUNCTION(gLSetupLighting))
         gLSetupLighting = (void *)FUNCTION(gLSetupLighting)->function;

      FUNCTION(gLSetupTexturing) = eC_findFunction(module, "GLSetupTexturing");
      if(FUNCTION(gLSetupTexturing))
         gLSetupTexturing = (void *)FUNCTION(gLSetupTexturing)->function;

      FUNCTION(useSingleGLContext) = eC_findFunction(module, "UseSingleGLContext");
      if(FUNCTION(useSingleGLContext))
         useSingleGLContext = (void *)FUNCTION(useSingleGLContext)->function;

      FUNCTION(glimtkBegin) = eC_findFunction(module, "glimtkBegin");
      if(FUNCTION(glimtkBegin))
         glimtkBegin = (void *)FUNCTION(glimtkBegin)->function;

      FUNCTION(glimtkColor3f) = eC_findFunction(module, "glimtkColor3f");
      if(FUNCTION(glimtkColor3f))
         glimtkColor3f = (void *)FUNCTION(glimtkColor3f)->function;

      FUNCTION(glimtkColor4f) = eC_findFunction(module, "glimtkColor4f");
      if(FUNCTION(glimtkColor4f))
         glimtkColor4f = (void *)FUNCTION(glimtkColor4f)->function;

      FUNCTION(glimtkColor4fv) = eC_findFunction(module, "glimtkColor4fv");
      if(FUNCTION(glimtkColor4fv))
         glimtkColor4fv = (void *)FUNCTION(glimtkColor4fv)->function;

      FUNCTION(glimtkColor4ub) = eC_findFunction(module, "glimtkColor4ub");
      if(FUNCTION(glimtkColor4ub))
         glimtkColor4ub = (void *)FUNCTION(glimtkColor4ub)->function;

      FUNCTION(glimtkEnd) = eC_findFunction(module, "glimtkEnd");
      if(FUNCTION(glimtkEnd))
         glimtkEnd = (void *)FUNCTION(glimtkEnd)->function;

      FUNCTION(glimtkNormal3d) = eC_findFunction(module, "glimtkNormal3d");
      if(FUNCTION(glimtkNormal3d))
         glimtkNormal3d = (void *)FUNCTION(glimtkNormal3d)->function;

      FUNCTION(glimtkNormal3f) = eC_findFunction(module, "glimtkNormal3f");
      if(FUNCTION(glimtkNormal3f))
         glimtkNormal3f = (void *)FUNCTION(glimtkNormal3f)->function;

      FUNCTION(glimtkNormal3fd) = eC_findFunction(module, "glimtkNormal3fd");
      if(FUNCTION(glimtkNormal3fd))
         glimtkNormal3fd = (void *)FUNCTION(glimtkNormal3fd)->function;

      FUNCTION(glimtkNormal3fv) = eC_findFunction(module, "glimtkNormal3fv");
      if(FUNCTION(glimtkNormal3fv))
         glimtkNormal3fv = (void *)FUNCTION(glimtkNormal3fv)->function;

      FUNCTION(glimtkRecti) = eC_findFunction(module, "glimtkRecti");
      if(FUNCTION(glimtkRecti))
         glimtkRecti = (void *)FUNCTION(glimtkRecti)->function;

      FUNCTION(glimtkTexCoord2d) = eC_findFunction(module, "glimtkTexCoord2d");
      if(FUNCTION(glimtkTexCoord2d))
         glimtkTexCoord2d = (void *)FUNCTION(glimtkTexCoord2d)->function;

      FUNCTION(glimtkTexCoord2f) = eC_findFunction(module, "glimtkTexCoord2f");
      if(FUNCTION(glimtkTexCoord2f))
         glimtkTexCoord2f = (void *)FUNCTION(glimtkTexCoord2f)->function;

      FUNCTION(glimtkTexCoord2fv) = eC_findFunction(module, "glimtkTexCoord2fv");
      if(FUNCTION(glimtkTexCoord2fv))
         glimtkTexCoord2fv = (void *)FUNCTION(glimtkTexCoord2fv)->function;

      FUNCTION(glimtkTexCoord2i) = eC_findFunction(module, "glimtkTexCoord2i");
      if(FUNCTION(glimtkTexCoord2i))
         glimtkTexCoord2i = (void *)FUNCTION(glimtkTexCoord2i)->function;

      FUNCTION(glimtkVertex2d) = eC_findFunction(module, "glimtkVertex2d");
      if(FUNCTION(glimtkVertex2d))
         glimtkVertex2d = (void *)FUNCTION(glimtkVertex2d)->function;

      FUNCTION(glimtkVertex2f) = eC_findFunction(module, "glimtkVertex2f");
      if(FUNCTION(glimtkVertex2f))
         glimtkVertex2f = (void *)FUNCTION(glimtkVertex2f)->function;

      FUNCTION(glimtkVertex2i) = eC_findFunction(module, "glimtkVertex2i");
      if(FUNCTION(glimtkVertex2i))
         glimtkVertex2i = (void *)FUNCTION(glimtkVertex2i)->function;

      FUNCTION(glimtkVertex3d) = eC_findFunction(module, "glimtkVertex3d");
      if(FUNCTION(glimtkVertex3d))
         glimtkVertex3d = (void *)FUNCTION(glimtkVertex3d)->function;

      FUNCTION(glimtkVertex3dv) = eC_findFunction(module, "glimtkVertex3dv");
      if(FUNCTION(glimtkVertex3dv))
         glimtkVertex3dv = (void *)FUNCTION(glimtkVertex3dv)->function;

      FUNCTION(glimtkVertex3f) = eC_findFunction(module, "glimtkVertex3f");
      if(FUNCTION(glimtkVertex3f))
         glimtkVertex3f = (void *)FUNCTION(glimtkVertex3f)->function;

      FUNCTION(glimtkVertex3fv) = eC_findFunction(module, "glimtkVertex3fv");
      if(FUNCTION(glimtkVertex3fv))
         glimtkVertex3fv = (void *)FUNCTION(glimtkVertex3fv)->function;

      FUNCTION(glmsFlushMatrices) = eC_findFunction(module, "glmsFlushMatrices");
      if(FUNCTION(glmsFlushMatrices))
         glmsFlushMatrices = (void *)FUNCTION(glmsFlushMatrices)->function;

      FUNCTION(glmsFrustum) = eC_findFunction(module, "glmsFrustum");
      if(FUNCTION(glmsFrustum))
         glmsFrustum = (void *)FUNCTION(glmsFrustum)->function;

      FUNCTION(glmsGetDoublev) = eC_findFunction(module, "glmsGetDoublev");
      if(FUNCTION(glmsGetDoublev))
         glmsGetDoublev = (void *)FUNCTION(glmsGetDoublev)->function;

      FUNCTION(glmsGetNearPlane) = eC_findFunction(module, "glmsGetNearPlane");
      if(FUNCTION(glmsGetNearPlane))
         glmsGetNearPlane = (void *)FUNCTION(glmsGetNearPlane)->function;

      FUNCTION(glmsLoadIdentity) = eC_findFunction(module, "glmsLoadIdentity");
      if(FUNCTION(glmsLoadIdentity))
         glmsLoadIdentity = (void *)FUNCTION(glmsLoadIdentity)->function;

      FUNCTION(glmsLoadMatrix) = eC_findFunction(module, "glmsLoadMatrix");
      if(FUNCTION(glmsLoadMatrix))
         glmsLoadMatrix = (void *)FUNCTION(glmsLoadMatrix)->function;

      FUNCTION(glmsLoadMatrixd) = eC_findFunction(module, "glmsLoadMatrixd");
      if(FUNCTION(glmsLoadMatrixd))
         glmsLoadMatrixd = (void *)FUNCTION(glmsLoadMatrixd)->function;

      FUNCTION(glmsLoadMatrixf) = eC_findFunction(module, "glmsLoadMatrixf");
      if(FUNCTION(glmsLoadMatrixf))
         glmsLoadMatrixf = (void *)FUNCTION(glmsLoadMatrixf)->function;

      FUNCTION(glmsMatrixMode) = eC_findFunction(module, "glmsMatrixMode");
      if(FUNCTION(glmsMatrixMode))
         glmsMatrixMode = (void *)FUNCTION(glmsMatrixMode)->function;

      FUNCTION(glmsMultMatrixd) = eC_findFunction(module, "glmsMultMatrixd");
      if(FUNCTION(glmsMultMatrixd))
         glmsMultMatrixd = (void *)FUNCTION(glmsMultMatrixd)->function;

      FUNCTION(glmsOrtho) = eC_findFunction(module, "glmsOrtho");
      if(FUNCTION(glmsOrtho))
         glmsOrtho = (void *)FUNCTION(glmsOrtho)->function;

      FUNCTION(glmsPopMatrix) = eC_findFunction(module, "glmsPopMatrix");
      if(FUNCTION(glmsPopMatrix))
         glmsPopMatrix = (void *)FUNCTION(glmsPopMatrix)->function;

      FUNCTION(glmsPushMatrix) = eC_findFunction(module, "glmsPushMatrix");
      if(FUNCTION(glmsPushMatrix))
         glmsPushMatrix = (void *)FUNCTION(glmsPushMatrix)->function;

      FUNCTION(glmsRotated) = eC_findFunction(module, "glmsRotated");
      if(FUNCTION(glmsRotated))
         glmsRotated = (void *)FUNCTION(glmsRotated)->function;

      FUNCTION(glmsScaled) = eC_findFunction(module, "glmsScaled");
      if(FUNCTION(glmsScaled))
         glmsScaled = (void *)FUNCTION(glmsScaled)->function;

      FUNCTION(glmsSetNearPlane) = eC_findFunction(module, "glmsSetNearPlane");
      if(FUNCTION(glmsSetNearPlane))
         glmsSetNearPlane = (void *)FUNCTION(glmsSetNearPlane)->function;

      FUNCTION(glmsTranslated) = eC_findFunction(module, "glmsTranslated");
      if(FUNCTION(glmsTranslated))
         glmsTranslated = (void *)FUNCTION(glmsTranslated)->function;

      FUNCTION(glsupLightModeli) = eC_findFunction(module, "glsupLightModeli");
      if(FUNCTION(glsupLightModeli))
         glsupLightModeli = (void *)FUNCTION(glsupLightModeli)->function;

      FUNCTION(glsupLineStipple) = eC_findFunction(module, "glsupLineStipple");
      if(FUNCTION(glsupLineStipple))
         glsupLineStipple = (void *)FUNCTION(glsupLineStipple)->function;

      FUNCTION(fastInvSqrt) = eC_findFunction(module, "FastInvSqrt");
      if(FUNCTION(fastInvSqrt))
         fastInvSqrt = (void *)FUNCTION(fastInvSqrt)->function;

      FUNCTION(fastInvSqrtDouble) = eC_findFunction(module, "FastInvSqrtDouble");
      if(FUNCTION(fastInvSqrtDouble))
         fastInvSqrtDouble = (void *)FUNCTION(fastInvSqrtDouble)->function;

      FUNCTION(applySkin) = eC_findFunction(module, "ApplySkin");
      if(FUNCTION(applySkin))
         applySkin = (void *)FUNCTION(applySkin)->function;

      FUNCTION(desktop3DFullScreen) = eC_findFunction(module, "Desktop3DFullScreen");
      if(FUNCTION(desktop3DFullScreen))
         desktop3DFullScreen = (void *)FUNCTION(desktop3DFullScreen)->function;

      FUNCTION(desktop3DGetClipBox) = eC_findFunction(module, "Desktop3DGetClipBox");
      if(FUNCTION(desktop3DGetClipBox))
         desktop3DGetClipBox = (void *)FUNCTION(desktop3DGetClipBox)->function;

      FUNCTION(desktop3DGetClippedWindow) = eC_findFunction(module, "Desktop3DGetClippedWindow");
      if(FUNCTION(desktop3DGetClippedWindow))
         desktop3DGetClippedWindow = (void *)FUNCTION(desktop3DGetClippedWindow)->function;

      FUNCTION(desktop3DGetWindowHandle) = eC_findFunction(module, "Desktop3DGetWindowHandle");
      if(FUNCTION(desktop3DGetWindowHandle))
         desktop3DGetWindowHandle = (void *)FUNCTION(desktop3DGetWindowHandle)->function;

      FUNCTION(desktop3DInitialize) = eC_findFunction(module, "Desktop3DInitialize");
      if(FUNCTION(desktop3DInitialize))
         desktop3DInitialize = (void *)FUNCTION(desktop3DInitialize)->function;

      FUNCTION(desktop3DMouseMessage) = eC_findFunction(module, "Desktop3DMouseMessage");
      if(FUNCTION(desktop3DMouseMessage))
         desktop3DMouseMessage = (void *)FUNCTION(desktop3DMouseMessage)->function;

      FUNCTION(desktop3DSetDesktopDirty) = eC_findFunction(module, "Desktop3DSetDesktopDirty");
      if(FUNCTION(desktop3DSetDesktopDirty))
         desktop3DSetDesktopDirty = (void *)FUNCTION(desktop3DSetDesktopDirty)->function;

      FUNCTION(desktop3DTitleBarClicked) = eC_findFunction(module, "Desktop3DTitleBarClicked");
      if(FUNCTION(desktop3DTitleBarClicked))
         desktop3DTitleBarClicked = (void *)FUNCTION(desktop3DTitleBarClicked)->function;

      FUNCTION(desktop3DUpdateDisplay) = eC_findFunction(module, "Desktop3DUpdateDisplay");
      if(FUNCTION(desktop3DUpdateDisplay))
         desktop3DUpdateDisplay = (void *)FUNCTION(desktop3DUpdateDisplay)->function;

      FUNCTION(unapplySkin) = eC_findFunction(module, "UnapplySkin");
      if(FUNCTION(unapplySkin))
         unapplySkin = (void *)FUNCTION(unapplySkin)->function;

      FUNCTION(connectToFileServer) = eC_findFunction(module, "ConnectToFileServer");
      if(FUNCTION(connectToFileServer))
         connectToFileServer = (void *)FUNCTION(connectToFileServer)->function;

      FUNCTION(fileOpenURL) = eC_findFunction(module, "FileOpenURL");
      if(FUNCTION(fileOpenURL))
         fileOpenURL = (void *)FUNCTION(fileOpenURL)->function;

      FUNCTION(getAddressFromName) = eC_findFunction(module, "GetAddressFromName");
      if(FUNCTION(getAddressFromName))
         getAddressFromName = (void *)FUNCTION(getAddressFromName)->function;

      FUNCTION(getHostName) = eC_findFunction(module, "GetHostName");
      if(FUNCTION(getHostName))
         getHostName = (void *)FUNCTION(getHostName)->function;

      FUNCTION(getNameFromAddress) = eC_findFunction(module, "GetNameFromAddress");
      if(FUNCTION(getNameFromAddress))
         getNameFromAddress = (void *)FUNCTION(getNameFromAddress)->function;

      FUNCTION(archiveOpen) = eC_findFunction(module, "ArchiveOpen");
      if(FUNCTION(archiveOpen))
         archiveOpen = (void *)FUNCTION(archiveOpen)->function;

      FUNCTION(archiveQuerySize) = eC_findFunction(module, "ArchiveQuerySize");
      if(FUNCTION(archiveQuerySize))
         archiveQuerySize = (void *)FUNCTION(archiveQuerySize)->function;

      FUNCTION(changeWorkingDir) = eC_findFunction(module, "ChangeWorkingDir");
      if(FUNCTION(changeWorkingDir))
         changeWorkingDir = (void *)FUNCTION(changeWorkingDir)->function;

      FUNCTION(charMatchCategories) = eC_findFunction(module, "CharMatchCategories");
      if(FUNCTION(charMatchCategories))
         charMatchCategories = (void *)FUNCTION(charMatchCategories)->function;

      FUNCTION(copyBytes) = eC_findFunction(module, "CopyBytes");
      if(FUNCTION(copyBytes))
         copyBytes = (void *)FUNCTION(copyBytes)->function;

      FUNCTION(copyBytesBy2) = eC_findFunction(module, "CopyBytesBy2");
      if(FUNCTION(copyBytesBy2))
         copyBytesBy2 = (void *)FUNCTION(copyBytesBy2)->function;

      FUNCTION(copyBytesBy4) = eC_findFunction(module, "CopyBytesBy4");
      if(FUNCTION(copyBytesBy4))
         copyBytesBy4 = (void *)FUNCTION(copyBytesBy4)->function;

      FUNCTION(copySystemPath) = eC_findFunction(module, "CopySystemPath");
      if(FUNCTION(copySystemPath))
         copySystemPath = (void *)FUNCTION(copySystemPath)->function;

      FUNCTION(copyUnixPath) = eC_findFunction(module, "CopyUnixPath");
      if(FUNCTION(copyUnixPath))
         copyUnixPath = (void *)FUNCTION(copyUnixPath)->function;

      FUNCTION(createTemporaryDir) = eC_findFunction(module, "CreateTemporaryDir");
      if(FUNCTION(createTemporaryDir))
         createTemporaryDir = (void *)FUNCTION(createTemporaryDir)->function;

      FUNCTION(createTemporaryFile) = eC_findFunction(module, "CreateTemporaryFile");
      if(FUNCTION(createTemporaryFile))
         createTemporaryFile = (void *)FUNCTION(createTemporaryFile)->function;

      FUNCTION(deleteFile) = eC_findFunction(module, "DeleteFile");
      if(FUNCTION(deleteFile))
         deleteFile = (void *)FUNCTION(deleteFile)->function;

      FUNCTION(dualPipeOpen) = eC_findFunction(module, "DualPipeOpen");
      if(FUNCTION(dualPipeOpen))
         dualPipeOpen = (void *)FUNCTION(dualPipeOpen)->function;

      FUNCTION(dualPipeOpenEnv) = eC_findFunction(module, "DualPipeOpenEnv");
      if(FUNCTION(dualPipeOpenEnv))
         dualPipeOpenEnv = (void *)FUNCTION(dualPipeOpenEnv)->function;

      FUNCTION(dualPipeOpenEnvf) = eC_findFunction(module, "DualPipeOpenEnvf");
      if(FUNCTION(dualPipeOpenEnvf))
         dualPipeOpenEnvf = (void *)FUNCTION(dualPipeOpenEnvf)->function;

      FUNCTION(dualPipeOpenf) = eC_findFunction(module, "DualPipeOpenf");
      if(FUNCTION(dualPipeOpenf))
         dualPipeOpenf = (void *)FUNCTION(dualPipeOpenf)->function;

      FUNCTION(dumpErrors) = eC_findFunction(module, "DumpErrors");
      if(FUNCTION(dumpErrors))
         dumpErrors = (void *)FUNCTION(dumpErrors)->function;

      FUNCTION(execute) = eC_findFunction(module, "Execute");
      if(FUNCTION(execute))
         execute = (void *)FUNCTION(execute)->function;

      FUNCTION(executeEnv) = eC_findFunction(module, "ExecuteEnv");
      if(FUNCTION(executeEnv))
         executeEnv = (void *)FUNCTION(executeEnv)->function;

      FUNCTION(executeWait) = eC_findFunction(module, "ExecuteWait");
      if(FUNCTION(executeWait))
         executeWait = (void *)FUNCTION(executeWait)->function;

      FUNCTION(fileExists) = eC_findFunction(module, "FileExists");
      if(FUNCTION(fileExists))
         fileExists = (void *)FUNCTION(fileExists)->function;

      FUNCTION(fileFixCase) = eC_findFunction(module, "FileFixCase");
      if(FUNCTION(fileFixCase))
         fileFixCase = (void *)FUNCTION(fileFixCase)->function;

      FUNCTION(fileGetSize) = eC_findFunction(module, "FileGetSize");
      if(FUNCTION(fileGetSize))
         fileGetSize = (void *)FUNCTION(fileGetSize)->function;

      FUNCTION(fileGetStats) = eC_findFunction(module, "FileGetStats");
      if(FUNCTION(fileGetStats))
         fileGetStats = (void *)FUNCTION(fileGetStats)->function;

      FUNCTION(fileOpen) = eC_findFunction(module, "FileOpen");
      if(FUNCTION(fileOpen))
         fileOpen = (void *)FUNCTION(fileOpen)->function;

      FUNCTION(fileOpenBuffered) = eC_findFunction(module, "FileOpenBuffered");
      if(FUNCTION(fileOpenBuffered))
         fileOpenBuffered = (void *)FUNCTION(fileOpenBuffered)->function;

      FUNCTION(fileSetAttribs) = eC_findFunction(module, "FileSetAttribs");
      if(FUNCTION(fileSetAttribs))
         fileSetAttribs = (void *)FUNCTION(fileSetAttribs)->function;

      FUNCTION(fileSetTime) = eC_findFunction(module, "FileSetTime");
      if(FUNCTION(fileSetTime))
         fileSetTime = (void *)FUNCTION(fileSetTime)->function;

      FUNCTION(fileTruncate) = eC_findFunction(module, "FileTruncate");
      if(FUNCTION(fileTruncate))
         fileTruncate = (void *)FUNCTION(fileTruncate)->function;

      FUNCTION(fillBytes) = eC_findFunction(module, "FillBytes");
      if(FUNCTION(fillBytes))
         fillBytes = (void *)FUNCTION(fillBytes)->function;

      FUNCTION(fillBytesBy2) = eC_findFunction(module, "FillBytesBy2");
      if(FUNCTION(fillBytesBy2))
         fillBytesBy2 = (void *)FUNCTION(fillBytesBy2)->function;

      FUNCTION(fillBytesBy4) = eC_findFunction(module, "FillBytesBy4");
      if(FUNCTION(fillBytesBy4))
         fillBytesBy4 = (void *)FUNCTION(fillBytesBy4)->function;

      FUNCTION(getAlNum) = eC_findFunction(module, "GetAlNum");
      if(FUNCTION(getAlNum))
         getAlNum = (void *)FUNCTION(getAlNum)->function;

      FUNCTION(getCharCategory) = eC_findFunction(module, "GetCharCategory");
      if(FUNCTION(getCharCategory))
         getCharCategory = (void *)FUNCTION(getCharCategory)->function;

      FUNCTION(getEnvironment) = eC_findFunction(module, "GetEnvironment");
      if(FUNCTION(getEnvironment))
         getEnvironment = (void *)FUNCTION(getEnvironment)->function;

      FUNCTION(getFreeSpace) = eC_findFunction(module, "GetFreeSpace");
      if(FUNCTION(getFreeSpace))
         getFreeSpace = (void *)FUNCTION(getFreeSpace)->function;

      FUNCTION(getLastErrorCode) = eC_findFunction(module, "GetLastErrorCode");
      if(FUNCTION(getLastErrorCode))
         getLastErrorCode = (void *)FUNCTION(getLastErrorCode)->function;

      FUNCTION(getRandom) = eC_findFunction(module, "GetRandom");
      if(FUNCTION(getRandom))
         getRandom = (void *)FUNCTION(getRandom)->function;

      FUNCTION(getSlashPathBuffer) = eC_findFunction(module, "GetSlashPathBuffer");
      if(FUNCTION(getSlashPathBuffer))
         getSlashPathBuffer = (void *)FUNCTION(getSlashPathBuffer)->function;

      FUNCTION(getSystemPathBuffer) = eC_findFunction(module, "GetSystemPathBuffer");
      if(FUNCTION(getSystemPathBuffer))
         getSystemPathBuffer = (void *)FUNCTION(getSystemPathBuffer)->function;

      FUNCTION(getTime) = eC_findFunction(module, "GetTime");
      if(FUNCTION(getTime))
         getTime = (void *)FUNCTION(getTime)->function;

      FUNCTION(getWorkingDir) = eC_findFunction(module, "GetWorkingDir");
      if(FUNCTION(getWorkingDir))
         getWorkingDir = (void *)FUNCTION(getWorkingDir)->function;

      FUNCTION(__log) = eC_findFunction(module, "Log");
      if(FUNCTION(__log))
         __log = (void *)FUNCTION(__log)->function;

      FUNCTION(logErrorCode) = eC_findFunction(module, "LogErrorCode");
      if(FUNCTION(logErrorCode))
         logErrorCode = (void *)FUNCTION(logErrorCode)->function;

      FUNCTION(__logf) = eC_findFunction(module, "Logf");
      if(FUNCTION(__logf))
         __logf = (void *)FUNCTION(__logf)->function;

      FUNCTION(makeDir) = eC_findFunction(module, "MakeDir");
      if(FUNCTION(makeDir))
         makeDir = (void *)FUNCTION(makeDir)->function;

      FUNCTION(makeSlashPath) = eC_findFunction(module, "MakeSlashPath");
      if(FUNCTION(makeSlashPath))
         makeSlashPath = (void *)FUNCTION(makeSlashPath)->function;

      FUNCTION(makeSystemPath) = eC_findFunction(module, "MakeSystemPath");
      if(FUNCTION(makeSystemPath))
         makeSystemPath = (void *)FUNCTION(makeSystemPath)->function;

      FUNCTION(moveBytes) = eC_findFunction(module, "MoveBytes");
      if(FUNCTION(moveBytes))
         moveBytes = (void *)FUNCTION(moveBytes)->function;

      FUNCTION(moveFile) = eC_findFunction(module, "MoveFile");
      if(FUNCTION(moveFile))
         moveFile = (void *)FUNCTION(moveFile)->function;

      FUNCTION(moveFileEx) = eC_findFunction(module, "MoveFileEx");
      if(FUNCTION(moveFileEx))
         moveFileEx = (void *)FUNCTION(moveFileEx)->function;

      FUNCTION(randomSeed) = eC_findFunction(module, "RandomSeed");
      if(FUNCTION(randomSeed))
         randomSeed = (void *)FUNCTION(randomSeed)->function;

      FUNCTION(removeDir) = eC_findFunction(module, "RemoveDir");
      if(FUNCTION(removeDir))
         removeDir = (void *)FUNCTION(removeDir)->function;

      FUNCTION(renameFile) = eC_findFunction(module, "RenameFile");
      if(FUNCTION(renameFile))
         renameFile = (void *)FUNCTION(renameFile)->function;

      FUNCTION(resetError) = eC_findFunction(module, "ResetError");
      if(FUNCTION(resetError))
         resetError = (void *)FUNCTION(resetError)->function;

      FUNCTION(setEnvironment) = eC_findFunction(module, "SetEnvironment");
      if(FUNCTION(setEnvironment))
         setEnvironment = (void *)FUNCTION(setEnvironment)->function;

      FUNCTION(setErrorLevel) = eC_findFunction(module, "SetErrorLevel");
      if(FUNCTION(setErrorLevel))
         setErrorLevel = (void *)FUNCTION(setErrorLevel)->function;

      FUNCTION(setLoggingMode) = eC_findFunction(module, "SetLoggingMode");
      if(FUNCTION(setLoggingMode))
         setLoggingMode = (void *)FUNCTION(setLoggingMode)->function;

      FUNCTION(shellOpen) = eC_findFunction(module, "ShellOpen");
      if(FUNCTION(shellOpen))
         shellOpen = (void *)FUNCTION(shellOpen)->function;

      FUNCTION(__sleep) = eC_findFunction(module, "Sleep");
      if(FUNCTION(__sleep))
         __sleep = (void *)FUNCTION(__sleep)->function;

      FUNCTION(uTF16BEtoUTF8Buffer) = eC_findFunction(module, "UTF16BEtoUTF8Buffer");
      if(FUNCTION(uTF16BEtoUTF8Buffer))
         uTF16BEtoUTF8Buffer = (void *)FUNCTION(uTF16BEtoUTF8Buffer)->function;

      FUNCTION(uTF8toISO8859_1) = eC_findFunction(module, "UTF8toISO8859_1");
      if(FUNCTION(uTF8toISO8859_1))
         uTF8toISO8859_1 = (void *)FUNCTION(uTF8toISO8859_1)->function;

      FUNCTION(uTF8toUTF16BufferLen) = eC_findFunction(module, "UTF8toUTF16BufferLen");
      if(FUNCTION(uTF8toUTF16BufferLen))
         uTF8toUTF16BufferLen = (void *)FUNCTION(uTF8toUTF16BufferLen)->function;

      FUNCTION(uTF8toUTF16Len) = eC_findFunction(module, "UTF8toUTF16Len");
      if(FUNCTION(uTF8toUTF16Len))
         uTF8toUTF16Len = (void *)FUNCTION(uTF8toUTF16Len)->function;

      FUNCTION(unsetEnvironment) = eC_findFunction(module, "UnsetEnvironment");
      if(FUNCTION(unsetEnvironment))
         unsetEnvironment = (void *)FUNCTION(unsetEnvironment)->function;

      FUNCTION(writeColorAlpha) = eC_findFunction(module, "WriteColorAlpha");
      if(FUNCTION(writeColorAlpha))
         writeColorAlpha = (void *)FUNCTION(writeColorAlpha)->function;

      FUNCTION(writeECONObject) = eC_findFunction(module, "WriteECONObject");
      if(FUNCTION(writeECONObject))
         writeECONObject = (void *)FUNCTION(writeECONObject)->function;

      FUNCTION(writeJSONObject) = eC_findFunction(module, "WriteJSONObject");
      if(FUNCTION(writeJSONObject))
         writeJSONObject = (void *)FUNCTION(writeJSONObject)->function;

   }
   return fromModule ? IPTR(fromModule, Module)->application : null;
}


